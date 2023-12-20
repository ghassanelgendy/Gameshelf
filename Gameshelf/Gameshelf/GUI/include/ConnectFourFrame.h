///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.0.0-0-g0efcecf)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once
#include <wx/wx.h>
#include <wx/timer.h>
#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/menu.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/tglbtn.h>
#include <wx/hyperlink.h>
#include <wx/wrapsizer.h>
#include <wx/textctrl.h>
#include <wx/radiobut.h>
#include <wx/dialog.h>
#include "../../../Gameboard/include/BoardGame_Classes.hpp"
#include "Frames.h"
using namespace std;


///////////////////////////////////////////////////////////////////////////////
/// Class ConnectFour
///////////////////////////////////////////////////////////////////////////////
class ConnectFour : public wxFrame
{
private:
	int row, col;
	short moves;
protected:
	wxButton* cells[7][7];
	wxButton* ResetBtn;
	wxStaticText* GameStatusAndScore;
	wxMenuBar* MenuBar;
	wxMenu* Help;
	bool isOver;

	// Virtual event handlers, override them in your derived class
	virtual void onCellClick(wxCommandEvent& event);
	void click();
	void OnCharEvent(wxKeyEvent& event);

public:
	void ComputerPlay(int &row, int &col);
	void AIMove(int& row, int& col);
	int isWinner();
	bool isDraw();
	void OnInstructions(wxCommandEvent& event);
	void OnResetBtn(wxCommandEvent& event);
	void endGame();
	ConnectFour(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Connect Four"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(710, 700), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);
	~ConnectFour();
};
