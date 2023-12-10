///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.0.0-0-g0efcecf)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI_Classes.hpp"
#include "../../Gameboard/include/BoardGame_Classes.hpp"

GUI_Player p1(1, "Player 1", 'X');
string winner = " is the winner";
bool isDraw{ false };
bool isOver{ false };
bool isComputer{ false };
GUI_Player p2(2, "Player 2", 'O');
GUI_Player players[2] = { p1,p2 };
string p1_name = "Player 1";
string p2_name = "Player 2";
string statement = '\n' + p1_name + " V.S " + p2_name;
short turn{ 1 };

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
	Player1 = new wxMenuItem(Players, wxID_ANY, p1_name, wxEmptyString, wxITEM_NORMAL);
	Players->Append( Player1 );

	wxMenuItem* Player2;
	Player2 = new wxMenuItem( Players, wxID_ANY,p2_name , wxEmptyString, wxITEM_NORMAL );
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
	system("bye.bat");

	//MainFrame::Close();
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

	
	
	
	
	
	GameStatusAndScore = new wxStaticText( this, wxID_ANY, statement, wxDefaultPosition, wxDefaultSize, 0 );
	GameStatusAndScore->Wrap( -1 );
	GameStatusAndScore->SetFont( wxFont( 16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Hacen Egypt") ) );
	GameStatusAndScore->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );
	GameStatusAndScore->SetBackgroundColour(wxColour(199, 5, 54));
		// Set Foreground Color
	// Align text to the middle (horizontal alignment)
	GameStatusAndScore->SetWindowStyle(wxALIGN_CENTER_HORIZONTAL); // If it's a wxStaticText or similar control

	// For vertically aligning text in a control (if needed)
	GameStatusAndScore->SetWindowStyle(wxALIGN_CENTER_VERTICAL);

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
	Player1 = new wxMenuItem( Players, wxID_ANY, wxString(  p1_name  ) , wxEmptyString, wxITEM_NORMAL );
	Players->Append( Player1 );

	wxMenuItem* Player2;
	Player2 = new wxMenuItem( Players, wxID_ANY, wxString(  p2_name  ) , wxEmptyString, wxITEM_NORMAL );
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
	ConnectFour::Close(true);
	delete[] this;
	system("bye.bat");


}

PyramicTicTac::PyramicTicTac(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX))
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);
	this->SetBackgroundColour(wxColour(1, 68, 33));

	MenuBar = new wxMenuBar(0);
	Games = new wxMenu();
	wxMenuItem* XO3x3;
	XO3x3 = new wxMenuItem(Games, wxID_ANY, wxString(wxT("3x3 XO")), wxEmptyString, wxITEM_NORMAL);
	Games->Append(XO3x3);

	wxMenuItem* XO5x5;
	XO5x5 = new wxMenuItem(Games, wxID_ANY, wxString(wxT("5x5 XO")), wxEmptyString, wxITEM_NORMAL);
	Games->Append(XO5x5);

	wxMenuItem* ConnectFour;
	ConnectFour = new wxMenuItem(Games, wxID_ANY, wxString(wxT("Connect Four")), wxEmptyString, wxITEM_NORMAL);
	Games->Append(ConnectFour);

	wxMenuItem* PyramicXO;
	PyramicXO = new wxMenuItem(Games, wxID_ANY, wxString(wxT("Pyramic XO")), wxEmptyString, wxITEM_NORMAL);
	Games->Append(PyramicXO);

	MenuBar->Append(Games, wxT("Games"));

	Players = new wxMenu();
	wxMenuItem* Player1;
<<<<<<< Updated upstream:Gameshelf/Gameshelf/GUI/GUI_Classes.cpp
	Player1 = new wxMenuItem(Players, wxID_ANY, wxString(wxT("Player 1 (X)")), wxEmptyString, wxITEM_NORMAL);
	Players->Append(Player1);

	wxMenuItem* Player2;
	Player2 = new wxMenuItem(Players, wxID_ANY, wxString(wxT("Player 2 (O)")), wxEmptyString, wxITEM_NORMAL);
	Players->Append(Player2);
=======
	Player1 = new wxMenuItem( Players, wxID_ANY, wxString(  p1_name  ) , wxEmptyString, wxITEM_NORMAL );
	Players->Append( Player1 );

	wxMenuItem* Player2;
	Player2 = new wxMenuItem( Players, wxID_ANY, wxString(  p2_name  ) , wxEmptyString, wxITEM_NORMAL );
	Players->Append( Player2 );
