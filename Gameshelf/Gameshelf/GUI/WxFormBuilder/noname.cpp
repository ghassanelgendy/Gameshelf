///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.0.0-0-g0efcecf)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "noname.h"

///////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );

	wxGridSizer* MainGridSizer;
	MainGridSizer = new wxGridSizer( 1, 4, 2, 0 );

	wxGridSizer* SizerAwelLe3ba;
	SizerAwelLe3ba = new wxGridSizer( 2, 0, 0, 0 );

	SouretXO3x3 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("three.bmp"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	SizerAwelLe3ba->Add( SouretXO3x3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	XO3x3Btn = new wxButton( this, wxID_ANY, wxT("3x3 XO "), wxDefaultPosition, wxSize( 70,35 ), 0 );
	XO3x3Btn->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	SizerAwelLe3ba->Add( XO3x3Btn, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_BOTTOM|wxALL, 5 );


	MainGridSizer->Add( SizerAwelLe3ba, 1, wxEXPAND, 0 );

	wxGridSizer* SizerTanyLe3ba;
	SizerTanyLe3ba = new wxGridSizer( 2, 0, 0, 0 );

	SouretXO5x5 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("five.bmp"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	SizerTanyLe3ba->Add( SouretXO5x5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	XO5x5Btn = new wxButton( this, wxID_ANY, wxT("5x5 XO "), wxDefaultPosition, wxSize( 70,35 ), 0 );
	XO5x5Btn->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	SizerTanyLe3ba->Add( XO5x5Btn, 0, wxALIGN_BOTTOM|wxALIGN_CENTER_HORIZONTAL|wxTOP|wxBOTTOM|wxLEFT, 5 );


	MainGridSizer->Add( SizerTanyLe3ba, 1, wxEXPAND, 5 );

	wxGridSizer* SizerTaletLe3ba;
	SizerTaletLe3ba = new wxGridSizer( 2, 0, 0, 0 );

	SouretConnectFour = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("connectfour.bmp"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	SizerTaletLe3ba->Add( SouretConnectFour, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	ConnectFourBtn = new wxButton( this, wxID_ANY, wxT("Connect Four"), wxDefaultPosition, wxSize( 90,35 ), 0 );
	ConnectFourBtn->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	SizerTaletLe3ba->Add( ConnectFourBtn, 0, wxALL|wxALIGN_BOTTOM|wxALIGN_CENTER_HORIZONTAL, 5 );


	MainGridSizer->Add( SizerTaletLe3ba, 1, wxEXPAND, 5 );

	wxGridSizer* SizerRabe3Le3ba;
	SizerRabe3Le3ba = new wxGridSizer( 2, 0, 0, 0 );

	SouretXOPyramid = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("pyramid.bmp"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	SizerRabe3Le3ba->Add( SouretXOPyramid, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	PyramicXOBtn = new wxButton( this, wxID_ANY, wxT("Pyramic XO"), wxDefaultPosition, wxSize( 90,35 ), 0 );
	PyramicXOBtn->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	SizerRabe3Le3ba->Add( PyramicXOBtn, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_BOTTOM, 5 );


	MainGridSizer->Add( SizerRabe3Le3ba, 1, wxEXPAND|wxRIGHT, 5 );


	this->SetSizer( MainGridSizer );
	this->Layout();
	MenuBar = new wxMenuBar( 0 );
	Games = new wxMenu();
	wxMenuItem* XO3x3;
	XO3x3 = new wxMenuItem( Games, wxID_ANY, wxString( wxT("3x3 XO") ) , wxEmptyString, wxITEM_NORMAL );
	Games->Append( XO3x3 );

	wxMenuItem* XO5x5;
	XO5x5 = new wxMenuItem( Games, wxID_ANY, wxString( wxT("5x5 XO") ) , wxEmptyString, wxITEM_NORMAL );
	Games->Append( XO5x5 );

	wxMenuItem* ConnectFour;
	ConnectFour = new wxMenuItem( Games, wxID_ANY, wxString( wxT("Connect Four") ) , wxEmptyString, wxITEM_NORMAL );
	Games->Append( ConnectFour );

	wxMenuItem* PyramicXO;
	PyramicXO = new wxMenuItem( Games, wxID_ANY, wxString( wxT("Pyramic XO") ) , wxEmptyString, wxITEM_NORMAL );
	Games->Append( PyramicXO );

	MenuBar->Append( Games, wxT("Games") );

	Players = new wxMenu();
	wxMenuItem* Player1;
	Player1 = new wxMenuItem( Players, wxID_ANY, wxString( wxT("Player 1 (X)") ) , wxEmptyString, wxITEM_NORMAL );
	Players->Append( Player1 );

	wxMenuItem* Player2;
	Player2 = new wxMenuItem( Players, wxID_ANY, wxString( wxT("Player 2 (O)") ) , wxEmptyString, wxITEM_NORMAL );
	Players->Append( Player2 );

	Players->AppendSeparator();

	wxMenuItem* EditPlayers;
	EditPlayers = new wxMenuItem( Players, wxID_ANY, wxString( wxT("Edit Players") ) , wxEmptyString, wxITEM_NORMAL );
	Players->Append( EditPlayers );

	MenuBar->Append( Players, wxT("Players") );

	Help = new wxMenu();
	wxMenuItem* SourceCode;
	SourceCode = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Source Code") ) + wxT('\t') + wxT("ALT+S"), wxT("See source code"), wxITEM_NORMAL );
	Help->Append( SourceCode );

	wxMenuItem* Credits;
	Credits = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Credits") ) + wxT('\t') + wxT("ALT+C"), wxEmptyString, wxITEM_NORMAL );
	Help->Append( Credits );

	MenuBar->Append( Help, wxT("Help") );

	this->SetMenuBar( MenuBar );


	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_SHOW, wxShowEventHandler( MainFrame::MainFrameOnShow ) );
	SouretXO3x3->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( MainFrame::launch3x3Frame ), NULL, this );
	XO3x3Btn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::launch3x3Frame ), NULL, this );
	SouretXO5x5->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( MainFrame::launch5x5Frame ), NULL, this );
	XO5x5Btn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::launch5x5Frame ), NULL, this );
	SouretConnectFour->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( MainFrame::launchConnectFourFrame ), NULL, this );
	ConnectFourBtn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::launchConnectFourFrame ), NULL, this );
	SouretXOPyramid->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( MainFrame::launchPyramicXOFrame ), NULL, this );
	PyramicXOBtn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::launchPyramicXOFrame ), NULL, this );
	Games->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::launch3x3Frame ), this, XO3x3->GetId());
	Games->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::launch5x5Frame ), this, XO5x5->GetId());
	Games->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::launchConnectFourFrame ), this, ConnectFour->GetId());
	Games->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::launchPyramicXOFrame ), this, PyramicXO->GetId());
	Players->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::launchPlayersModal ), this, EditPlayers->GetId());
	Help->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::openRepoLink ), this, SourceCode->GetId());
	Help->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::launchCreditsFrame ), this, Credits->GetId());
	this->Connect( Credits->GetId(), wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MainFrame::CreditsOnUpdateUI ) );
}

