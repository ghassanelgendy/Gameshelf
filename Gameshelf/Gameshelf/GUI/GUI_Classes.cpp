///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.0.0-0-g0efcecf)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI_Classes.hpp"
#include "../../Gameboard/include/BoardGame_Classes.hpp"

///////////////////////////////////////////////////////////////////////////
void MainFrame::ConnectInit(wxCommandEvent& event)
{
	wxIcon icon("./icon.ico", wxBITMAP_TYPE_ICO);
	// Create a new instance of the CreditsFrame class (Credits window) when the menu item is clicked
	ConnectFour* creditsFrame = new ConnectFour(nullptr, wxID_ANY, "Connect Four",
	wxDefaultPosition, wxSize(710, 700));
	
	//creditsFrame->SetIcon(icon);
	creditsFrame->SetIcon(icon);
	creditsFrame->Show(true);

}

void MainFrame::PyramicInit(wxCommandEvent& event)
{
	wxIcon icon("./icon.ico", wxBITMAP_TYPE_ICO);
	// Create a new instance of the CreditsFrame class (Credits window) when the menu item is clicked
	PyramicTicTac* creditsFrame = new PyramicTicTac(nullptr, wxID_ANY, "Pyramic Tic Tac Toe",
		wxDefaultPosition, wxSize(600, 400));
	//creditsFrame->SetIcon(icon);


	  //elicon
	
	// Create a new instance of the CreditsFrame class (Credits window) when the menu item is clicked
	creditsFrame->SetIcon(icon);
	creditsFrame->Show(true);
}



void MainFrame::CreditsOnMenuSelection(wxCommandEvent& event)
{
	wxIcon icon("./icon.ico", wxBITMAP_TYPE_ICO);

	Credits* xo = new Credits(nullptr, wxID_ANY, "Credits",
		wxDefaultPosition, wxSize(600, 318));
	//creditsFrame->SetIcon(icon);

	xo->SetIcon(icon);

	xo->Show(true);
}

void ConnectFour::CreditsOnMenuSelection(wxCommandEvent& event)
{
	wxIcon icon("./icon.ico", wxBITMAP_TYPE_ICO);

	Credits* xo = new Credits(nullptr, wxID_ANY, "Credits",
		wxDefaultPosition, wxSize(600, 318));
	//creditsFrame->SetIcon(icon);

	xo->SetIcon(icon);

	xo->Show(true);
}

void XO3x3::CreditsOnMenuSelection(wxCommandEvent& event)
{
	wxIcon icon("./icon.ico", wxBITMAP_TYPE_ICO);

	Credits* xo = new Credits(nullptr, wxID_ANY, "Credits",
		wxDefaultPosition, wxSize(600, 318));
	//creditsFrame->SetIcon(icon);

	xo->SetIcon(icon);

	xo->Show(true);
}

void XO5x5::CreditsOnMenuSelection(wxCommandEvent& event)
{
	wxIcon icon("./icon.ico", wxBITMAP_TYPE_ICO);

	Credits* xo = new Credits(nullptr, wxID_ANY, "Credits",
		wxDefaultPosition, wxSize(600, 318));
	//creditsFrame->SetIcon(icon);

	xo->SetIcon(icon);

	xo->Show(true);
}

void PyramicTicTac::CreditsOnMenuSelection(wxCommandEvent& event)
{
	wxIcon icon("./icon.ico", wxBITMAP_TYPE_ICO);

	Credits* xo = new Credits(nullptr, wxID_ANY, "Credits",
		wxDefaultPosition, wxSize(600, 318));
	//creditsFrame->SetIcon(icon);

	xo->SetIcon(icon);

	xo->Show(true);
}

void MainFrame::openFive(wxCommandEvent& event)
{
	wxIcon icon("./icon.ico", wxBITMAP_TYPE_ICO);

	XO5x5* xo = new XO5x5(nullptr, wxID_ANY, "5x5 Tic Tac Toe",
		wxDefaultPosition, wxSize(500, 600));
	//creditsFrame->SetIcon(icon);

	xo->SetIcon(icon);

	xo->Show(true);
}

