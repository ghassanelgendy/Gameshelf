#pragma once
#include <wx/wx.h>
#include <wx/string.h>
#include <wx/hyperlink.h>
#include <wx/wrapsizer.h>
using namespace std;

///////////////////////////////////////////////////////////////////////////
/// Class GUI Player
///////////////////////////////////////////////////////////////////////////
class GUI_Player {
protected:
	string name;
	char symbol;
public:
	string getName();
	void setName(string n);
	GUI_Player();
	GUI_Player(char symbol);
	GUI_Player(int order, char symbol);
	virtual void get_move(int& x, int& y);
	string to_string();
	char get_symbol();
};

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

	virtual void onCellClick(wxCommandEvent& event);
	void click();
	void OnCharEvent(wxKeyEvent& event);

public:
	void reset();
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

///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////
class GUI_RandomPlayer : public GUI_Player {
protected:
	int dimension;
public:
	GUI_RandomPlayer(char symbol, int dimension);
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
			wxString url = "https://github.com/ghassanelgendy/Gameshelf";
			if (!wxLaunchDefaultBrowser(url)) {
				wxMessageBox("Failed to open the browser.", "Error", wxOK | wxICON_ERROR, this);
			}
		}
	}
	virtual void openBug(wxCommandEvent& e) {
		int answer = wxMessageBox("You are going to be redirected to a google form", "Redirect Confirmation", wxYES_NO | wxICON_QUESTION, this);

		if (answer == wxYES) {
			wxString url = "https://forms.gle/VqFiaYeqEcHakuci9";
			if (!wxLaunchDefaultBrowser(url)) {
				wxMessageBox("Failed to open the browser.", "Error", wxOK | wxICON_ERROR, this);
			}
		}
	}
	virtual void launchCreditsFrame(wxCommandEvent& event) { CreateCredits(); }
	virtual void CreditsOnUpdateUI(wxUpdateUIEvent& event) { event.Skip(); }


public:
	MainFrame(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("FCAI Gameshelf"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(1270, 515), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);
	~MainFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class XO3x3
///////////////////////////////////////////////////////////////////////////////
class XO3x3 : public wxFrame
{	
private:
	short moves;
protected:
	wxButton* cells[3][3];
	wxStaticText* GameStatusAndScore;
	wxMenuBar* MenuBar;
	wxMenu* Help;
	bool isOver;

	virtual void onCellClick(wxCommandEvent& event); 
public:
	bool isDraw();
	void isWinner();
	void OnInstructions(wxCommandEvent& event);
	void rand_comp_move();
	XO3x3(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("3x3 Tic Tac Toe"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(456, 600), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);
	~XO3x3();
};

///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class PyramicTicTac
///////////////////////////////////////////////////////////////////////////////
class PyramicTicTac : public wxFrame
{
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
	void smart_comp_move();
	void OnInstructions(wxCommandEvent& event);
	void ResetButton(wxCommandEvent& event);

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
	wxButton* cells[5][5];
	wxStaticText* GameStatusAndScore;
	int currentPlayerIndex;
	wxMenuBar* MenuBar;
	wxMenu* Help;
	int turn;
	wxButton* ResetBtn;

public:
	int moves;
	bool is_draw();
	void rand_comp_move();
	void isWinner();
	void onCellClick(wxCommandEvent& event);
	XO5x5(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("5x5 Tic Tac Toe"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500, 600), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);
	~XO5x5();
	void OnInstructions(wxCommandEvent& event);
	void OnResetBtn(wxCommandEvent& event);
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

	virtual void openLinkGhassan(wxKeyEvent& event) { event.Skip(); }
	virtual void openLinkRowan(wxKeyEvent& event) { event.Skip(); }
	virtual void openLinkJana(wxKeyEvent& event) { event.Skip(); }


public:
	Credits(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Credits"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(634, 322), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);
	~Credits();
};

///////////////////////////////////////////////////////////////////////////////
/// Class Players
///////////////////////////////////////////////////////////////////////////////
class PlayersFrame : public wxDialog
{
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

	virtual void aiBtnOnRadioButton(wxCommandEvent& event) { event.Skip(); }
	virtual void doneBtnOnButtonClick(wxCommandEvent& event);
	virtual void OnRadioRightClick(wxMouseEvent& event);
	virtual void cancelBtnOnButtonClick(wxCommandEvent& event) { if (playerOneField->GetValue() == "" || playerTowField->GetValue() == "") { doneBtnOnButtonClick(event); } }
	virtual void OnRadioLeftClick(wxMouseEvent& event);
public:

	PlayersFrame(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Players"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(400, 200), long style = wxDEFAULT_DIALOG_STYLE);
	~PlayersFrame();

};

////////////////////////////////Globals//////////////////////////////////////
extern GUI_Player* players[2];
extern short clicks;
extern short currentPlayerIndex;
extern string winner;
extern string wallahyZhe2t;