MainFrame::~MainFrame()
{
	// Disconnect Events
	this->Disconnect( wxEVT_SHOW, wxShowEventHandler( MainFrame::MainFrameOnShow ) );
	SouretXO3x3->Disconnect( wxEVT_KEY_DOWN, wxKeyEventHandler( MainFrame::launch3x3Frame ), NULL, this );
	XO3x3Btn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::launch3x3Frame ), NULL, this );
	SouretXO5x5->Disconnect( wxEVT_KEY_DOWN, wxKeyEventHandler( MainFrame::launch5x5Frame ), NULL, this );
	XO5x5Btn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::launch5x5Frame ), NULL, this );
	SouretConnectFour->Disconnect( wxEVT_KEY_DOWN, wxKeyEventHandler( MainFrame::launchConnectFourFrame ), NULL, this );
	ConnectFourBtn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::launchConnectFourFrame ), NULL, this );
	SouretXOPyramid->Disconnect( wxEVT_KEY_DOWN, wxKeyEventHandler( MainFrame::launchPyramicXOFrame ), NULL, this );
	PyramicXOBtn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::launchPyramicXOFrame ), NULL, this );
	this->Disconnect( wxID_ANY, wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MainFrame::CreditsOnUpdateUI ) );

}

XO3x3::XO3x3( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	wxGridSizer* boardContainer;
	boardContainer = new wxGridSizer( 4, 3, 0, 0 );

	Cell = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( Cell, 0, wxEXPAND, 5 );

	Cell2 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( Cell2, 0, wxEXPAND, 5 );

	Cell5 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( Cell5, 0, wxEXPAND, 5 );

	Cell8 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( Cell8, 0, wxEXPAND, 5 );

	Cell7 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( Cell7, 0, wxEXPAND, 5 );

	Cell6 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( Cell6, 0, wxEXPAND, 5 );

	Cell4 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( Cell4, 0, wxEXPAND, 5 );

	Cell3 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( Cell3, 0, wxEXPAND, 5 );

	Cell1 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( Cell1, 0, wxEXPAND, 5 );


	boardContainer->Add( 0, 0, 1, wxEXPAND, 5 );

	GameStatusAndScore = new wxStaticText( this, wxID_ANY, wxT("Player 1 (X) vs Player 2 (O)"), wxDefaultPosition, wxDefaultSize, 0 );
	GameStatusAndScore->Wrap( -1 );
	GameStatusAndScore->SetFont( wxFont( 12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Hacen Egypt") ) );
	GameStatusAndScore->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );
	GameStatusAndScore->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	boardContainer->Add( GameStatusAndScore, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );


	this->SetSizer( boardContainer );
	this->Layout();
	MenuBar = new wxMenuBar( 0 );
	Help = new wxMenu();
	wxMenuItem* Instructions;
	Instructions = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Instructions") ) + wxT('\t') + wxT("ALT+I"), wxEmptyString, wxITEM_NORMAL );
	Help->Append( Instructions );

	MenuBar->Append( Help, wxT("Help") );

	this->SetMenuBar( MenuBar );


	this->Centre( wxBOTH );

	// Connect Events
	Cell->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( XO3x3::onCellClick ), NULL, this );
}