void MainFrame::openThree(wxCommandEvent& event)
{
	wxIcon icon("./icon.ico", wxBITMAP_TYPE_ICO);

	// Create a new instance of the CreditsFrame class (Credits window) when the menu item is clicked
	XO3x3* creditsFrame = new XO3x3(nullptr, wxID_ANY, "3x3 Tic Tac Toe",
		wxDefaultPosition, wxSize(500, 600));
	//creditsFrame->SetIcon(icon);
	creditsFrame->SetIcon(icon);

	creditsFrame->Show(true);
}

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{


	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DLIGHT ) );
	
	wxGridSizer* MainGridSizer;
	MainGridSizer = new wxGridSizer( 1, 4, 2, 35 );

	wxGridSizer* gSizer2;
	gSizer2 = new wxGridSizer( 2, 0, 0, 0 );

	m_bitmap2 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("three.bmp"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_bitmap2, 0, wxALL, 5 );

	m_toggleBtn20 = new wxButton( this, wxID_ANY, wxT("3x3 XO"), wxDefaultPosition, wxSize( 70,35 ), 0 );
	m_toggleBtn20->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_toggleBtn20->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	m_toggleBtn20->Bind(wxEVT_BUTTON, &MainFrame::openThree, this);
	m_toggleBtn20->SetFont(wxFont(10, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Hacen Egypt")));

	gSizer2->Add( m_toggleBtn20, 0, wxALIGN_CENTER_HORIZONTAL|wxTOP|wxBOTTOM|wxRIGHT|wxALIGN_BOTTOM, 10 );


	MainGridSizer->Add( gSizer2, 1, wxEXPAND, 5 );

	wxGridSizer* gSizer21;
	gSizer21 = new wxGridSizer( 2, 0, 0, 0 );

	m_bitmap21 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("five.bmp"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer21->Add( m_bitmap21, 0, wxALL, 5 );

	m_toggleBtn201 = new wxButton( this, wxID_ANY, wxT("5x5 XO"), wxDefaultPosition, wxSize( 70,35 ), 0 );
	m_toggleBtn201->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INFOTEXT ) );
	m_toggleBtn201->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );
	m_toggleBtn201->SetFont(wxFont(10, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Hacen Egypt")));

	gSizer21->Add( m_toggleBtn201, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_BOTTOM|wxTOP|wxBOTTOM|wxRIGHT, 10 );


	MainGridSizer->Add( gSizer21, 1, wxEXPAND, 5 );

	wxGridSizer* gSizer22;
	gSizer22 = new wxGridSizer( 2, 0, 0, 0 );

	m_bitmap22 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("connectfour.bmp"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer22->Add( m_bitmap22, 0, wxALL, 5 );

	m_toggleBtn202 = new wxButton( this, wxID_ANY, wxT("Connect Four"), wxDefaultPosition, wxSize( -1,35 ), 0 );
	m_toggleBtn202->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_toggleBtn202->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	m_toggleBtn202->SetFont(wxFont(10, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Hacen Egypt")));

	gSizer22->Add( m_toggleBtn202, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_BOTTOM|wxTOP|wxBOTTOM|wxRIGHT, 10 );


	MainGridSizer->Add( gSizer22, 1, wxEXPAND, 5 );

	wxGridSizer* gSizer23;
	gSizer23 = new wxGridSizer( 2, 0, 0, 0 );

	m_bitmap23 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("pyramid.bmp"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer23->Add( m_bitmap23, 0, wxALL, 5 );

	m_toggleBtn203 = new wxButton( this, wxID_ANY, wxT("Pyramic XO"), wxDefaultPosition, wxSize( -1,35 ), 0 );
	m_toggleBtn203->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTIONTEXT ) );
	m_toggleBtn203->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );
	m_toggleBtn203->SetFont(wxFont(10, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Hacen Egypt")));

	gSizer23->Add( m_toggleBtn203, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_BOTTOM|wxTOP|wxBOTTOM|wxRIGHT, 10 );


	MainGridSizer->Add( gSizer23, 1, wxEXPAND|wxRIGHT, 5 );


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
	Player1 = new wxMenuItem(Players, wxID_ANY, "Player 1", wxEmptyString, wxITEM_NORMAL);
	Players->Append( Player1 );

	wxMenuItem* Player2;
	Player2 = new wxMenuItem( Players, wxID_ANY,"Player 2" , wxEmptyString, wxITEM_NORMAL );
	Players->Append( Player2 );

	MenuBar->Append( Players, wxT("Players") );

	Help = new wxMenu();
	wxMenuItem* Instructions;
	Instructions = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Instructions") ) + wxT('\t') + wxT("ALT+I"), wxEmptyString, wxITEM_NORMAL );
	Help->Append( Instructions );

	wxMenuItem* SourceCode;
	SourceCode = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Source Code") ) + wxT('\t') + wxT("ALT+S"), wxT("See source code"), wxITEM_NORMAL );
	Help->Append( SourceCode );

	Help->AppendSeparator();

	wxMenuItem* Credits;
	Credits = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Credits") ) + wxT('\t') + wxT("ALT+C"), wxEmptyString, wxITEM_NORMAL );
	Help->Append( Credits );

	MenuBar->Append( Help, wxT("Help") );

	this->SetMenuBar( MenuBar );

	

	this->Centre( wxBOTH );

	// Connect Events
	m_toggleBtn20->Connect(wxEVT_LEFT_DOWN, wxCommandEventHandler( MainFrame::openThree ), NULL, this );
	m_toggleBtn201->Connect(wxEVT_LEFT_DOWN, wxCommandEventHandler(MainFrame::openFive), NULL, this);
	m_toggleBtn202->Connect(wxEVT_LEFT_DOWN, wxCommandEventHandler( MainFrame::ConnectInit ), NULL, this );
	m_toggleBtn203->Connect(wxEVT_LEFT_DOWN, wxCommandEventHandler(MainFrame::PyramicInit), NULL, this);

	Games->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::openThree ), this, XO3x3->GetId());
	Games->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::openFive), this, XO5x5->GetId());
	Games->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::ConnectInit), this, ConnectFour->GetId());
	Games->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::PyramicInit), this, PyramicXO->GetId());


	Help->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrame::CreditsOnMenuSelection ), this, Credits->GetId());
	this->Connect( Credits->GetId(), wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MainFrame::CreditsOnUpdateUI ) );
}