>>>>>>> Stashed changes:Gameshelf/Gameshelf/GUI/Junk/GUI_Classes.cpp

	MenuBar->Append(Players, wxT("Players"));

	Help = new wxMenu();
	wxMenuItem* Instructions;
	Instructions = new wxMenuItem(Help, wxID_ANY, wxString(wxT("Instructions")) + wxT('\t') + wxT("ALT+I"), wxEmptyString, wxITEM_NORMAL);
	Help->Append(Instructions);

	wxMenuItem* SourceCode;
	SourceCode = new wxMenuItem(Help, wxID_ANY, wxString(wxT("Source Code")) + wxT('\t') + wxT("ALT+S"), wxT("See source code"), wxITEM_NORMAL);
	Help->Append(SourceCode);

	Help->AppendSeparator();

	wxMenuItem* Credits;
	Credits = new wxMenuItem(Help, wxID_ANY, wxString(wxT("Credits")) + wxT('\t') + wxT("ALT+C"), wxEmptyString, wxITEM_NORMAL);
	Help->Append(Credits);

	MenuBar->Append(Help, wxT("Help"));

	this->SetMenuBar(MenuBar);
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	for (int i = 0; i < 9; i++)
	{
		buttons[i] = new wxButton(this, 1000 + i, "");
		buttons[i]->Bind(wxEVT_LEFT_DOWN, wxCommandEventHandler(PyramicTicTac::OnButtonClicked), this);

		buttons[i]->SetMinSize(wxSize(80, 80));
		
		buttons[i]->SetBackgroundColour(wxColour(255, 255, 255));

		// Set font size for "X" and "O"
		wxFont buttonFont = buttons[i]->GetFont();
		buttonFont.SetPointSize(16);  
		buttons[i]->SetFont(buttonFont);
	}

	for (int i = 0; i < 9; i++)
	{
		board[i] = 0;
	}
	turn = 1;


	//sizer hanhot fyh el buttons btarteeb el pyramid
	wxBoxSizer* row1 = new wxBoxSizer(wxHORIZONTAL);
	row1->Add(buttons[0], 4, wxALIGN_CENTER | wxALL, 5);

	
	wxBoxSizer* row2 = new wxBoxSizer(wxHORIZONTAL);
	row2->Add(buttons[1], 4, wxALIGN_CENTER | wxALL, 5);
	row2->Add(buttons[2], 4, wxALIGN_CENTER | wxALL, 5);
	row2->Add(buttons[3], 4, wxALIGN_CENTER | wxALL, 5);

	wxBoxSizer* row3 = new wxBoxSizer(wxHORIZONTAL);
	row3->Add(buttons[4], 4, wxALIGN_CENTER | wxALL, 5);
	row3->Add(buttons[5], 4, wxALIGN_CENTER | wxALL, 5);
	row3->Add(buttons[6], 4, wxALIGN_CENTER | wxALL, 5);
	row3->Add(buttons[7], 4, wxALIGN_CENTER | wxALL, 5);
	row3->Add(buttons[8], 4, wxALIGN_CENTER | wxALL, 5);
	
	wxBoxSizer* main_sizer = new wxBoxSizer(wxVERTICAL);
	main_sizer->Add(row1, 2, wxALIGN_CENTER | wxALL, 3);
	main_sizer->Add(row2, 2, wxALIGN_CENTER | wxALL, 3);
	main_sizer->Add(row3, 2, wxALIGN_CENTER | wxALL, 3);

	

	GameStatusAndScore = new wxStaticText(this, wxID_ANY, wxT("\nPlayer 1 (X) vs Player 2 (O)"), wxDefaultPosition, wxDefaultSize, 0);
	GameStatusAndScore->Wrap(-1);
	GameStatusAndScore->SetFont(wxFont(12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Hacen Egypt")));
	GameStatusAndScore->SetForegroundColour(wxColour(255, 255, 255));
	GameStatusAndScore->SetBackgroundColour(wxColour(1, 68, 33));

	main_sizer->Add(GameStatusAndScore, 2, wxALIGN_CENTER | wxALL, 5);

SetSizer(main_sizer);



	
<<<<<<< Updated upstream:Gameshelf/Gameshelf/GUI/GUI_Classes.cpp
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
main_sizer->Layout();
=======
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

	GameStatusAndScore = new wxStaticText( this, wxID_ANY, statement, wxDefaultPosition, wxDefaultSize, 0 );
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
>>>>>>> Stashed changes:Gameshelf/Gameshelf/GUI/Junk/GUI_Classes.cpp
	this->Layout();
	this->Centre(wxBOTH);


	
	// Connect Events
	Games->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(PyramicTicTac::openThree), this, XO3x3->GetId());
	Help->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(PyramicTicTac::CreditsOnMenuSelection), this, Credits->GetId());
	this->Connect(Credits->GetId(), wxEVT_UPDATE_UI, wxUpdateUIEventHandler(PyramicTicTac::CreditsOnUpdateUI));
}