XO3x3::~XO3x3()
{
	// Disconnect Events
	Cell->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( XO3x3::onCellClick ), NULL, this );

}

ConnectFour::ConnectFour( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 199, 5, 54 ) );

	wxGridSizer* boardContainer;
	boardContainer = new wxGridSizer( 7, 7, 0, 0 );

	thisOneIsCorrect = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( thisOneIsCorrect, 0, wxEXPAND, 5 );

	m_toggleBtn40 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn40, 0, wxEXPAND, 5 );

	m_toggleBtn41 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn41, 0, wxEXPAND, 5 );

	m_toggleBtn42 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toggleBtn42->SetValue( true );
	boardContainer->Add( m_toggleBtn42, 0, wxEXPAND, 5 );

	m_toggleBtn43 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn43, 0, wxEXPAND, 5 );

	m_toggleBtn44 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn44, 0, wxEXPAND, 5 );

	m_toggleBtn45 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn45, 0, wxEXPAND, 5 );

	m_toggleBtn89 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn89, 0, wxEXPAND, 5 );

	m_toggleBtn46 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn46, 0, wxEXPAND, 5 );

	m_toggleBtn47 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn47, 0, wxEXPAND, 5 );

	m_toggleBtn48 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn48, 0, wxEXPAND, 5 );

	m_toggleBtn49 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toggleBtn49->SetValue( true );
	boardContainer->Add( m_toggleBtn49, 0, wxEXPAND, 5 );

	m_toggleBtn50 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn50, 0, wxEXPAND, 5 );

	m_toggleBtn51 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn51, 0, wxEXPAND, 5 );

	m_toggleBtn52 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn52, 0, wxEXPAND, 5 );

	m_toggleBtn53 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn53, 0, wxEXPAND, 5 );

	m_toggleBtn54 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn54, 0, wxEXPAND, 5 );

	m_toggleBtn55 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toggleBtn55->SetValue( true );
	boardContainer->Add( m_toggleBtn55, 0, wxEXPAND, 5 );

	m_toggleBtn56 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn56, 0, wxEXPAND, 5 );

	m_toggleBtn57 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn57, 0, wxEXPAND, 5 );

	m_toggleBtn58 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn58, 0, wxEXPAND, 5 );

	m_toggleBtn59 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toggleBtn59->SetValue( true );
	boardContainer->Add( m_toggleBtn59, 0, wxEXPAND, 5 );

	m_toggleBtn60 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn60, 0, wxEXPAND, 5 );

	m_toggleBtn61 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn61, 0, wxEXPAND, 5 );

	m_toggleBtn62 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn62, 0, wxEXPAND, 5 );

	m_toggleBtn63 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn63, 0, wxEXPAND, 5 );

	m_toggleBtn64 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn64, 0, wxEXPAND, 5 );

	m_toggleBtn65 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn65, 0, wxEXPAND, 5 );

	m_toggleBtn66 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn66, 0, wxEXPAND, 5 );

	m_toggleBtn67 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn67, 0, wxEXPAND, 5 );

	m_toggleBtn68 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn68, 0, wxEXPAND, 5 );

	m_toggleBtn69 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn69, 0, wxEXPAND, 5 );

	m_toggleBtn70 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn70, 0, wxEXPAND, 5 );

	m_toggleBtn71 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn71, 0, wxEXPAND, 5 );

	m_toggleBtn72 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn72, 0, wxEXPAND, 5 );

	m_toggleBtn73 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn73, 0, wxEXPAND, 5 );

	m_toggleBtn74 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn74, 0, wxEXPAND, 5 );

	m_toggleBtn75 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn75, 0, wxEXPAND, 5 );

	m_toggleBtn76 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn76, 0, wxEXPAND, 5 );

	m_toggleBtn77 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn77, 0, wxEXPAND, 5 );

	m_toggleBtn78 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn78, 0, wxEXPAND, 5 );

	m_toggleBtn79 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( m_toggleBtn79, 0, wxEXPAND, 5 );


	boardContainer->Add( 0, 0, 1, wxEXPAND, 5 );


	boardContainer->Add( 0, 0, 1, wxEXPAND, 5 );


	boardContainer->Add( 0, 0, 1, wxEXPAND, 5 );

	wxFlexGridSizer* ResetSizer;
	ResetSizer = new wxFlexGridSizer( 1, 1, 0, 0 );
	ResetSizer->SetFlexibleDirection( wxBOTH );
	ResetSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	GameStatusAndScore = new wxStaticText( this, wxID_ANY, wxT("Player 1 (X) vs Player 2 (O)"), wxDefaultPosition, wxDefaultSize, 0 );
	GameStatusAndScore->Wrap( -1 );
	GameStatusAndScore->SetFont( wxFont( 12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Hacen Egypt") ) );
	GameStatusAndScore->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );
	GameStatusAndScore->SetBackgroundColour( wxColour( 199, 5, 54 ) );

	ResetSizer->Add( GameStatusAndScore, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_BOTTOM, 5 );

	ResetBtn = new wxButton( this, wxID_ANY, wxT("Reset"), wxDefaultPosition, wxDefaultSize, 0 );
	ResetBtn->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	ResetSizer->Add( ResetBtn, 0, wxALL|wxALIGN_BOTTOM|wxEXPAND, 5 );


	boardContainer->Add( ResetSizer, 1, wxEXPAND, 10 );


	this->SetSizer( boardContainer );
	this->Layout();
	MenuBar = new wxMenuBar( 0 );
	Help = new wxMenu();
	wxMenuItem* Instructions;
	Instructions = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Instructions") ) + wxT('\t') + wxT("ALT+I"), wxEmptyString, wxITEM_NORMAL );
	Help->Append( Instructions );

	MenuBar->Append( Help, wxT("Help") );

	this->SetMenuBar( MenuBar );


	this->Centre( wxBOTH );

	// Connect Events
	thisOneIsCorrect->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConnectFour::onCellClick ), NULL, this );
	ResetBtn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConnectFour::OnResetBtn ), NULL, this );
}