MainFrame::~MainFrame()
{
	// Disconnect Events
	m_toggleBtn201->Disconnect(wxEVT_LEFT_DOWN, wxCommandEventHandler(MainFrame::openFive), NULL, this);
	m_toggleBtn20->Disconnect(wxEVT_LEFT_DOWN, wxCommandEventHandler( MainFrame::openThree ), NULL, this );
	m_toggleBtn202->Disconnect(wxEVT_LEFT_DOWN, wxCommandEventHandler( MainFrame::ConnectInit ), NULL, this );
	m_toggleBtn203->Disconnect(wxEVT_LEFT_DOWN, wxCommandEventHandler(MainFrame::PyramicInit), NULL, this);
	this->Disconnect( wxID_ANY, wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MainFrame::CreditsOnUpdateUI ) );
}

XO3x3::XO3x3( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	wxGridSizer* gSizer6;
	gSizer6 = new wxGridSizer( 4, 3, 0, 0 );

	for (short i = 0; i < 3; i++)
	{
		for (short j = 0; j < 3; j++)
		{
			cells[i][j] = new wxButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
			cells[i][j]->SetBackgroundColour(wxColour(255, 255, 255));
			gSizer6->Add(cells[i][j], 0, wxEXPAND, 5);
		}

	}
	//m_toggleBtn11 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	//m_toggleBtn11->SetBackgroundColour( wxColour( 255, 255, 255 ) );



	//m_toggleBtn13 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	//m_toggleBtn13->SetValue( true );
	//m_toggleBtn13->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	//gSizer6->Add( m_toggleBtn13, 0, wxEXPAND, 5 );

	//m_toggleBtn16 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	//m_toggleBtn16->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	//gSizer6->Add( m_toggleBtn16, 0, wxEXPAND, 5 );

	//m_toggleBtn18 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	//m_toggleBtn18->SetValue( true );
	//m_toggleBtn18->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	//gSizer6->Add( m_toggleBtn18, 0, wxEXPAND, 5 );

	//m_toggleBtn17 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	//m_toggleBtn17->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	//gSizer6->Add( m_toggleBtn17, 0, wxEXPAND, 5 );

	//m_toggleBtn15 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	//m_toggleBtn15->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	//gSizer6->Add( m_toggleBtn15, 0, wxEXPAND, 5 );

	//m_toggleBtn14 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	//m_toggleBtn14->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	//gSizer6->Add( m_toggleBtn14, 0, wxEXPAND, 5 );

	//m_toggleBtn12 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	//m_toggleBtn12->SetValue( true );
	//m_toggleBtn12->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	//gSizer6->Add( m_toggleBtn12, 0, wxEXPAND, 5 );

	//m_toggleBtn1 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );

	//m_toggleBtn1->SetBitmapMargins( wxSize( 1,1 ) );
	//m_toggleBtn1->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	//gSizer6->Add( m_toggleBtn1, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer2->SetFlexibleDirection( wxBOTH );
	fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	gSizer6->Add( fgSizer2, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 1, 0, 0, 0 );
	fgSizer1->SetFlexibleDirection( wxVERTICAL );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_NONE );

	GameStatusAndScore = new wxStaticText( this, wxID_ANY, wxT("\n\nPlayer 1 (X) vs Player 2 (O)"), wxDefaultPosition, wxDefaultSize, 0 );
	GameStatusAndScore->Wrap( -1 );
	GameStatusAndScore->SetFont( wxFont( 12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Hacen Egypt") ) );
	GameStatusAndScore->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );
	GameStatusAndScore->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	fgSizer1->Add( GameStatusAndScore, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	gSizer6->Add( fgSizer1, 1, wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );


	this->SetSizer( gSizer6 );
	this->Layout();
	MenuBar = new wxMenuBar( 0 );
	Games = new wxMenu();
	wxMenuItem* XO3x31;
	XO3x31 = new wxMenuItem( Games, wxID_ANY, wxString( wxT("3x3 XO") ) , wxEmptyString, wxITEM_NORMAL );
	Games->Append( XO3x31 );

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

	MenuBar->Append( Players, wxT("Players") );

	Help = new wxMenu();
	wxMenuItem* Instructions;
	Instructions = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Instructions") ) + wxT('\t') + wxT("ALT+I"), wxEmptyString, wxITEM_NORMAL );
	Help->Append( Instructions );

	wxMenuItem* SourceCode;
	SourceCode = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Source Code") ) + wxT('\t') + wxT("ALT+S"), wxT("See source code"), wxITEM_NORMAL );
	Help->Append( SourceCode );

	Help->AppendSeparator();

	wxMenuItem* Credits;
	Credits = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Credits") ) + wxT('\t') + wxT("ALT+C"), wxEmptyString, wxITEM_NORMAL );
	Help->Append( Credits );

	MenuBar->Append( Help, wxT("Help") );

	this->SetMenuBar( MenuBar );


	this->Centre( wxBOTH );

	// Connect Events
	Games->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( XO3x3::openThree ), this, XO3x31->GetId());
	Help->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( XO3x3::CreditsOnMenuSelection ), this, Credits->GetId());
	this->Connect( Credits->GetId(), wxEVT_UPDATE_UI, wxUpdateUIEventHandler( XO3x3::CreditsOnUpdateUI ) );
}

