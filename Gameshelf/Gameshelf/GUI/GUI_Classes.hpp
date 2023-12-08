///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.0.0-0-g0efcecf)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once
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
#include <wx/tglbtn.h>
#include <wx/sizer.h>
#include <wx/menu.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/wx.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame
{
	private:
	protected:
		wxStaticBitmap* m_bitmap2;
		wxButton* m_toggleBtn20;
		wxStaticBitmap* m_bitmap21;
		wxButton* m_toggleBtn201;
		wxStaticBitmap* m_bitmap22;
		wxButton* m_toggleBtn202;
		wxStaticBitmap* m_bitmap23;
		wxButton* m_toggleBtn203;
		wxMenuBar* MenuBar;
		wxMenu* Games;
		wxMenu* Players;
		wxMenu* Help;

		// Virtual event handlers, override them in your derived class
		virtual void openThree(wxCommandEvent& event );
		virtual void ConnectInit(wxCommandEvent& event );
		virtual void openFive(wxCommandEvent& event);
		virtual void PyramicInit(wxCommandEvent& event);
		virtual void CreditsOnUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }


	public:
		static wxString p1, p2;
		virtual void CreditsOnMenuSelection(wxCommandEvent& event);

		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("FCAI Gameshelf"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1205,462 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MainFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class XO3x3
///////////////////////////////////////////////////////////////////////////////
class XO3x3 : public wxFrame 
{
	private:
		int n_moves;
	protected:
		wxButton* cells[3][3];
		wxToggleButton* m_toggleBtn11;
		wxToggleButton* m_toggleBtn13;
		wxToggleButton* m_toggleBtn16;
		wxToggleButton* m_toggleBtn18;
		wxToggleButton* m_toggleBtn17;
		wxToggleButton* m_toggleBtn15;
		wxToggleButton* m_toggleBtn14;
		wxToggleButton* m_toggleBtn12;
		wxToggleButton* m_toggleBtn1;
		wxStaticText* GameStatusAndScore;
		wxMenuBar* MenuBar;
		wxMenu* Games;
		wxMenu* Players;
		wxMenu* Help;

		// Virtual event handlers, override them in your derived class
		virtual void openThree( wxCommandEvent& event ) { event.Skip(); }
		virtual void CreditsOnMenuSelection(wxCommandEvent& event);
		virtual void CreditsOnUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }


	public:
		
		void OnButtonClick(wxCommandEvent& event);
		XO3x3( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("3x3 Tic Tac Toe"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~XO3x3();

};

///////////////////////////////////////////////////////////////////////////////
/// Class ConnectFour
///////////////////////////////////////////////////////////////////////////////
class ConnectFour : public wxFrame
{
	private:

	protected:
		wxButton* cells[7][6];
		wxStaticText* GameStatusAndScore;
		wxMenuBar* MenuBar;
		wxMenu* Games;
		wxMenu* Players;
		wxMenu* Help;

		// Virtual event handlers, override them in your derived class
		virtual void openThree( wxCommandEvent& event ) { event.Skip(); }
		virtual void CreditsOnMenuSelection(wxCommandEvent& event);
		virtual void CreditsOnUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }


	public:

		ConnectFour( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Connect Four"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 710,700 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

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
		wxButton* cells[3][5];
		wxStaticText* GameStatusAndScore;

		// Virtual event handlers, override them in your derived class
		virtual void openThree( wxCommandEvent& event ) { event.Skip(); }
		virtual void CreditsOnMenuSelection(wxCommandEvent& event);

		virtual void CreditsOnUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }


	public:

		PyramicTicTac( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Pyramic Tic Tac Toe"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 600,400 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

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
		wxMenuBar* MenuBar;
		wxMenu* Games;
		wxMenu* Players;
		wxMenu* Help;

		// Virtual event handlers, override them in your derived class
		virtual void openThree( wxCommandEvent& event ) { event.Skip(); }
		virtual void CreditsOnMenuSelection(wxCommandEvent& event);
		virtual void CreditsOnUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }


	public:

		XO5x5( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("5x5 Tic Tac Toe"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~XO5x5();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Credits
///////////////////////////////////////////////////////////////////////////////
class Credits : public wxFrame
{
	private:

	protected:
		wxMenuBar* MenuBar;
		wxMenu* Games;
		wxMenu* Players;
		wxMenu* Help;
		wxStaticBitmap* m_bitmap7;
		wxStaticBitmap* m_bitmap5;
		wxStaticBitmap* m_bitmap6;
		wxStaticText* m_staticText9;

		// Virtual event handlers, override them in your derived class
		virtual void openThree( wxCommandEvent& event ) { event.Skip(); }
		virtual void CreditsOnUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }


	public:

		Credits( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Credits"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 600,318 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Credits();

};
///////////////////////////////////////////////////////////////////////////////
/// Class Players
///////////////////////////////////////////////////////////////////////////////
class PlayersFrame : public wxDialog
{
private:

protected:
	wxStaticText* m_staticText7;
	wxTextCtrl* m_textCtrl1;
	wxPanel* m_panel1;
	wxPanel* m_panel11;
	wxStaticText* m_staticText6;
	wxTextCtrl* m_textCtrl2;
	wxRadioButton* aiBtn;
	wxRadioButton* computerBtn;
	wxPanel* m_panel112;
	wxPanel* m_panel111;
	wxButton* doneBtn;
	wxButton* cancelBtn;

public:

	PlayersFrame(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Players"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(400, 200), long style = wxDEFAULT_DIALOG_STYLE);

	~PlayersFrame();
	void OnDone(wxCommandEvent& event);
	void onCancel(wxCommandEvent& event);

};