ConnectFour::~ConnectFour()
{
	// Disconnect Events
	thisOneIsCorrect->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConnectFour::onCellClick ), NULL, this );
	ResetBtn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConnectFour::OnResetBtn ), NULL, this );

}

PyramicTicTac::PyramicTicTac( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 58, 200, 55 ) );

	MenuBar = new wxMenuBar( 0 );
	Help = new wxMenu();
	wxMenuItem* Instructions;
	Instructions = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Instructions") ) + wxT('\t') + wxT("ALT+I"), wxEmptyString, wxITEM_NORMAL );
	Help->Append( Instructions );

	MenuBar->Append( Help, wxT("Help") );

	this->SetMenuBar( MenuBar );

	wxGridSizer* boardContainer;
	boardContainer = new wxGridSizer( 4, 5, 0, 0 );


	boardContainer->Add( 0, 0, 1, wxEXPAND, 5 );


	boardContainer->Add( 0, 0, 1, wxEXPAND, 5 );

	cell0 = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( cell0, 0, wxALL|wxEXPAND, 5 );


	boardContainer->Add( 0, 0, 1, wxEXPAND, 5 );


	boardContainer->Add( 0, 0, 1, wxEXPAND, 5 );


	boardContainer->Add( 0, 0, 1, wxEXPAND, 5 );

	cell10 = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( cell10, 0, wxALL|wxEXPAND, 5 );

	cell11 = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( cell11, 0, wxALL|wxEXPAND, 5 );

	cell12 = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( cell12, 0, wxALL|wxEXPAND, 5 );


	boardContainer->Add( 0, 0, 1, wxEXPAND, 5 );

	cell20 = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( cell20, 0, wxALL|wxEXPAND, 5 );

	cell21 = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( cell21, 0, wxALL|wxEXPAND, 5 );

	cell22 = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( cell22, 0, wxALL|wxEXPAND, 5 );

	cell23 = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( cell23, 0, wxALL|wxEXPAND, 5 );

	cell24 = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	boardContainer->Add( cell24, 0, wxALL|wxEXPAND, 5 );


	boardContainer->Add( 0, 0, 1, wxEXPAND, 5 );


	boardContainer->Add( 0, 0, 1, wxEXPAND, 5 );

	GameStatusAndScore = new wxStaticText( this, wxID_ANY, wxT("Player 1 (X) vs Player 2 (O)"), wxDefaultPosition, wxDefaultSize, 0 );
	GameStatusAndScore->Wrap( -1 );
	GameStatusAndScore->SetFont( wxFont( 12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Hacen Egypt") ) );
	GameStatusAndScore->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BACKGROUND ) );
	GameStatusAndScore->SetBackgroundColour( wxColour( 58, 200, 50 ) );

	boardContainer->Add( GameStatusAndScore, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );


	this->SetSizer( boardContainer );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	cell0->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PyramicTicTac::onCellClick ), NULL, this );
}