XO3x3::~XO3x3()
{
	// Disconnect Events
	this->Disconnect( wxID_ANY, wxEVT_UPDATE_UI, wxUpdateUIEventHandler( XO3x3::CreditsOnUpdateUI ) );

}
void XO3x3::OnButtonClick(wxCommandEvent& event) {
	wxButton* clickedButton = dynamic_cast<wxButton*>(event.GetEventObject());
	clickedButton->SetLabel(wxString("X")); // Set the button label as X or O
	clickedButton->SetFont(wxFont(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Hacen Egypt")));


	// Get the position of the clicked button in the grid (you need to implement this)
	//int row = ...; // Determine row from the clickedButton
	//int col = ...; // Determine column from the clickedButton

	// Update game logic with the move
	//bool isValidMove = board.update_board(row, col, currentPlayerSymbol); // Implement this function in your X_O_Board class

	//if (isValidMove) {
		// Update the display
		//clickedButton->SetLabel(wxString(currentPlayerSymbol)); // Set the button label as X or O
		// Check for a winner or draw, and manage game flow using your GameManager
		// Call GameManager's run method or other relevant functions here
		// Update the currentPlayerSymbol for the next move
	//}
	// Display any necessary messages based on game state
}
ConnectFour::ConnectFour( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 199, 5, 54 ) );

	wxGridSizer* gSizer7;
	gSizer7 = new wxGridSizer( 7, 7, 0, 0 );
	for (short i = 0; i < 6; i++)
	{
		for (short j = 0; j < 7; j++)
		{
			cells[i][j] = new wxButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
			cells[i][j]->SetBackgroundColour(wxColour(255, 255, 255));
			gSizer7->Add(cells[i][j], 0, wxEXPAND, 5);
			cells[i][j]->Bind(wxEVT_LEFT_DOWN, wxCommandEventHandler(XO3x3::OnButtonClick), this, cells[i][j]->GetId());

		}

	}
	/*m_toggleBtn38 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn38, 0, wxEXPAND, 5 );

	m_toggleBtn40 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn40, 0, wxEXPAND, 5 );

	m_toggleBtn41 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn41, 0, wxEXPAND, 5 );

	m_toggleBtn42 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toggleBtn42->SetValue( true );
	gSizer7->Add( m_toggleBtn42, 0, wxEXPAND, 5 );

	m_toggleBtn43 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn43, 0, wxEXPAND, 5 );

	m_toggleBtn44 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn44, 0, wxEXPAND, 5 );

	m_toggleBtn45 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn45, 0, wxEXPAND, 5 );

	m_toggleBtn89 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn89, 0, wxEXPAND, 5 );

	m_toggleBtn46 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn46, 0, wxEXPAND, 5 );

	m_toggleBtn47 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn47, 0, wxEXPAND, 5 );

	m_toggleBtn48 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn48, 0, wxEXPAND, 5 );

	m_toggleBtn49 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toggleBtn49->SetValue( true );
	gSizer7->Add( m_toggleBtn49, 0, wxEXPAND, 5 );

	m_toggleBtn50 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn50, 0, wxEXPAND, 5 );

	m_toggleBtn51 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn51, 0, wxEXPAND, 5 );

	m_toggleBtn52 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn52, 0, wxEXPAND, 5 );

	m_toggleBtn53 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn53, 0, wxEXPAND, 5 );

	m_toggleBtn54 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn54, 0, wxEXPAND, 5 );

	m_toggleBtn55 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toggleBtn55->SetValue( true );
	gSizer7->Add( m_toggleBtn55, 0, wxEXPAND, 5 );

	m_toggleBtn56 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn56, 0, wxEXPAND, 5 );

	m_toggleBtn57 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn57, 0, wxEXPAND, 5 );

	m_toggleBtn58 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn58, 0, wxEXPAND, 5 );

	m_toggleBtn59 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toggleBtn59->SetValue( true );
	gSizer7->Add( m_toggleBtn59, 0, wxEXPAND, 5 );

	m_toggleBtn60 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn60, 0, wxEXPAND, 5 );

	m_toggleBtn61 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn61, 0, wxEXPAND, 5 );

	m_toggleBtn62 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn62, 0, wxEXPAND, 5 );

	m_toggleBtn63 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn63, 0, wxEXPAND, 5 );

	m_toggleBtn64 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn64, 0, wxEXPAND, 5 );

	m_toggleBtn65 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn65, 0, wxEXPAND, 5 );

	m_toggleBtn66 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn66, 0, wxEXPAND, 5 );

	m_toggleBtn67 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn67, 0, wxEXPAND, 5 );

	m_toggleBtn68 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn68, 0, wxEXPAND, 5 );

	m_toggleBtn69 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn69, 0, wxEXPAND, 5 );

	m_toggleBtn70 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn70, 0, wxEXPAND, 5 );

	m_toggleBtn71 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn71, 0, wxEXPAND, 5 );

	m_toggleBtn72 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn72, 0, wxEXPAND, 5 );

	m_toggleBtn73 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn73, 0, wxEXPAND, 5 );

	m_toggleBtn74 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn74, 0, wxEXPAND, 5 );

	m_toggleBtn75 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn75, 0, wxEXPAND, 5 );

	m_toggleBtn76 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn76, 0, wxEXPAND, 5 );

	m_toggleBtn77 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn77, 0, wxEXPAND, 5 );

	m_toggleBtn78 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn78, 0, wxEXPAND, 5 );

	m_toggleBtn79 = new wxToggleButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer7->Add( m_toggleBtn79, 0, wxEXPAND, 5 );*/

	wxGridSizer* gSizer17;
	gSizer17 = new wxGridSizer( 0, 2, 0, 0 );


	gSizer7->Add( gSizer17, 1, wxEXPAND, 5 );

	wxGridSizer* gSizer111;
	gSizer111 = new wxGridSizer( 0, 2, 0, 0 );


	gSizer7->Add( gSizer111, 1, wxEXPAND, 5 );

	wxGridSizer* gSizer112;
	gSizer112 = new wxGridSizer( 0, 2, 0, 0 );


	gSizer7->Add( gSizer112, 1, wxEXPAND, 5 );

	wxGridSizer* gSizer11;
	gSizer11 = new wxGridSizer( 0, 2, 0, 0 );

	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer2->SetFlexibleDirection( wxBOTH );
	fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	GameStatusAndScore = new wxStaticText( this, wxID_ANY, wxT("\nPlayer 1 (X) vs Player 2 (O)"), wxDefaultPosition, wxDefaultSize, 0 );
	GameStatusAndScore->Wrap( -1 );
	GameStatusAndScore->SetFont( wxFont( 12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Hacen Egypt") ) );
	GameStatusAndScore->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );
	GameStatusAndScore->SetBackgroundColour( wxColour( 199, 5, 54 ) );

	fgSizer2->Add( GameStatusAndScore, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	gSizer11->Add( fgSizer2, 1, wxEXPAND, 5 );


	gSizer7->Add( gSizer11, 1, wxEXPAND, 5 );


	this->SetSizer( gSizer7 );
	this->Layout();
	MenuBar = new wxMenuBar( 0 );
	Games = new wxMenu();
	wxMenuItem* XO3x3;
	XO3x3 = new wxMenuItem( Games, wxID_ANY, wxString( wxT("3x3 XO") ) , wxEmptyString, wxITEM_NORMAL );
	Games->Append( XO3x3 );

	wxMenuItem* XO5x5;
	XO5x5 = new wxMenuItem( Games, wxID_ANY, wxString( wxT("5x5 XO") ) , wxEmptyString, wxITEM_NORMAL );
	Games->Append( XO5x5 );

	wxMenuItem* ConnectFour1;
	ConnectFour1 = new wxMenuItem( Games, wxID_ANY, wxString( wxT("Connect Four") ) , wxEmptyString, wxITEM_NORMAL );
	Games->Append( ConnectFour1 );

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

	MenuBar->Append( Players, wxT("Players") );

	Help = new wxMenu();
	wxMenuItem* Instructions;
	Instructions = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Instructions") ) + wxT('\t') + wxT("ALT+I"), wxEmptyString, wxITEM_NORMAL );
	Help->Append( Instructions );

	wxMenuItem* SourceCode;
	SourceCode = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Source Code") ) + wxT('\t') + wxT("ALT+S"), wxT("See source code"), wxITEM_NORMAL );
	Help->Append( SourceCode );

	Help->AppendSeparator();

	wxMenuItem* Credits;
	Credits = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Credits") ) + wxT('\t') + wxT("ALT+C"), wxEmptyString, wxITEM_NORMAL );
	Help->Append( Credits );

	MenuBar->Append( Help, wxT("Help") );

	this->SetMenuBar( MenuBar );


	this->Centre( wxBOTH );

	// Connect Events
	Games->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( ConnectFour::openThree ), this, XO3x3->GetId());
	Help->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( ConnectFour::CreditsOnMenuSelection ), this, Credits->GetId());
	this->Connect( Credits->GetId(), wxEVT_UPDATE_UI, wxUpdateUIEventHandler( ConnectFour::CreditsOnUpdateUI ) );
}

