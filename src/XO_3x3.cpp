// Author: Ghassan Elgendy - Rawan Ehab - Jana Ramadan
// TA: Rana Abdelkader
// Section S21
#include "../include/Frames.h"
#include "../resource.h"

////////////////////////////////3x3's Methods//////////////////////////////////////
XO3x3::XO3x3(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	SetCursor(wxCursor(wxT("MOUSE"), wxBITMAP_TYPE_CUR_RESOURCE));

	wxIcon icon("ICONAYA", wxBITMAP_TYPE_ICO_RESOURCE);
	this->SetIcon(icon);
	moves = 0;
	currentPlayerIndex = 0;
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);
	this->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNTEXT));

	wxGridSizer* boardContainer;
	boardContainer = new wxGridSizer(4, 3, 0, 0);
	for (short i = 0; i < 3; i++)
	{
		for (short j = 0; j < 3; j++)
		{
			cells[i][j] = new wxButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
			cells[i][j]->SetBackgroundColour(wxColour(255, 255, 255));
			boardContainer->Add(cells[i][j], 0, wxEXPAND, 5);
			cells[i][j]->Bind(wxEVT_BUTTON, &XO3x3::onCellClick, this);
			cells[i][j]->SetForegroundColour(wxColour(195, 195, 195));


		}
	}

	boardContainer->Add(0, 0, 1, wxEXPAND, 5);

	GameStatusAndScore = new wxStaticText(this, wxID_ANY, wallahyZhe2t, wxDefaultPosition, wxDefaultSize, 0);
	GameStatusAndScore->Wrap(-1);
	GameStatusAndScore->SetFont(wxFont(12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Aharoni")));
	GameStatusAndScore->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	GameStatusAndScore->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNTEXT));

	boardContainer->Add(GameStatusAndScore, 0, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 5);


	this->SetSizer(boardContainer);
	this->Layout();
	MenuBar = new wxMenuBar(0);
	Help = new wxMenu();
	wxMenuItem* Instructions;
	Instructions = new wxMenuItem(Help, wxID_ANY, wxString(wxT("Instructions")) + wxT('\t') + wxT("ALT+I"), wxEmptyString, wxITEM_NORMAL);
	Help->Append(Instructions);




	MenuBar->Append(Help, wxT("Help"));

	this->SetMenuBar(MenuBar);


	this->Centre(wxBOTH);

	// Connect Events

	Help->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(XO3x3::OnInstructions), this, Instructions->GetId());
	for (short i = 0; i < 3; i++)
	{
		for (short j = 0; j < 3; j++)
		{
			cells[i][j]->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(XO3x3::onCellClick), NULL, this);
		}

	}
}
void XO3x3::rand_comp_move() {
	if (isOver) {
		return;
	}
	int randomRow = rand() % 3;
	int randomCol = rand() % 3;

	while (cells[randomRow][randomCol]->GetLabel() != "")
	{
		randomRow = rand() % 3;
		randomCol = rand() % 3;
	}

	cells[randomRow][randomCol]->SetLabel(players[1]->get_symbol());
	cells[randomRow][randomCol]->SetFont(wxFont(27, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Aharoni")));
	cells[randomRow][randomCol]->SetForegroundColour(wxColour(0, 0, 0));


	isWinner();
	isDraw();


}
void XO3x3::onCellClick(wxCommandEvent& event) {
	wxButton* cell = dynamic_cast<wxButton*>(event.GetEventObject());
	wxString label = cell->GetLabel();

	// Check if the cell is already marked
	if (!isDraw() && !isOver) {
		moves++;

		if (label == 'X' || label == 'O' || label == 'o' || label == 'x')
		{
			wxMessageBox("This cell is already marked. Please choose another one.", "Invalid Move", wxOK | wxICON_EXCLAMATION);
			return;
		}

		// Mark the cell with the current player's symbol
		cell->SetLabel(players[currentPlayerIndex]->get_symbol());
		cell->SetFont(wxFont(27, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Aharoni")));
		cell->SetForegroundColour(wxColour(0, 0, 0));

		isWinner();

		if ((players[1]->getName()) == "Random Computer Player") {
			rand_comp_move();

		}
		else {
			currentPlayerIndex = (currentPlayerIndex + 1) % 2;
		}
	}
}
void XO3x3::isWinner() {
	// Check rows for a winner
	for (int i = 0; i < 3; ++i) {
		if (cells[i][0]->GetLabel() != "" &&
			cells[i][0]->GetLabel() == cells[i][1]->GetLabel() &&
			cells[i][0]->GetLabel() == cells[i][2]->GetLabel()) {
			// We have a winner in the row (cells[i][0], cells[i][1], cells[i][2])
			// Do something to indicate the winner
			if (cells[i][0]->GetLabel() == players[0]->get_symbol()) {
				GameStatusAndScore->SetLabel(players[0]->getName() + winner);
			}
			else {
				GameStatusAndScore->SetLabel(players[1]->getName() + winner);
			}
			isOver = true;
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
			if (cells[0][j]->GetLabel() == players[0]->get_symbol()) {
				GameStatusAndScore->SetLabel(players[0]->getName() + winner);
			}
			else {
				GameStatusAndScore->SetLabel(players[1]->getName() + winner);
			}
			isOver = true;
			return;
		}
	}

	// Check diagonals for a winner
	if (cells[0][0]->GetLabel() != "" &&
		cells[0][0]->GetLabel() == cells[1][1]->GetLabel() &&
		cells[0][0]->GetLabel() == cells[2][2]->GetLabel()) {
		// We have a winner in the diagonal (cells[0][0], cells[1][1], cells[2][2])
		// Do something to indicate the winner
		if (cells[0][0]->GetLabel() == players[0]->get_symbol()) {
			GameStatusAndScore->SetLabel(players[0]->getName() + winner);
		}
		else {
			GameStatusAndScore->SetLabel(players[1]->getName() + winner);

		}
		isOver = true;
		return;
	}

	if (cells[0][2]->GetLabel() != "" &&
		cells[0][2]->GetLabel() == cells[1][1]->GetLabel() &&
		cells[0][2]->GetLabel() == cells[2][0]->GetLabel()) {
		if (cells[0][2]->GetLabel() == players[0]->get_symbol()) {
			GameStatusAndScore->SetLabel(players[0]->getName() + winner);
		}
		else {
			GameStatusAndScore->SetLabel(players[1]->getName() + winner);

		}
		// We have a winner in the diagonal (cells[0][2], cells[1][1], cells[2][0])
		// Do something to indicate the winner
		isOver = true;
	}
	if (moves >= 9) {
		isOver = true;
		GameStatusAndScore->SetLabel("                 Draw");
	}
	// No winner yet
}
void XO3x3::OnInstructions(wxCommandEvent& event)
{
	wxString instructionsMessage = "Welcome to Tic Tac Toe!\n\nInstructions:\n• The game board is a 3x3 grid.\n• Players choose a token (X or O) and take turns placing tokens on the grid.\n• The goal is to form a horizontal, vertical, or diagonal line of three tokens of the same mark.\n\nWinning:\n•The first player to connect three discs of their mark wins the game.\n• If the board is full and no player has connected three tokens, the game is a draw.";

	// Display instructions in a dialog
	wxMessageDialog dialog(this, instructionsMessage, "Instructions", wxOK | wxCENTRE);
	dialog.ShowModal();
}
bool XO3x3::isDraw()
{
	return moves > 9;
}
XO3x3::~XO3x3()
{
	// Disconnect Events
	for (short i = 0; i < 3; i++)
	{
		for (short j = 0; j < 3; j++)
		{
			cells[i][j]->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(XO3x3::onCellClick), NULL, this);
		}

	}
}