PyramicTicTac::~PyramicTicTac()
{
	// Disconnect Events
	cell0->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PyramicTicTac::onCellClick ), NULL, this );

}

XO5x5::XO5x5( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 54, 180, 248 ) );

	wxGridSizer* boardContainer;
	boardContainer = new wxGridSizer( 6, 5, 0, 0 );

	CellNo25 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo25->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo25, 0, wxEXPAND, 5 );

	CellNo24 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo24->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo24, 0, wxEXPAND, 5 );

	CellNo23 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo23->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo23, 0, wxEXPAND, 5 );

	CellNo22 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo22->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo22, 0, wxEXPAND, 5 );

	CellNo20 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo20->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo20, 0, wxEXPAND, 5 );

	CellNo21 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo21->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo21, 0, wxEXPAND, 5 );

	CellNo19 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo19->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo19, 0, wxEXPAND, 5 );

	CellNo18 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo18->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo18, 0, wxEXPAND, 5 );

	CellNo16 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo16->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo16, 0, wxEXPAND, 5 );

	CellNo17 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo17->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo17, 0, wxEXPAND, 5 );

	CellNo15 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo15->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo15, 0, wxEXPAND, 5 );

	CellNo14 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo14->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo14, 0, wxEXPAND, 5 );

	CellNo13 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo13->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo13, 0, wxEXPAND, 5 );

	CellNo12 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo12->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo12, 0, wxEXPAND, 5 );

	CellNo11 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo11->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo11, 0, wxEXPAND, 5 );

	CellNo10 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo10->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo10, 0, wxEXPAND, 5 );

	CellNo9 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo9->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo9, 0, wxEXPAND, 5 );

	CellNo7 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo7->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo7, 0, wxEXPAND, 5 );

	CellNo8 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo8->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo8, 0, wxEXPAND, 5 );

	CellNo5 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo5->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo5, 0, wxEXPAND, 5 );

	CellNo6 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo6->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo6, 0, wxEXPAND, 5 );

	CellNo3 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo3->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo3, 0, wxEXPAND, 5 );

	CellNo4 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo4->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo4, 0, wxEXPAND, 5 );

	CellNo2 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo2->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo2, 0, wxEXPAND, 5 );

	CellNo1 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo1->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	boardContainer->Add( CellNo1, 0, wxEXPAND, 5 );


	boardContainer->Add( 0, 0, 1, wxEXPAND, 5 );


	boardContainer->Add( 0, 0, 1, wxEXPAND, 5 );

	GameStatusAndScore = new wxStaticText( this, wxID_ANY, wxT("Player 1 (X) vs Player 2 (O)"), wxDefaultPosition, wxDefaultSize, 0 );
	GameStatusAndScore->Wrap( -1 );
	GameStatusAndScore->SetFont( wxFont( 12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Hacen Egypt") ) );
	GameStatusAndScore->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BACKGROUND ) );
	GameStatusAndScore->SetBackgroundColour( wxColour( 50, 180, 248 ) );

	boardContainer->Add( GameStatusAndScore, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	this->SetSizer( boardContainer );
	this->Layout();
	MenuBar = new wxMenuBar( 0 );
	Help = new wxMenu();
	wxMenuItem* Instructions;
	Instructions = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Instructions") ) + wxT('\t') + wxT("ALT+I"), wxEmptyString, wxITEM_NORMAL );
	Help->Append( Instructions );

	MenuBar->Append( Help, wxT("Help") );

	this->SetMenuBar( MenuBar );


	this->Centre( wxBOTH );

	// Connect Events
	CellNo1->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( XO5x5::onCellClick ), NULL, this );
}