ConnectFour::~ConnectFour()
{
	// Disconnect Events
	this->Disconnect( wxID_ANY, wxEVT_UPDATE_UI, wxUpdateUIEventHandler( ConnectFour::CreditsOnUpdateUI ) );

}

PyramicTicTac::PyramicTicTac( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 58, 200, 55 ) );

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

	MenuBar->Append( Players, wxT("Players") );

	Help = new wxMenu();
	wxMenuItem* Instructions;
	Instructions = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Instructions") ) + wxT('\t') + wxT("ALT+I"), wxEmptyString, wxITEM_NORMAL );
	Help->Append( Instructions );

	wxMenuItem* SourceCode;
	SourceCode = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Source Code") ) + wxT('\t') + wxT("ALT+S"), wxT("See source code"), wxITEM_NORMAL );
	Help->Append( SourceCode );

	Help->AppendSeparator();

	wxMenuItem* Credits;
	Credits = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Credits") ) + wxT('\t') + wxT("ALT+C"), wxEmptyString, wxITEM_NORMAL );
	Help->Append( Credits );

	MenuBar->Append( Help, wxT("Help") );

	this->SetMenuBar( MenuBar );

	wxGridSizer* gSizer18;
	gSizer18 = new wxGridSizer( 3, 5, 0, 0 );

	wxGridSizer* gSizer201;
	gSizer201 = new wxGridSizer( 1, 1, 0, 0 );


	gSizer18->Add( gSizer201, 1, wxEXPAND, 5 );

	wxGridSizer* gSizer2011;
	gSizer2011 = new wxGridSizer( 1, 1, 0, 0 );


	gSizer18->Add( gSizer2011, 1, wxEXPAND, 5 );

	cells[0][0] = new wxButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);

	cells[0][0]->SetBackgroundColour(wxColour(255, 255, 255));

	gSizer18->Add(cells[0][0], 0, wxEXPAND, 5 );

	wxGridSizer* gSizer20;
	gSizer20 = new wxGridSizer( 1, 1, 0, 0 );


	gSizer18->Add( gSizer20, 1, wxEXPAND, 5 );

	wxGridSizer* gSizer2012;
	gSizer2012 = new wxGridSizer( 1, 1, 0, 0 );


	gSizer18->Add( gSizer2012, 1, wxEXPAND, 5 );

	wxGridSizer* gSizer19;
	gSizer19 = new wxGridSizer( 1, 1, 0, 0 );


	gSizer18->Add( gSizer19, 1, wxEXPAND, 5 );


	cells[1][1] = new wxButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);

	cells[1][1]->SetBackgroundColour(wxColour(255, 255, 255));

	gSizer18->Add(cells[1][1], 0, wxEXPAND, 5 );
	cells[1][2] = new wxButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);

	cells[1][2]->SetBackgroundColour(wxColour(255, 255, 255));


	
	gSizer18->Add(cells[1][2], 0, wxEXPAND, 5 );

	cells[2][0] = new wxButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);

	cells[2][0]->SetBackgroundColour(wxColour(255, 255, 255));

	gSizer18->Add(cells[2][0], 0, wxEXPAND, 5 );

	wxGridSizer* gSizer20111;
	gSizer20111 = new wxGridSizer( 1, 1, 0, 0 );


	gSizer18->Add( gSizer20111, 1, wxEXPAND, 5 );


	cells[2][1] = new wxButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);

	cells[2][1]->SetBackgroundColour(wxColour(255, 255, 255));

	
	gSizer18->Add(cells[2][1], 0, wxEXPAND, 5 );

	cells[3][0] = new wxButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);

	cells[3][0]->SetBackgroundColour(wxColour(255, 255, 255));


	gSizer18->Add(cells[3][0], 0, wxEXPAND, 5 );
	
	/*CellNo3 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer18->Add( CellNo3, 0, wxEXPAND, 5 );

	CellNo6 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer18->Add( CellNo6, 0, wxEXPAND, 5 );

	CellNo1 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer18->Add( CellNo1, 0, wxEXPAND, 5 );*/

	wxGridSizer* gSizer201131;
	gSizer201131 = new wxGridSizer( 1, 1, 0, 0 );


	gSizer18->Add( gSizer201131, 1, wxEXPAND, 5 );

	wxGridSizer* gSizer20113;
	gSizer20113 = new wxGridSizer( 1, 1, 0, 0 );


	gSizer18->Add( gSizer20113, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer( 1, 1, 0, 0 );
	fgSizer2->SetFlexibleDirection( wxBOTH );
	fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	GameStatusAndScore = new wxStaticText( this, wxID_ANY, wxT("\nPlayer 1 (X) vs Player 2 (O)"), wxDefaultPosition, wxDefaultSize, 0 );
	GameStatusAndScore->Wrap( -1 );
	GameStatusAndScore->SetFont( wxFont( 12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Hacen Egypt") ) );
	GameStatusAndScore->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BACKGROUND ) );
	GameStatusAndScore->SetBackgroundColour( wxColour( 58, 200, 55 ) );

	fgSizer2->Add( GameStatusAndScore, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	gSizer18->Add( fgSizer2, 1, wxEXPAND, 5 );

	wxGridSizer* gSizer20112;
	gSizer20112 = new wxGridSizer( 1, 1, 0, 0 );


	gSizer18->Add( gSizer20112, 1, wxEXPAND, 5 );


	this->SetSizer( gSizer18 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	Games->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PyramicTicTac::openThree ), this, XO3x3->GetId());
	Help->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( PyramicTicTac::CreditsOnMenuSelection ), this, Credits->GetId());
	this->Connect( Credits->GetId(), wxEVT_UPDATE_UI, wxUpdateUIEventHandler( PyramicTicTac::CreditsOnUpdateUI ) );
}