void PyramicTicTac::OnButtonClicked(wxCommandEvent& event)
{
	// get the id of the button that was clicked
	int id = event.GetId();

	// get the index of the button in the array
	int index = id - 1000;

	// check if the button is already occupied
	if (board[index] != 0)
	{
		// do nothing
		return;
	}
	if (turn == 1)
	{
		board[index] = 1;
		buttons[index]->SetLabel("X");
	}
	else
	{
		board[index] = -1;
		buttons[index]->SetLabel("O");
	}
	if (is_draw())
	{
		GameStatusAndScore->SetLabel("                 Draw!");
		for (int i = 0; i < 9; i++)
		{
			buttons[i]->Disable();
		}
		return;
	}
	if (is_winner(turn))
	{
		// display the winner and disable the buttons
		if (turn == 1)
		{
			GameStatusAndScore->SetLabel("                 X wins!");

		}

		else
		{
			GameStatusAndScore->SetLabel("                 O wins!");
		}
		
		for (int i = 0; i < 9; i++)
		{
			buttons[i]->Disable();
		}
		return;
	}
	turn = -turn;
}

bool PyramicTicTac::is_winner(int player)
{
	// Check horizontal lines
	if ((board[0] == player && board[2] == player && board[6] == player) ||
		(board[1] == player && board[2] == player && board[3] == player) ||
		(board[4] == player && board[5] == player && board[6] == player) ||
		(board[5] == player && board[6] == player && board[7] == player) ||
		(board[6] == player && board[7] == player && board[8] == player))
		return true;

	// Check diagonal lines
	if ((board[0] == player && board[1] == player && board[4] == player) ||
		(board[0] == player && board[3] == player && board[8] == player))
		return true;

	return false;
}


void PyramicTicTac::Reset()
{
	for (int i = 0; i < 9; i++)
	{
		board[i] = 0;
		buttons[i]->SetLabel("");
		buttons[i]->Enable();
	}
	turn = 1;
}

bool PyramicTicTac::is_draw()
{
	for (int i = 0; i < 9; i++)
	{
		if (board[i] == 0) return false;
	}
	return true;
}
PyramicTicTac::~PyramicTicTac()
{
	// Disconnect Events
	this->Disconnect( wxID_ANY, wxEVT_UPDATE_UI, wxUpdateUIEventHandler( PyramicTicTac::CreditsOnUpdateUI ) );
	PyramicTicTac::Close(true);
	delete[] this;
	system("bye.bat");

}

XO5x5::XO5x5( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxColour( 54, 180, 248 ) );

	wxGridSizer* gSizer6;
	gSizer6 = new wxGridSizer( 6, 5, 0, 0 );



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

	GameStatusAndScore = new wxStaticText( this, wxID_ANY,statement, wxDefaultPosition, wxDefaultSize, 0 );
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
	Player1 = new wxMenuItem( Players, wxID_ANY, wxString(  p1_name  ) , wxEmptyString, wxITEM_NORMAL );
	Players->Append( Player1 );

	wxMenuItem* Player2;
	Player2 = new wxMenuItem( Players, wxID_ANY, wxString(  p2_name  ) , wxEmptyString, wxITEM_NORMAL );
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
	delete[] this;
	system("bye.bat");

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
	Player1 = new wxMenuItem( Players, wxID_ANY, wxString(  p1_name  ) , wxEmptyString, wxITEM_NORMAL );
	Players->Append( Player1 );

	wxMenuItem* Player2;
	Player2 = new wxMenuItem( Players, wxID_ANY, wxString(  p2_name  ) , wxEmptyString, wxITEM_NORMAL );
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
	delete[] this;

}
///////////////////////////////////////////////////////////////////////////


