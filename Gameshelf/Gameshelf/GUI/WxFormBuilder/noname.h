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
#include <wx/textctrl.h>
#include <wx/panel.h>
#include <wx/radiobut.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame
{
	private:

	protected:
		wxStaticBitmap* m_bitmap2;
		wxToggleButton* m_toggleBtn20;
		wxStaticBitmap* m_bitmap21;
		wxToggleButton* m_toggleBtn201;
		wxStaticBitmap* m_bitmap22;
		wxToggleButton* m_toggleBtn202;
		wxStaticBitmap* m_bitmap23;
		wxToggleButton* m_toggleBtn203;
		wxMenuBar* MenuBar;
		wxMenu* Games;
		wxMenu* Players;
		wxMenu* Help;

		// Virtual event handlers, override them in your derived class
		virtual void openThree( wxMouseEvent& event ) { event.Skip(); }
		virtual void ConnectInit( wxMouseEvent& event ) { event.Skip(); }
		virtual void openThree( wxCommandEvent& event ) { event.Skip(); }
		virtual void CreditsOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void CreditsOnUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }


	public:

		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("FCAI Gameshelf"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1205,462 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MainFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class XO3x3
///////////////////////////////////////////////////////////////////////////////
class XO3x3 : public wxFrame
{
	private:

	protected:
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
		virtual void CreditsOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void CreditsOnUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }


	public:

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
		wxToggleButton* m_toggleBtn38;
		wxToggleButton* m_toggleBtn40;
		wxToggleButton* m_toggleBtn41;
		wxToggleButton* m_toggleBtn42;
		wxToggleButton* m_toggleBtn43;
		wxToggleButton* m_toggleBtn44;
		wxToggleButton* m_toggleBtn45;
		wxToggleButton* m_toggleBtn89;
		wxToggleButton* m_toggleBtn46;
		wxToggleButton* m_toggleBtn47;
		wxToggleButton* m_toggleBtn48;
		wxToggleButton* m_toggleBtn49;
		wxToggleButton* m_toggleBtn50;
		wxToggleButton* m_toggleBtn51;
		wxToggleButton* m_toggleBtn52;
		wxToggleButton* m_toggleBtn53;
		wxToggleButton* m_toggleBtn54;
		wxToggleButton* m_toggleBtn55;
		wxToggleButton* m_toggleBtn56;
		wxToggleButton* m_toggleBtn57;
		wxToggleButton* m_toggleBtn58;
		wxToggleButton* m_toggleBtn59;
		wxToggleButton* m_toggleBtn60;
		wxToggleButton* m_toggleBtn61;
		wxToggleButton* m_toggleBtn62;
		wxToggleButton* m_toggleBtn63;
		wxToggleButton* m_toggleBtn64;
		wxToggleButton* m_toggleBtn65;
		wxToggleButton* m_toggleBtn66;
		wxToggleButton* m_toggleBtn67;
		wxToggleButton* m_toggleBtn68;
		wxToggleButton* m_toggleBtn69;
		wxToggleButton* m_toggleBtn70;
		wxToggleButton* m_toggleBtn71;
		wxToggleButton* m_toggleBtn72;
		wxToggleButton* m_toggleBtn73;
		wxToggleButton* m_toggleBtn74;
		wxToggleButton* m_toggleBtn75;
		wxToggleButton* m_toggleBtn76;
		wxToggleButton* m_toggleBtn77;
		wxToggleButton* m_toggleBtn78;
		wxToggleButton* m_toggleBtn79;
		wxStaticText* GameStatusAndScore;
		wxMenuBar* MenuBar;
		wxMenu* Games;
		wxMenu* Players;
		wxMenu* Help;

		// Virtual event handlers, override them in your derived class
		virtual void openThree( wxCommandEvent& event ) { event.Skip(); }
		virtual void CreditsOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
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
		wxButton* CellNo14;
		wxButton* CellNo11;
		wxButton* CellNo13;
		wxButton* CellNo12;
		wxButton* CellNo10;
		wxButton* CellNo9;
		wxButton* CellNo3;
		wxButton* CellNo6;
		wxButton* CellNo1;
		wxStaticText* GameStatusAndScore;

		// Virtual event handlers, override them in your derived class
		virtual void openThree( wxCommandEvent& event ) { event.Skip(); }
		virtual void CreditsOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
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
		wxMenu* Games;
		wxMenu* Players;
		wxMenu* Help;

		// Virtual event handlers, override them in your derived class
		virtual void openThree( wxCommandEvent& event ) { event.Skip(); }
		virtual void CreditsOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
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
		virtual void CreditsOnMenuSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void CreditsOnUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }


	public:

		Credits( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Credits"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 600,318 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~Credits();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Players
///////////////////////////////////////////////////////////////////////////////
class Players : public wxDialog
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

		Players( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Players"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 400,200 ), long style = wxDEFAULT_DIALOG_STYLE );

		~Players();

};