PyramicTicTac::~PyramicTicTac()
{
	// Disconnect Events
	this->Disconnect( wxID_ANY, wxEVT_UPDATE_UI, wxUpdateUIEventHandler( PyramicTicTac::CreditsOnUpdateUI ) );

}

XO5x5::XO5x5( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 54, 180, 248 ) );

	wxGridSizer* gSizer6;
	gSizer6 = new wxGridSizer( 6, 5, 0, 0 );

	/*CellNo25 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo25->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo25, 0, wxEXPAND, 5 );

	CellNo24 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo24->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo24, 0, wxEXPAND, 5 );

	CellNo23 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo23->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo23, 0, wxEXPAND, 5 );

	CellNo22 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo22->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo22, 0, wxEXPAND, 5 );

	CellNo20 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo20->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo20, 0, wxEXPAND, 5 );

	CellNo21 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo21->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo21, 0, wxEXPAND, 5 );

	CellNo19 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo19->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo19, 0, wxEXPAND, 5 );

	CellNo18 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo18->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo18, 0, wxEXPAND, 5 );

	CellNo16 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo16->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo16, 0, wxEXPAND, 5 );

	CellNo17 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo17->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo17, 0, wxEXPAND, 5 );

	CellNo15 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo15->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo15, 0, wxEXPAND, 5 );

	CellNo14 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo14->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo14, 0, wxEXPAND, 5 );

	CellNo13 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo13->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo13, 0, wxEXPAND, 5 );

	CellNo12 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo12->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo12, 0, wxEXPAND, 5 );

	CellNo11 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo11->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo11, 0, wxEXPAND, 5 );

	CellNo10 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo10->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo10, 0, wxEXPAND, 5 );

	CellNo9 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo9->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo9, 0, wxEXPAND, 5 );

	CellNo7 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo7->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo7, 0, wxEXPAND, 5 );

	CellNo8 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo8->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo8, 0, wxEXPAND, 5 );

	CellNo5 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo5->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo5, 0, wxEXPAND, 5 );

	CellNo6 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo6->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo6, 0, wxEXPAND, 5 );

	CellNo3 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo3->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo3, 0, wxEXPAND, 5 );

	CellNo4 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo4->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo4, 0, wxEXPAND, 5 );

	CellNo2 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo2->SetBackgroundColour( wxColour( 255, 255, 255 ) );

	gSizer6->Add( CellNo2, 0, wxEXPAND, 5 );

	CellNo1 = new wxToggleButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	CellNo1->SetBackgroundColour( wxColour( 255, 255, 255 ) );*/