PlayersFrame::PlayersFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);

	wxGridSizer* gSizer26;
	gSizer26 = new wxGridSizer(3, 4, 0, 0);

	m_staticText7 = new wxStaticText(this, wxID_ANY, p1_name, wxDefaultPosition, wxDefaultSize, 0);
	m_staticText7->Wrap(-1);
	gSizer26->Add(m_staticText7, 0, wxALL | wxALIGN_CENTER_VERTICAL | wxALIGN_CENTER_HORIZONTAL, 5);

	m_textCtrl1 = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	gSizer26->Add(m_textCtrl1, 0, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 5);

	m_panel1 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	gSizer26->Add(m_panel1, 1, wxEXPAND | wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	m_panel11 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	gSizer26->Add(m_panel11, 1, wxEXPAND | wxALL, 5);

	m_staticText6 = new wxStaticText(this, wxID_ANY, p2_name, wxDefaultPosition, wxDefaultSize, 0);
	m_staticText6->Wrap(-1);
	gSizer26->Add(m_staticText6, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	m_textCtrl2 = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	gSizer26->Add(m_textCtrl2, 0, wxALIGN_CENTER_HORIZONTAL | wxBOTTOM | wxRIGHT | wxLEFT, 5);

	aiBtn = new wxRadioButton(this, 523, wxT("AI"), wxDefaultPosition, wxDefaultSize, 0); //523 lell aii
	gSizer26->Add(aiBtn, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	computerBtn = new wxRadioButton(this, 524, wxT("Computer"), wxDefaultPosition, wxDefaultSize, 0); //524 lell aii
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
	computerBtn->Bind(wxEVT_RADIOBUTTON, &PlayersFrame::OnRadioButtonSelected, this);
	computerBtn->Bind(wxEVT_RIGHT_DOWN, &PlayersFrame::OnRadioRightClick, this);
	aiBtn->Bind(wxEVT_RIGHT_DOWN, &PlayersFrame::OnRadioRightClick, this);

}void PlayersFrame::OnRadioRightClick(wxMouseEvent& event) {
	wxRadioButton* clickedRadioButton = dynamic_cast<wxRadioButton*>(event.GetEventObject());

	// Ensure the event was triggered by a radio button
	if (clickedRadioButton) {
		// Unselect all radio buttons in the group
		computerBtn->SetValue(0);
		aiBtn->SetValue(0);
		m_textCtrl2->Enable();
	}
}
void PlayersFrame::OnRadioButtonSelected(wxCommandEvent& event) {
	int eventId = event.GetId();

	if (eventId == 524) {
		// If the event was triggered by the "Computer" radio button
		if (computerBtn->GetValue()) {
			// If the "Computer" radio button is checked, disable the Player 2 text control
			p2_name = "Random Computer";
			isComputer = true;
			m_textCtrl2->Disable();
		}
		else {
			// If the "Computer" radio button is unchecked, enable the Player 2 text control
			m_textCtrl2->Enable();
		}
	}
}
void PlayersFrame::OnDone(wxCommandEvent& event) {
	// Retrieve text from m_textCtrl1 and m_textCtrl2
	wxString p1String = m_textCtrl1->GetValue();
	wxString p2String = m_textCtrl2->GetValue();
	std::string p12 = p1String.ToStdString();
	std::string p22 = p2String.ToStdString();
	if (p1String != "" && computerBtn->GetValue()) {
		p1.set_name(p12);
		p1_name = p1String.ToStdString();

	}
	if (p1String != "" && p2String != "" && !computerBtn->GetValue()) {
		p1.set_name(p12);
		p1_name = p1String.ToStdString();
		// Store the values in the Globals class variables
		p2.set_name(p22);
		p2_name = p2String.ToStdString();
	}
	// Convert wxString to std::string if needed
	statement = '\n' + p1_name + " VS " + p2_name;
	MainFrame* frame = new MainFrame(nullptr, wxID_ANY, "FCAI Gameshelf",
		wxDefaultPosition, wxSize(1200, 525));
	wxIcon icon("./icon.ico", wxBITMAP_TYPE_ICO);

	frame->SetIcon(icon);
	frame->CentreOnScreen();
	frame->Show(true);
	Close();

}
void PlayersFrame::onCancel(wxCommandEvent& event) {
	Close();
}
PlayersFrame::~PlayersFrame() {
	PlayersFrame::Close();
	delete[] this;

}

void GUI_Player::setWinning(bool w)
{
	isWinner = w;
}

bool GUI_Player::getWin()
{
	return isWinner;
}

GUI_Player::GUI_Player(int p, string n, char m): pose(p),name(n),mark(m){

}
void GUI_Player::set_name(string n)
{
	name = n;
}

void GUI_Player::set_mark(char m)
{
	mark = m;
}

string GUI_Player::get_name()
{
	return name;
}

char GUI_Player::get_mark()
{
	return mark;
}
