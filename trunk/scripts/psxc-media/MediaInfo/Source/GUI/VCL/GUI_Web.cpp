//---------------------------------------------------------------------------
// Compilation condition
#ifndef MEDIAINFOGUI_UPDATE_NO
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "GUI_Web.h"
#include "Common/Preferences.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "SHDocVw_OCX"
#pragma resource "*.dfm"
TWebF *WebF;
//---------------------------------------------------------------------------
__fastcall TWebF::TWebF(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TWebF::Execute()
{
    Show();
    Browser->Navigate(WideString(L"http://mediainfo.sourceforge.net/Log?Name=MediaInfoGUI&Version=")+MediaInfo_Version_GUI+L"&Lib="+MediaInfo_Version_GUI);
}
//---------------------------------------------------------------------------
void __fastcall TWebF::BrowserNavigateComplete2(TObject *Sender,
      LPDISPATCH pDisp, Variant *URL)
{
    Hide();
}

//***************************************************************************
// C++
//***************************************************************************

#endif //MEDIAINFOGUI_UPDATE_NO