for (short i = 0; i < 5; i++)
{
	for (short j = 0; j < 5; j++)
	{
		cells[i][j] = new wxButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
		cells[i][j]->SetBackgroundColour(wxColour(255, 255, 255));
		gSizer6->Add(cells[i][j], 0, wxEXPAND, 5);
	}
}

	wxFlexGridSizer* fgSizer11;
	fgSizer11 = new wxFlexGridSizer( 1, 0, 0, 0 );
	fgSizer11->SetFlexibleDirection( wxVERTICAL );
	fgSizer11->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_NONE );


	gSizer6->Add( fgSizer11, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 1, 0, 0, 0 );
	fgSizer1->SetFlexibleDirection( wxVERTICAL );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_NONE );


	gSizer6->Add( fgSizer1, 1, wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer2->SetFlexibleDirection( wxBOTH );
	fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	GameStatusAndScore = new wxStaticText( this, wxID_ANY, wxT("\nPlayer 1 (X) vs Player 2 (O)"), wxDefaultPosition, wxDefaultSize, 0 );
	GameStatusAndScore->Wrap( -1 );
	GameStatusAndScore->SetFont( wxFont( 12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Hacen Egypt") ) );
	GameStatusAndScore->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BACKGROUND ) );
	GameStatusAndScore->SetBackgroundColour( wxColour( 50, 180, 248 ) );

	fgSizer2->Add( GameStatusAndScore, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	gSizer6->Add( fgSizer2, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( gSizer6 );
	this->Layout();
	MenuBar = new wxMenuBar( 0 );
	Games = new wxMenu();
	wxMenuItem* XO3x3;
	XO3x3 = new wxMenuItem( Games, wxID_ANY, wxString( wxT("3x3 XO") ) , wxEmptyString, wxITEM_NORMAL );
	Games->Append( XO3x3 );

	wxMenuItem* XO5x51;
	XO5x51 = new wxMenuItem( Games, wxID_ANY, wxString( wxT("5x5 XO") ) , wxEmptyString, wxITEM_NORMAL );
	Games->Append( XO5x51 );

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

	MenuBar->Append( Players, wxT("Players") );

	Help = new wxMenu();
	wxMenuItem* Instructions;
	Instructions = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Instructions") ) + wxT('\t') + wxT("ALT+I"), wxEmptyString, wxITEM_NORMAL );
	Help->Append( Instructions );

	wxMenuItem* SourceCode;
	SourceCode = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Source Code") ) + wxT('\t') + wxT("ALT+S"), wxT("See source code"), wxITEM_NORMAL );
	Help->Append( SourceCode );

	Help->AppendSeparator();

	wxMenuItem* Credits;
	Credits = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Credits") ) + wxT('\t') + wxT("ALT+C"), wxEmptyString, wxITEM_NORMAL );
	Help->Append( Credits );

	MenuBar->Append( Help, wxT("Help") );

	this->SetMenuBar( MenuBar );


	this->Centre( wxBOTH );

	// Connect Events
	Games->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( XO5x5::openThree ), this, XO3x3->GetId());
	Help->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( XO5x5::CreditsOnMenuSelection ), this, Credits->GetId());
	this->Connect( Credits->GetId(), wxEVT_UPDATE_UI, wxUpdateUIEventHandler( XO5x5::CreditsOnUpdateUI ) );
}

XO5x5::~XO5x5()
{
	// Disconnect Events
	this->Disconnect( wxID_ANY, wxEVT_UPDATE_UI, wxUpdateUIEventHandler( XO5x5::CreditsOnUpdateUI ) );

}

