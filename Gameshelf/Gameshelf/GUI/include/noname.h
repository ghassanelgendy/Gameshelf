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
using namespace std;
///////////////////////////////////////////////////////////////////////////

class GUI_Player {
protected:
	string name;
	char symbol;
public:
	string getName();
	void setName(string n);
	GUI_Player();
	// Two constructors to initiate player
	// Give player a symbol to use in playing
	// It can be X or O or others
	// Optionally, you can give him ID or order
	// Like Player 1 and Player 2
	GUI_Player(char symbol); // Needed for computer players
	GUI_Player(int order, char symbol);
	// Get desired move: x y (each between 0 and 2)
	// Virtual (can change for other player types)
	virtual void get_move(int& x, int& y);
	// Give player info as a string
	string to_string();
	// Get symbol used by player
	char get_symbol();
};
class GUI_RandomPlayer : public GUI_Player {
protected:
	int dimension;
public:
	GUI_RandomPlayer(char symbol, int dimension);
	void get_move(int& x, int& y);
};

///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame
{
private:

protected:
	wxStaticBitmap* SouretXO3x3;
	wxButton* XO3x3Btn;
	wxStaticBitmap* SouretXO5x5;
	wxButton* XO5x5Btn;
	wxStaticBitmap* SouretConnectFour;
	wxButton* ConnectFourBtn;
	wxStaticBitmap* SouretXOPyramid;
	wxButton* PyramicXOBtn;
	wxMenuBar* MenuBar;
	wxMenu* Games;
	wxMenu* Players;
	wxMenu* Help;
	void CreateCredits();
	void CreatePlayerModal();
	void Create3x3();
	void Create5x5();
	void CreateConnect4();
	void CreatePyramic();
	// Virtual event handlers, override them in your derived class
	virtual void MainFrameOnShow(wxShowEvent& event);
	virtual void launch3x3Frame(wxKeyEvent& event) { Create3x3(); };
	virtual void launch3x3Frame(wxCommandEvent& event) { Create3x3(); }
	virtual void launch5x5Frame(wxKeyEvent& event) { Create5x5(); }
	virtual void launch5x5Frame(wxCommandEvent& event) { Create5x5(); }
	virtual void launchConnectFourFrame(wxKeyEvent& event) { CreateConnect4(); }
	virtual void launchConnectFourFrame(wxCommandEvent& event) { CreateConnect4(); }
	virtual void launchPyramicXOFrame(wxKeyEvent& event) { CreatePyramic(); }
	virtual void launchPyramicXOFrame(wxCommandEvent& event) { CreatePyramic(); }
	virtual void launchPlayersModal(wxCommandEvent& event);
	virtual void openRepoLink(wxCommandEvent& event) {
		int answer = wxMessageBox("You are going to be redirected to github repository", "Redirect Confirmation", wxYES_NO | wxICON_QUESTION, this);

		if (answer == wxYES) {
			wxString url = "https://github.com/ghassanelgendy/CS213-A3/tree/main";
			if (!wxLaunchDefaultBrowser(url)) {
				wxMessageBox("Failed to open the browser.", "Error", wxOK | wxICON_ERROR, this);
			}
		}
	}
	virtual void launchCreditsFrame(wxCommandEvent& event) { CreateCredits(); }
	virtual void CreditsOnUpdateUI(wxUpdateUIEvent& event) { event.Skip(); }


public:
	void iconSetter();
	MainFrame(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("FCAI Gameshelf"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(1270, 515), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);
	~MainFrame();

};
///////////////////////////////////////////////////////////////////////////////
/// Class XO3x3
///////////////////////////////////////////////////////////////////////////////
class XO3x3 : public wxFrame, X_O_Board
{	
private:
	short moves;
protected:
	wxButton* cells[3][3];
	wxStaticText* GameStatusAndScore;
	wxMenuBar* MenuBar;
	wxMenu* Help;
	bool isOver;

	// Virtual event handlers, override them in your derived class
	virtual void onCellClick(wxCommandEvent& event); 


public:
	bool isDraw();
	void isWinner();
	void iconSetter();
	void OnInstructions(wxCommandEvent& event);

	XO3x3(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("3x3 Tic Tac Toe"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(456, 600), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

	~XO3x3();

};

///////////////////////////////////////////////////////////////////////////////
/// Class ConnectFour
///////////////////////////////////////////////////////////////////////////////
class ConnectFour : public wxFrame
{
private:
	short moves;
protected:
	wxButton* cells[7][7];
	wxStaticText* GameStatusAndScore;
	wxMenuBar* MenuBar;
	wxMenu* Help;

	// Virtual event handlers, override them in your derived class
	virtual void onCellClick(wxCommandEvent& event); 


public:
	void OnInstructions(wxCommandEvent& event);


	ConnectFour(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Connect Four"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(710, 700), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);
	bool isGameOver(short x, short y);
	bool checkLine(short x, short y, short dx, short dy, wxString symbol);
	~ConnectFour();

};

///////////////////////////////////////////////////////////////////////////////
/// Class PyramicTicTac
///////////////////////////////////////////////////////////////////////////////
class PyramicTicTac : public wxFrame
{
private:

protected:
	wxMenuBar* MenuBar;
	wxMenu* Games;
	wxMenu* Players;
	wxMenu* Help;
	wxButton* buttons[9];
	wxStaticText* GameStatusAndScore;
	wxBoxSizer* sizer;
	wxButton* resetButton;
	int board[9];
	int turn;
	bool is_winner(int player);
	void Reset();
	bool is_draw();
	void rand_comp_move();

	void OnInstructions(wxCommandEvent& event);
	void ResetButton(wxCommandEvent& event);

	virtual void CreditsOnUpdateUI(wxUpdateUIEvent& event) { event.Skip(); }


public:

	PyramicTicTac(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Pyramic Tic Tac Toe"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(600, 400), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);
	void OnButtonClicked(wxCommandEvent& event);
	~PyramicTicTac();

};

///////////////////////////////////////////////////////////////////////////////
/// Class XO5x5
///////////////////////////////////////////////////////////////////////////////
class XO5x5 : public wxFrame
{
private:

protected:
	wxToggleButton* CellNo25;
	wxToggleButton* CellNo24;
	wxToggleButton* CellNo23;
	wxToggleButton* CellNo22;
	wxToggleButton* CellNo20;
	wxToggleButton* CellNo21;
	wxToggleButton* CellNo19;
	wxToggleButton* CellNo18;
	wxToggleButton* CellNo16;
	wxToggleButton* CellNo17;
	wxToggleButton* CellNo15;
	wxToggleButton* CellNo14;
	wxToggleButton* CellNo13;
	wxToggleButton* CellNo12;
	wxToggleButton* CellNo11;
	wxToggleButton* CellNo10;
	wxToggleButton* CellNo9;
	wxToggleButton* CellNo7;
	wxToggleButton* CellNo8;
	wxToggleButton* CellNo5;
	wxToggleButton* CellNo6;
	wxToggleButton* CellNo3;
	wxToggleButton* CellNo4;
	wxToggleButton* CellNo2;
	wxToggleButton* CellNo1;
	wxStaticText* GameStatusAndScore;
	wxMenuBar* MenuBar;
	wxMenu* Help;

	// Virtual event handlers, override them in your derived class
	virtual void onCellClick(wxCommandEvent& event) { event.Skip(); }


public:

	XO5x5(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("5x5 Tic Tac Toe"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500, 600), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

	~XO5x5();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Credits
///////////////////////////////////////////////////////////////////////////////
class Credits : public wxFrame
{
private:

protected:
	wxHyperlinkCtrl* linkGhassan;
	wxHyperlinkCtrl* linRowan;
	wxHyperlinkCtrl* linkJana;
	wxStaticBitmap* GhassanPic;
	wxStaticBitmap* RowanPic;
	wxStaticBitmap* JanaPic;
	wxStaticText* CreditsStaticText;

	// Virtual event handlers, override them in your derived class
	virtual void openLinkGhassan(wxKeyEvent& event) { event.Skip(); }
	virtual void openLinkRowan(wxKeyEvent& event) { event.Skip(); }
	virtual void openLinkJana(wxKeyEvent& event) { event.Skip(); }


public:

	void iconSetter();

	Credits(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Credits"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(634, 322), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

	~Credits();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Players
///////////////////////////////////////////////////////////////////////////////
class PlayersFrame : public wxDialog
{
private:

protected:
	wxStaticText* playerOneStatic;
	wxTextCtrl* playerOneField;
	wxStaticText* playerTowStatic;
	wxTextCtrl* playerTowField;
	wxRadioButton* aiBtn;
	wxRadioButton* computerBtn;
	wxButton* doneBtn;
	wxButton* cancelBtn;
	wxStaticText* whoVSwho;

	// Virtual event handlers, override them in your derived class
	virtual void aiBtnOnRadioButton(wxCommandEvent& event) { event.Skip(); }
	virtual void computerBtnOnRadioButton(wxCommandEvent& event) { event.Skip(); }
	virtual void doneBtnOnButtonClick(wxCommandEvent& event);
	virtual void cancelBtnOnButtonClick(wxCommandEvent& event) { Destroy(); }



public:

	PlayersFrame(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Players"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(400, 200), long style = wxDEFAULT_DIALOG_STYLE);

	~PlayersFrame();

};