XO5x5::~XO5x5()
{
	// Disconnect Events
	CellNo1->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( XO5x5::onCellClick ), NULL, this );

}

Credits::Credits( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxFlexGridSizer* SwarnaSizer;
	SwarnaSizer = new wxFlexGridSizer( 3, 1, 0, 0 );
	SwarnaSizer->SetFlexibleDirection( wxBOTH );
	SwarnaSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	SwarnaSizer->SetMinSize( wxSize( 200,200 ) );
	wxGridSizer* sizerLinks;
	sizerLinks = new wxGridSizer( 0, 3, 0, 0 );

	linkGhassan = new wxHyperlinkCtrl( this, wxID_ANY, wxT("Ghassan Elgendy"), wxT("github.com/ghassanelgendy"), wxDefaultPosition, wxDefaultSize, wxHL_DEFAULT_STYLE );
	linkGhassan->SetMinSize( wxSize( -1,20 ) );
	linkGhassan->SetMaxSize( wxSize( -1,20 ) );

	sizerLinks->Add( linkGhassan, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxALIGN_CENTER_HORIZONTAL, 5 );

	linRowan = new wxHyperlinkCtrl( this, wxID_ANY, wxT("Rowan Ehab"), wxT("github.com/rowanammar"), wxDefaultPosition, wxDefaultSize, wxHL_DEFAULT_STYLE );
	linRowan->SetMinSize( wxSize( -1,20 ) );
	linRowan->SetMaxSize( wxSize( -1,20 ) );

	sizerLinks->Add( linRowan, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxTOP, 5 );

	linkJana = new wxHyperlinkCtrl( this, wxID_ANY, wxT("Jana Ramadan"), wxT("github.com/janaramadan"), wxDefaultPosition, wxDefaultSize, wxHL_DEFAULT_STYLE );
	linkJana->SetMinSize( wxSize( -1,20 ) );
	linkJana->SetMaxSize( wxSize( -1,20 ) );

	sizerLinks->Add( linkJana, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxTOP, 5 );


	SwarnaSizer->Add( sizerLinks, 1, wxEXPAND, 5 );

	wxWrapSizer* sizerPics;
	sizerPics = new wxWrapSizer( wxVERTICAL, wxWRAPSIZER_DEFAULT_FLAGS );

	GhassanPic = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("../img/ghassan.bmp"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	GhassanPic->SetMaxSize( wxSize( 200,200 ) );

	sizerPics->Add( GhassanPic, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );

	RowanPic = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("rawan.bmp"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	RowanPic->SetMaxSize( wxSize( 200,200 ) );

	sizerPics->Add( RowanPic, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );

	JanaPic = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("jana.bmp"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	JanaPic->SetMaxSize( wxSize( 200,200 ) );

	sizerPics->Add( JanaPic, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );


	SwarnaSizer->Add( sizerPics, 1, wxEXPAND, 5 );

	CreditsStaticText = new wxStaticText( this, wxID_ANY, wxT("This Project Was made possible in FCAI - CU\nUnder the supervision of Prof. Mohamed Elramly and Eng. Rana Abdelkader \nas part of Assignment 3 in CS213 class."), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
	CreditsStaticText->Wrap( 2 );
	CreditsStaticText->SetMinSize( wxSize( -1,50 ) );

	SwarnaSizer->Add( CreditsStaticText, 0, wxALIGN_BOTTOM|wxALIGN_CENTER_HORIZONTAL|wxTOP|wxRIGHT|wxLEFT, 5 );


	this->SetSizer( SwarnaSizer );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	GhassanPic->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( Credits::openLinkGhassan ), NULL, this );
	RowanPic->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( Credits::openLinkRowan ), NULL, this );
	JanaPic->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( Credits::openLinkJana ), NULL, this );
}

Credits::~Credits()
{
	// Disconnect Events
	GhassanPic->Disconnect( wxEVT_KEY_DOWN, wxKeyEventHandler( Credits::openLinkGhassan ), NULL, this );
	RowanPic->Disconnect( wxEVT_KEY_DOWN, wxKeyEventHandler( Credits::openLinkRowan ), NULL, this );
	JanaPic->Disconnect( wxEVT_KEY_DOWN, wxKeyEventHandler( Credits::openLinkJana ), NULL, this );

}

Players::Players( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxGridSizer* playersSizer;
	playersSizer = new wxGridSizer( 4, 5, 0, 0 );

	playerOneStatic = new wxStaticText( this, wxID_ANY, wxT("Player 1"), wxDefaultPosition, wxDefaultSize, 0 );
	playerOneStatic->Wrap( -1 );
	playersSizer->Add( playerOneStatic, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );

	playerOneField = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	playersSizer->Add( playerOneField, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	playersSizer->Add( 0, 0, 1, wxEXPAND|wxALIGN_RIGHT, 5 );


	playersSizer->Add( 0, 0, 1, wxEXPAND, 5 );


	playersSizer->Add( 0, 0, 1, wxEXPAND, 5 );

	playerTowStatic = new wxStaticText( this, wxID_ANY, wxT("Player 2"), wxDefaultPosition, wxDefaultSize, 0 );
	playerTowStatic->Wrap( -1 );
	playersSizer->Add( playerTowStatic, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	playerTowField = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	playersSizer->Add( playerTowField, 0, wxALL, 5 );


	playersSizer->Add( 0, 0, 1, wxEXPAND, 5 );

	aiBtn = new wxRadioButton( this, wxID_ANY, wxT("AI"), wxDefaultPosition, wxDefaultSize, 0 );
	playersSizer->Add( aiBtn, 0, wxALIGN_RIGHT|wxTOP|wxRIGHT|wxLEFT, 5 );

	computerBtn = new wxRadioButton( this, wxID_ANY, wxT("Computer"), wxDefaultPosition, wxDefaultSize, 0 );
	playersSizer->Add( computerBtn, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	playersSizer->Add( 0, 0, 0, wxEXPAND, 5 );


	playersSizer->Add( 0, 0, 1, wxEXPAND, 5 );

	doneBtn = new wxButton( this, wxID_ANY, wxT("Done"), wxDefaultPosition, wxDefaultSize, 0 );
	doneBtn->SetForegroundColour( wxColour( 181, 181, 181 ) );

	playersSizer->Add( doneBtn, 0, wxALL, 5 );


	playersSizer->Add( 0, 0, 1, wxEXPAND, 5 );

	cancelBtn = new wxButton( this, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	playersSizer->Add( cancelBtn, 0, wxALL, 5 );


	playersSizer->Add( 0, 0, 1, wxEXPAND, 5 );


	playersSizer->Add( 0, 0, 1, wxEXPAND, 5 );


	playersSizer->Add( 0, 0, 1, wxEXPAND, 5 );

	whoVSwho = new wxStaticText( this, wxID_ANY, wxT("Player 1 VS Player 2"), wxDefaultPosition, wxDefaultSize, 0 );
	whoVSwho->Wrap( -1 );
	whoVSwho->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_GRAYTEXT ) );

	playersSizer->Add( whoVSwho, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );


	this->SetSizer( playersSizer );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( Players::PlayersOnClose ) );
	aiBtn->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( Players::aiBtnOnRadioButton ), NULL, this );
	computerBtn->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( Players::computerBtnOnRadioButton ), NULL, this );
	doneBtn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Players::doneBtnOnButtonClick ), NULL, this );
	cancelBtn->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Players::cancelBtnOnButtonClick ), NULL, this );
}

Players::~Players()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( Players::PlayersOnClose ) );
	aiBtn->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( Players::aiBtnOnRadioButton ), NULL, this );
	computerBtn->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( Players::computerBtnOnRadioButton ), NULL, this );
	doneBtn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Players::doneBtnOnButtonClick ), NULL, this );
	cancelBtn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Players::cancelBtnOnButtonClick ), NULL, this );

}
