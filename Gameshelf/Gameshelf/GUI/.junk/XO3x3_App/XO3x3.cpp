#include "../../Gameshelf/GUI/GUI_Classes.hpp"


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


void XO3x3::CreditsOnMenuSelection(wxCommandEvent& event)
{
	wxIcon icon("./icon.ico", wxBITMAP_TYPE_ICO);

	Credits* xo = new Credits(nullptr, wxID_ANY, "Credits",
		wxDefaultPosition, wxSize(600, 318));
	//creditsFrame->SetIcon(icon);

	xo->SetIcon(icon);

	xo->Show(true);
}

XO3x3::XO3x3( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	turn = 1;
	p1.setWinning(0);
	p2.setWinning(0);
	isDraw = false; 
	isOver = false;

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
			string pose = to_string(i) +" , "+ to_string(j);
			cells[i][j]->SetLabel(pose);
			gSizer6->Add(cells[i][j], 0, wxEXPAND, 5);
			cells[i][j]->Bind(wxEVT_BUTTON, &XO3x3::OnButtonClick, this);
			cells[i][j]->SetForegroundColour(wxColour(5, 5, 5));

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
	
	GameStatusAndScore = new wxStaticText( this, wxID_ANY, statement, wxDefaultPosition, wxDefaultSize, 0 );
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
	Games->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( XO3x3::openThree ), this, XO3x31->GetId());
	Help->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( XO3x3::CreditsOnMenuSelection ), this, Credits->GetId());
	this->Connect( Credits->GetId(), wxEVT_UPDATE_UI, wxUpdateUIEventHandler( XO3x3::CreditsOnUpdateUI ) );
}

XO3x3::~XO3x3()
{  
	// Disconnect Events
	this->Disconnect( wxID_ANY, wxEVT_UPDATE_UI, wxUpdateUIEventHandler( XO3x3::CreditsOnUpdateUI ) );
	XO3x3::Close();
	delete[] this;
	system("bye.bat");

}
   
void XO3x3::CheckWinner() {
	// Check rows for a winner
	for (int i = 0; i < 3; ++i) {
		if (cells[i][0]->GetLabel() != "" &&
			cells[i][0]->GetLabel() == cells[i][1]->GetLabel() &&
			cells[i][0]->GetLabel() == cells[i][2]->GetLabel()) {
			// We have a winner in the row (cells[i][0], cells[i][1], cells[i][2])
			// Do something to indicate the winner
			if (cells[i][0]->GetLabel() == 'X') {
				GameStatusAndScore->SetLabel('\n' + p1_name + winner);
				p1.setWinning(1);
				isOver = true;
			}
			else {
				GameStatusAndScore->SetLabel('\n' + p2_name + winner);
				p2.setWinning(1);
				isOver = true;

			}
			return;
		}
	}

	// Check columns for a winner
	for (int j = 0; j < 3; j++) {
		if (cells[0][j]->GetLabel() != "" &&
			cells[0][j]->GetLabel() == cells[1][j]->GetLabel() &&
			cells[0][j]->GetLabel() == cells[2][j]->GetLabel()) {
			// We have a winner in the column (cells[0][j], cells[1][j], cells[2][j])
			// Do something to indicate the winner
			if (cells[0][j]->GetLabel() == 'X') {
				GameStatusAndScore->SetLabel('\n' + p1_name + winner);
				p1.setWinning(1);
				isOver = true;

			}
			else {
				GameStatusAndScore->SetLabel('\n' + p2_name+ winner );
				p2.setWinning(1);
				isOver = true;

			}
			return;
		}
	}

	// Check diagonals for a winner
	if (cells[0][0]->GetLabel() != "" &&
		cells[0][0]->GetLabel() == cells[1][1]->GetLabel() &&
		cells[0][0]->GetLabel() == cells[2][2]->GetLabel()) {
		// We have a winner in the diagonal (cells[0][0], cells[1][1], cells[2][2])
		// Do something to indicate the winner
		if (cells[0][0]->GetLabel() == 'X') {
			GameStatusAndScore->SetLabel('\n' + p1_name + winner);
			p1.setWinning(1);
			isOver = true;

		}
		else {
			GameStatusAndScore->SetLabel('\n' + p2_name + winner);
			p2.setWinning(1);
			isOver = true;

		}
		return;
	}

	if (cells[0][2]->GetLabel() != "" &&
		cells[0][2]->GetLabel() == cells[1][1]->GetLabel() &&
		cells[0][2]->GetLabel() == cells[2][0]->GetLabel()) {
		if (cells[0][2]->GetLabel() == 'X') {
			GameStatusAndScore->SetLabel('\n' + p1_name + winner);
			p1.setWinning(1);
			isOver = true;

		}
		else {
			GameStatusAndScore->SetLabel('\n' + p2_name + winner);
			p2.setWinning(1);
			isOver = true;

		}
		// We have a winner in the diagonal (cells[0][2], cells[1][1], cells[2][0])
		// Do something to indicate the winner
	
	}

	// No winner yet
}



void XO3x3::ComputerPlay() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (cells[i][j]->GetLabel() != "X" && cells[i][j]->GetLabel() != "O") {
				cells[i][j]->SetLabel("O");
				cells[i][j]->SetFont(wxFont(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Hacen Egypt")));
				turn++;
				return;
			}
		}
	}
}

void XO3x3::OnButtonClick(wxCommandEvent& event) {
    wxButton* clickedButton = dynamic_cast<wxButton*>(event.GetEventObject());
    wxString label = clickedButton->GetLabel();

    if (label != "X" && label != "O" && !isDraw && !isOver) {
        turn++;

        if (isComputer) {
            if (turn % 2 == 0) {
                clickedButton->SetLabel("X");
            }
            else {
                ComputerPlay();
            }
        }
        else {
            if (turn % 2 == 0) {
                clickedButton->SetLabel("X");
            }
            else {
                clickedButton->SetLabel("O");
            }
        }
        clickedButton->SetFont(wxFont(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Hacen Egypt")));
        CheckWinner();
        if (turn >= 9 && !(p1.getWin() || p2.getWin())) {
            GameStatusAndScore->SetLabel("\nDraw");
            isDraw = true;
            isOver = true;
        }
    }
}