Credits::Credits( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	MenuBar = new wxMenuBar( 0 );
	Games = new wxMenu();
	wxMenuItem* XO3x31;
	XO3x31 = new wxMenuItem( Games, wxID_ANY, wxString( wxT("3x3 XO") ) , wxEmptyString, wxITEM_NORMAL );
	Games->Append( XO3x31 );

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

	MenuBar->Append( Players, wxT("Players") );

	Help = new wxMenu();
	wxMenuItem* Instructions;
	Instructions = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Instructions") ) + wxT('\t') + wxT("ALT+I"), wxEmptyString, wxITEM_NORMAL );
	Help->Append( Instructions );

	wxMenuItem* SourceCode;
	SourceCode = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Source Code") ) + wxT('\t') + wxT("ALT+S"), wxT("See source code"), wxITEM_NORMAL );
	Help->Append( SourceCode );

	Help->AppendSeparator();

	wxMenuItem* Credits;
	Credits = new wxMenuItem( Help, wxID_ANY, wxString( wxT("Credits") ) + wxT('\t') + wxT("ALT+C"), wxEmptyString, wxITEM_NORMAL );
	Help->Append( Credits );

	MenuBar->Append( Help, wxT("Help") );

	this->SetMenuBar( MenuBar );

	wxGridSizer* gSizer50;
	gSizer50 = new wxGridSizer( 2, 3, 0, 0 );

	m_bitmap7 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("ghassan.bmp"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer50->Add( m_bitmap7, 0, wxALL, 5 );

	m_bitmap5 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("rawan.bmp"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	m_bitmap5->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );

	gSizer50->Add( m_bitmap5, 0, wxALL, 5 );

	m_bitmap6 = new wxStaticBitmap( this, wxID_ANY, wxBitmap( wxT("jana.bmp"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer50->Add( m_bitmap6, 0, wxALL, 5 );

	wxGridSizer* gSizer52;
	gSizer52 = new wxGridSizer( 0, 2, 0, 0 );

	gSizer52->SetMinSize( wxSize( -1,50 ) );

	gSizer50->Add( gSizer52, 1, wxEXPAND, 5 );

	wxGridSizer* gSizer51;
	gSizer51 = new wxGridSizer( 0, 1, 0, 0 );

	gSizer51->SetMinSize( wxSize( -1,50 ) );
	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("This Project Was made possible in FCAI - CU\nUnder the supervision of Prof. Mohamed Elramly and Eng. Rana Abdelkader \nas part of Assignment 3 in CS213 class."), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
	m_staticText9->Wrap( 2 );
	m_staticText9->SetMinSize( wxSize( -1,50 ) );

	gSizer51->Add( m_staticText9, 0, wxALIGN_BOTTOM|wxTOP|wxRIGHT|wxLEFT|wxALIGN_CENTER_HORIZONTAL, 5 );


	gSizer50->Add( gSizer51, 1, wxEXPAND, 5 );


	this->SetSizer( gSizer50 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	Games->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( Credits::openThree ), this, XO3x31->GetId());
	this->Connect( Credits->GetId(), wxEVT_UPDATE_UI, wxUpdateUIEventHandler( Credits::CreditsOnUpdateUI ) );
}

Credits::~Credits()
{
	// Disconnect Events
	this->Disconnect( wxID_ANY, wxEVT_UPDATE_UI, wxUpdateUIEventHandler( Credits::CreditsOnUpdateUI ) );

}
///////////////////////////////////////////////////////////////////////////


PlayersFrame::PlayersFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);

	wxGridSizer* gSizer26;
	gSizer26 = new wxGridSizer(3, 4, 0, 0);

	m_staticText7 = new wxStaticText(this, wxID_ANY, wxT("Player 1"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText7->Wrap(-1);
	gSizer26->Add(m_staticText7, 0, wxALL | wxALIGN_CENTER_VERTICAL | wxALIGN_CENTER_HORIZONTAL, 5);

	m_textCtrl1 = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	gSizer26->Add(m_textCtrl1, 0, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 5);

	m_panel1 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	gSizer26->Add(m_panel1, 1, wxEXPAND | wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	m_panel11 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	gSizer26->Add(m_panel11, 1, wxEXPAND | wxALL, 5);

	m_staticText6 = new wxStaticText(this, wxID_ANY, wxT("Player 2"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText6->Wrap(-1);
	gSizer26->Add(m_staticText6, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	m_textCtrl2 = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	gSizer26->Add(m_textCtrl2, 0, wxALIGN_CENTER_HORIZONTAL | wxBOTTOM | wxRIGHT | wxLEFT, 5);

	aiBtn = new wxRadioButton(this, wxID_ANY, wxT("AI"), wxDefaultPosition, wxDefaultSize, 0);
	gSizer26->Add(aiBtn, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	computerBtn = new wxRadioButton(this, wxID_ANY, wxT("Computer"), wxDefaultPosition, wxDefaultSize, 0);
	gSizer26->Add(computerBtn, 0, wxALL, 5);

	m_panel112 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	gSizer26->Add(m_panel112, 1, wxEXPAND | wxALL, 5);

	m_panel111 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	gSizer26->Add(m_panel111, 1, wxEXPAND | wxALL, 5);

	doneBtn = new wxButton(this, wxID_ANY, wxT("Done"), wxDefaultPosition, wxDefaultSize, 0);
	gSizer26->Add(doneBtn, 0, wxALL, 5);

	cancelBtn = new wxButton(this, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
	gSizer26->Add(cancelBtn, 0, wxALL, 5);


	this->SetSizer(gSizer26);
	this->Layout();

	this->Centre(wxBOTH);
	doneBtn->Bind(wxEVT_BUTTON, &PlayersFrame::OnDone, this);
	cancelBtn->Bind(wxEVT_BUTTON, &PlayersFrame::onCancel, this);
}


void PlayersFrame::OnDone(wxCommandEvent& event)
{

	
}
void PlayersFrame::onCancel(wxCommandEvent& event) {
	Close();
}
PlayersFrame::~PlayersFrame() {
	Close();
}

