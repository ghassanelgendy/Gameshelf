// Author: Jana Ramadan
// TA: Rana Abdelkader
// Section S21
#include "../include/Frames.h"
#include "../resource.h"

////////////////////////////////5x5's Methods//////////////////////////////////////
XO5x5::XO5x5(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	wxIcon icon("ICONAYA", wxBITMAP_TYPE_ICO_RESOURCE);
	this->SetIcon(icon);
	moves = 0;
	currentPlayerIndex = 0;
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);
	this->SetBackgroundColour(wxColour(0, 71, 171));

	wxGridSizer* boardContainer;
	boardContainer = new wxGridSizer(6, 5, 6, 5); // 6 rows and 5 cols 
	short rr{ 989 };
	for (short i = 0; i < 5; i++) // iterate from 0 to 4
	{
		for (short j = 0; j < 5; j++) // iterate from 0 to 4
		{

			cells[i][j] = new wxButton(this, rr, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
			cells[i][j]->SetBackgroundColour(wxColour(255, 255, 255));
			cells[i][j]->SetFont(wxFont(18, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Hacen Egypt"))); // change the font size
			cells[i][j]->SetMinSize(wxSize(50, 50)); // set the minimum size
			cells[i][j]->SetMaxSize(wxSize(50, 50)); // set the maximum size
			cells[i][j]->SetWindowStyleFlag(wxNO_BORDER); // remove the border
			boardContainer->Add(cells[i][j], 0, wxEXPAND, 5);
			cells[i][j]->Bind(wxEVT_BUTTON, &XO5x5::onCellClick, this);
			cells[i][j]->SetForegroundColour(wxColour(0, 0, 0));
			rr++;
		}
	}
	wxFlexGridSizer* ResetSizer;
	ResetSizer = new wxFlexGridSizer(2, 1, 0, 0);
	ResetSizer->SetFlexibleDirection(wxBOTH);
	ResetSizer->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

	boardContainer->Add(0, 0, 1, wxEXPAND, 5);
	boardContainer->Add(0, 0, 1, wxEXPAND, 5);

	ResetBtn = new wxButton(this, wxID_ANY, wxT("Reset"), wxDefaultPosition, wxDefaultSize, 0);
	ResetBtn->SetBackgroundColour(wxColour(255, 255, 255));

	ResetSizer->Add(ResetBtn, 0, wxALL | wxALIGN_BOTTOM | wxEXPAND, 5);

	boardContainer->Add(ResetSizer, 1, wxEXPAND, 10);

	this->Layout();
	this->Centre(wxBOTH);

	// Connect Events
	for (short i = 0; i < 5; i++)
	{
		for (short j = 0; j < 5; j++)
		{
			cells[i][j]->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(XO5x5::onCellClick), NULL, this);
		}

	}

	MenuBar = new wxMenuBar(0);

	Help = new wxMenu();
	wxMenuItem* Instructions;
	Instructions = new wxMenuItem(Help, wxID_ANY, wxString(wxT("Instructions")) + wxT('\t') + wxT("ALT+I"), wxEmptyString, wxITEM_NORMAL);
	Help->Append(Instructions);

	MenuBar->Append(Help, wxT("Help"));

	this->SetMenuBar(MenuBar);

	wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);
	mainSizer->Add(boardContainer, 1, wxEXPAND | wxALL, 2);

	GameStatusAndScore = new wxStaticText(this, wxID_ANY, wallahyZhe2t, wxDefaultPosition, wxDefaultSize, 0);
	GameStatusAndScore->Wrap(-1);
	GameStatusAndScore->SetFont(wxFont(12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Hacen Egypt")));
	GameStatusAndScore->SetForegroundColour(wxColour(255, 255, 255));
	GameStatusAndScore->SetBackgroundColour(wxColour(0, 71, 171));
	mainSizer->Add(GameStatusAndScore, 0, wxALIGN_CENTER | wxALL, 5);
	this->SetSizer(mainSizer);

	ResetBtn->Bind(wxEVT_BUTTON, &XO5x5::OnResetBtn, this);
	Help->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(XO5x5::OnInstructions), this, Instructions->GetId());

}
XO5x5::~XO5x5()
{
	// Disconnect Events
	for (short i = 0; i < 5; i++)
	{
		for (short j = 0; j < 5; j++)
		{
			cells[i][j]->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(XO5x5::onCellClick), NULL, this);
		}
	}
}
void XO5x5::onCellClick(wxCommandEvent& event) {
	// Get the button that was clicked
	wxButton* btn = (wxButton*)event.GetEventObject();

	// beygeeb el indices of the button
	int row = (btn->GetId() - 989) / 5;
	int col = (btn->GetId() - 989) % 5;

	// Check if the cell is empty
	if (btn->GetLabel().IsEmpty()) {
		if (turn == 0) {
			btn->SetLabel("x");
		}
		else {
			btn->SetLabel("o");
		}

		// Increment moves
		moves++;

		// Check for a winner or draw
		isWinner();

		// Switch to the next player
		turn = 1 - turn;

		if ((players[1]->getName()) == "Random Computer Player") {
			if (moves != 24) {              // tool ma el game makhlsetsh
				Sleep(290);
				rand_comp_move();
			}
		}
	}
}
void XO5x5::isWinner() {
	int xwins = 0;
	int owins = 0;

	// Check rows
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			if (cells[i][j]->GetLabel() == cells[i][j + 1]->GetLabel() && cells[i][j + 1]->GetLabel() == cells[i][j + 2]->GetLabel() && !cells[i][j]->GetLabel().IsEmpty()) {
				if (cells[i][j]->GetLabel() == "x") {
					xwins++;
				}
				else if (cells[i][j]->GetLabel() == "o") {
					owins++;
				}
			}
		}
	}

	// Check columns
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			if (cells[i][j]->GetLabel() == cells[i + 1][j]->GetLabel() && cells[i + 1][j]->GetLabel() == cells[i + 2][j]->GetLabel() && !cells[i][j]->GetLabel().IsEmpty()) {
				if (cells[i][j]->GetLabel() == "x") {
					xwins++;
				}
				else if (cells[i][j]->GetLabel() == "o") {
					owins++;
				}
			}
		}
	}

	// Check diagonals
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (cells[i][j]->GetLabel() == cells[i + 1][j + 1]->GetLabel() && cells[i + 1][j + 1]->GetLabel() == cells[i + 2][j + 2]->GetLabel() && !cells[i][j]->GetLabel().IsEmpty()) {
				if (cells[i][j]->GetLabel() == "x") {
					xwins++;
				}
				else if (cells[i][j]->GetLabel() == "o") {
					owins++;
				}
			}
		}
	}

	// Check reverse diagonals
	for (int i = 0; i < 3; i++) {
		for (int j = 2; j < 5; j++) {
			if (cells[i][j]->GetLabel() == cells[i + 1][j - 1]->GetLabel() && cells[i + 1][j - 1]->GetLabel() == cells[i + 2][j - 2]->GetLabel() && !cells[i][j]->GetLabel().IsEmpty()) {
				if (cells[i][j]->GetLabel() == "x") {
					xwins++;
				}
				else if (cells[i][j]->GetLabel() == "o") {
					owins++;
				}
			}
		}
	}
	if (moves == 24) {
		// Determine the winner based on the count of three-in-a-row sequences
		if (xwins > owins) {
			GameStatusAndScore->SetLabel("Player X wins!");
		}
		else if (owins > xwins) {
			GameStatusAndScore->SetLabel("Player O wins!");
		}
		else {
			GameStatusAndScore->SetLabel("It's a draw!");
		}
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)

				cells[i][j]->Disable();                 // disable ely fadel bas beydoos 3al cell mareteen 3ady
		}
	}
}
bool XO5x5::is_draw() {
	return false;
}
void XO5x5::rand_comp_move() {
	int row, col;

	// Generate random row and column until an empty cell is found
generate:
	row = rand() % 5;
	col = rand() % 5;

	if (!cells[row][col]->GetLabel().IsEmpty()) {
		goto generate;
	}

	// Random computer beyl3ab be 'O'
	if (turn == 1) {
		cells[row][col]->SetLabel("o");
	}

	// Increment moves
	moves++;

	// Switch to the next player
	turn = 1 - turn;

	// Check el winner if the game is over
	if (moves == 24) {
		isWinner();
	}
}
void XO5x5::OnInstructions(wxCommandEvent& event) {
	wxString instructionsMessage = "Welcome to 5x5 Tic Tac Toe!\n\nInstructions:\n• The game board is a 5x5 grid.\n• Players choose a token (X or O) and take turns placing tokens on the grid.\n• \nWinning:\n•Count the number of three in a rows each player has. Sequences can be vertically or horizontally or diagonally. Whover has the most wins. then it is a draw.";
	wxMessageDialog dialog(this, instructionsMessage, "Instructions", wxOK | wxCENTRE);
	dialog.ShowModal();
}
void XO5x5::OnResetBtn(wxCommandEvent& event)
{
	for (short i = 0; i < 5; i++)
	{
		for (short j = 0; j < 5; j++)
		{
			cells[i][j]->Enable();
			cells[i][j]->SetLabel("");
		}
	}
	turn = 0;
	moves = 0;
	GameStatusAndScore->SetLabel(wallahyZhe2t);
}