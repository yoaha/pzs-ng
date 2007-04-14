// GUI_Preferences_Sheet - Preferences interface of MediaInfo
// Copyright (C) 2005 Jerome Martinez, Zen@MediaArea.net
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//---------------------------------------------------------------------------

#ifndef GUI_Preferences_SheetH
#define GUI_Preferences_SheetH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <TntControls.hpp>
#include <TntStdCtrls.hpp>
#include <TntForms.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <TntComCtrls.hpp>
#include <TntGrids.hpp>
#include <ComCtrls.hpp>
#include <Grids.hpp>
#include <ZenLib/ZtringListListF.h>
using namespace ZenLib;
#define SHEETF_COLUMNS 100
//---------------------------------------------------------------------------
class TPreferences_SheetF : public TForm
{
__published:    // IDE-managed Components
    TLabel *Column_Text0;
    TTntComboBox *Column_Parameter0;
    TTntComboBox *Column_Kind0;
    TTntLabel *Label6;
    TTntComboBox *ColumnsCount;
    TTntButton *OK;
    TTntButton *Cancel;
    TTntStringGrid *Sheet_Show;
    TTntComboBox *Column_Size0;
    TTntComboBox *Column_Pos0;
    void __fastcall ColumnsCountChange(TObject *Sender);
    void __fastcall Column_Kind0Change(TObject *Sender);
    void __fastcall Column_Parameter0Change(TObject *Sender);
    void __fastcall FormResize(TObject *Sender);
    void __fastcall OKClick(TObject *Sender);
    void __fastcall Column_Size0Change(TObject *Sender);
    void __fastcall Column_Pos0Change(TObject *Sender);
private:    // User declarations
    ZtringListListF EditedSheet;
    void Columns_Adapt();
    int Columns_Count;
    TTntComboBox *Column_Kind[SHEETF_COLUMNS];
    TTntComboBox *Column_Pos[SHEETF_COLUMNS];
    TTntComboBox *Column_Parameter[SHEETF_COLUMNS];
    TTntComboBox *Column_Size[SHEETF_COLUMNS];
    TTntLabel *Column_Text[SHEETF_COLUMNS];
    ZtringListList Infos_Parameters[SHEETF_COLUMNS];
public:        // User declarations
    __fastcall TPreferences_SheetF(TComponent* Owner);
    int Run(const Ztring &Name);
};
//---------------------------------------------------------------------------
extern PACKAGE TPreferences_SheetF *Preferences_SheetF;
//---------------------------------------------------------------------------
#endif
