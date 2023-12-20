// Author: Ghassan Elgendy - Rowan Ammar - Jana Ramadan
// Section: S21
// TA: Rana Abdelkader
// GUI CLASSES
#include "../include/Frames.h"
#include "../include/ConnectFourFrame.h"
#include "../resource.h"

////////////////////////////////ConnectFour's Methods//////////////////////////////////////
ConnectFour::ConnectFour(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	SetCursor(wxCursor(wxT("MOUSE"), wxBITMAP_TYPE_CUR_RESOURCE));
	this->Bind(wxEVT_CHAR, &ConnectFour::OnCharEvent, this);
	wxIcon icon("ICONAYA", wxBITMAP_TYPE_ICO_RESOURCE);
	this->SetIcon(icon);
	moves = 0;
	currentPlayerIndex = 0;
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);
	this->SetBackgroundColour(wxColour(199, 5, 54));

	wxGridSizer* boardContainer;
	boardContainer = new wxGridSizer(7, 7, 0, 0);
	short rr{ 989 };
	for (short i = 0; i < 6; i++)
	{
		for (short j = 0; j < 7; j++)
		{

			cells[i][j] = new wxButton(this, rr, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
			cells[i][j]->SetBackgroundColour(wxColour(255, 255, 255));
			cells[i][j]->SetLabel(' ' + to_string(j) + ' ');
			cells[i][j]->SetFont(wxFont(27, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Hacen Egypt")));
			boardContainer->Add(cells[i][j], 0, wxEXPAND, 5);
			cells[i][j]->Bind(wxEVT_BUTTON, &ConnectFour::onCellClick, this);
			cells[i][j]->SetForegroundColour(wxColour(195, 195, 195));
			rr++;
			if (i != 0 && j < 8) {
				cells[i][j]->SetForegroundColour(wxColour(255, 255, 255));

			}
		}
	}
	for (short i = 0; i < 7; i++) {
		cells[6][i] = new wxButton(this, -1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
		cells[6][i]->SetLabel("----");
	}


	boardContainer->Add(0, 0, 1, wxEXPAND, 5);


	boardContainer->Add(0, 0, 1, wxEXPAND, 5);


	boardContainer->Add(0, 0, 1, wxEXPAND, 5);
	wxFlexGridSizer* ResetSizer;
	ResetSizer = new wxFlexGridSizer(2, 1, 0, 0);
	ResetSizer->SetFlexibleDirection(wxBOTH);
	ResetSizer->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

	GameStatusAndScore = new wxStaticText(this, wxID_ANY, wallahyZhe2t, wxDefaultPosition, wxDefaultSize, 0);
	GameStatusAndScore->Wrap(-1);
	GameStatusAndScore->SetFont(wxFont(12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Hacen Egypt")));
	GameStatusAndScore->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));
	GameStatusAndScore->SetBackgroundColour(wxColour(199, 5, 54));

	ResetSizer->Add(GameStatusAndScore, 0, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_BOTTOM, 5);

	ResetBtn = new wxButton(this, wxID_ANY, wxT("Reset"), wxDefaultPosition, wxDefaultSize, 0);
	ResetBtn->SetBackgroundColour(wxColour(255, 255, 255));

	ResetSizer->Add(ResetBtn, 0, wxALL | wxALIGN_BOTTOM | wxEXPAND, 5);


	boardContainer->Add(ResetSizer, 1, wxEXPAND, 10);


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
	for (short i = 0; i < 6; i++)
	{
		for (short j = 0; j < 7; j++)
		{
			cells[i][j]->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ConnectFour::onCellClick), NULL, this);
		}

	}
	Help->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(ConnectFour::OnInstructions), this, Instructions->GetId());
	ResetBtn->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ConnectFour::OnResetBtn), NULL, this);
	this->SetFocus();

}
void ConnectFour::ComputerPlay(int &row, int &col)
{
generate:
	row = (rand()% 6);
	col = (rand()% 7);
	if (cells[row][col]->GetLabel() == 'x' || cells[row][col]->GetLabel() == 'o') {
		goto generate;
	}
	for (int i = 0; i < 6; ++i) {
		if (cells[i][col]->GetLabel().size() > 1) {
			row = i;
		}
	}
	currentPlayerIndex = (currentPlayerIndex + 1) % 2;
	cells[row][col]->SetLabel(players[currentPlayerIndex]->get_symbol());
	cells[row][col]->SetForegroundColour(wxColour(0, 0, 0));
	if (isWinner() == 1) {
		GameStatusAndScore->SetLabel(players[0]->getName() + winner);
		endGame();
	}
	else if (isWinner() == -1) {
		GameStatusAndScore->SetLabel(players[1]->getName() + winner);
		endGame();
	}
	if (isDraw()) {
		GameStatusAndScore->SetLabel("                                   Draw!");
		endGame();
	}
}
void ConnectFour::AIMove(int& row, int& col)
{
	for (short i = 0; i < 6; i++)
	{
		for (short j = 0; j < 7; j++)
		{
			if (cells[i][j]->GetLabel() == cells[i][j + 1]->GetLabel() &&
				cells[i][j]->GetLabel() == cells[i][j + 2]->GetLabel() && (cells[i][j]->GetLabel() == 'x')) {
					cells[i][j + 3]->SetLabel(players[currentPlayerIndex]->get_symbol());
				cells[i][j + 3]->SetForegroundColour(wxColour(0, 0, 0));
			}
		}
	}
	ComputerPlay(row, col);
}
int ConnectFour::isWinner()
{
	for (unsigned short i = 0; i < 6; i++)
	{
		for (unsigned short j = 0; j < 4; j++) {
			if (cells[i][j]->GetLabel() == cells[i][j + 1]->GetLabel() &&
				cells[i][j]->GetLabel() == cells[i][j + 2]->GetLabel() &&
				cells[i][j]->GetLabel() == cells[i][j + 3]->GetLabel() &&
				((cells[i][j]->GetLabel() == 'x') || (cells[i][j]->GetLabel() == 'o'))) {
				for (short g = 0; g < 4; g++)
				{
					cells[i][j + g]->SetForegroundColour(wxColour(255,20,20));
				}
				if (cells[i][j]->GetLabel() == 'x') {
					return 1;
				}
				else
					return -1;
			}
		}
		
	}
	//to handle the col win
	for (unsigned short i = 0; i < 4; i++)
	{
		for (unsigned short j = 0; j < 7; j++) {
			if (cells[i][j]->GetLabel() == cells[i + 1][j]->GetLabel() &&
				cells[i][j]->GetLabel() == cells[i + 2][j]->GetLabel() &&
				cells[i][j]->GetLabel() == cells[i + 3][j]->GetLabel() &&
				((cells[i][j]->GetLabel() == 'x') || (cells[i][j]->GetLabel() == 'o'))) {
				for (short g = 0; g < 4; g++)
				{
					cells[i+g][j]->SetForegroundColour(wxColour(255, 20, 20));
				}
				{
					if (cells[i][j]->GetLabel() == 'x') {
						return 1;
					}
					else
						return -1;
				}
			}
		}
	}
	////to handle the diag win
	for (unsigned short i = 0; i < 3; i++)
	{
		for (unsigned short j = 0; j < 4; j++) {
			if (cells[i][j]-> GetLabel()== cells[i + 1][j + 1]-> GetLabel()&&
				cells[i][j]-> GetLabel()== cells[i + 2][j + 2]-> GetLabel()&&
				cells[i][j]-> GetLabel()== cells[i + 3][j + 3]-> GetLabel()&&
				((cells[i][j]-> GetLabel()== 'x') || (cells[i][j]-> GetLabel()== 'o'))) {
				for (short g = 0; g < 4; g++)
				{
					cells[i+g][j + g]->SetForegroundColour(wxColour(255, 20, 20));
				}
				if (cells[i][j]->GetLabel() == 'x') {
					return 1;
				}
				else
					return -1;
			}
		}

	}
	for (unsigned short i = 0; i < 3; i++) {
		for (unsigned short j = 3; j < 7; j++) {
			if (cells[i][j]-> GetLabel()== cells[i + 1][j - 1]-> GetLabel()&&
				cells[i][j]-> GetLabel()== cells[i + 2][j - 2]-> GetLabel()&&
				cells[i][j]-> GetLabel()== cells[i + 3][j - 3]-> GetLabel()&&
				(cells[i][j]-> GetLabel()== 'x' || cells[i][j]-> GetLabel()== 'o')) {
				for (short g = 0; g < 4; g++)
				{
					cells[i+g][j - g]->SetForegroundColour(wxColour(255, 20, 20));
				}
				if (cells[i][j]->GetLabel() == 'x') {
					return 1;
				}
				else
					return -1;
			}
		}
	}
	return 0;
}
bool ConnectFour::isDraw()
{
	short c{ 0 };
	for (short i = 0; i < 6; i++)
	{
		for (short j = 0;  j < 7;  j++)
		{
			if (cells[i][j]->GetLabel() == 'x' || cells[i][j]->GetLabel() == 'o')
			c++;
		}
	}
	return (c > 41 && !isWinner());
}
void ConnectFour::OnInstructions(wxCommandEvent& event)
{
	// You can customize the instructions message here
	wxString instructionsMessage = "Welcome to Connect Four!\n\nInstructions:\n• The game board is a 6x7 grid.\n• Players choose a token (X or O) and take turns dropping tokens from the top of grid.\n• The tokens fall to the lowest available space in the column.\n• The goal is to form a horizontal, vertical, or diagonal line of four tokens of the same mark.\n\nWinning:\n•The first player to connect four discs of their mark wins the game.\n• If the board is full and no player has connected four tokens, the game is a draw.\n-------------------------------------------------------------------------------------\n• You can use keyboard and mouse in Multiplayer mode!";

	// Display instructions in a dialog
	wxMessageDialog dialog(this, instructionsMessage, "Instructions", wxOK | wxCENTRE);
	dialog.ShowModal();
}
void ConnectFour::OnResetBtn(wxCommandEvent& event)
{
	for (short i = 0; i < 6; i++)
	{
		for (short j = 0; j < 7; j++)
		{
			cells[i][j]->Enable();
			cells[i][j]->SetLabel(' ' + to_string(j) + ' ');
			if (i != 0 && j < 8) {
				cells[i][j]->SetForegroundColour(wxColour(255, 255, 255));
			}
			else {
				cells[i][j]->SetForegroundColour(wxColour(195, 195, 195));

			}
		}
	}
		isOver = 0;
		currentPlayerIndex = 0;
		GameStatusAndScore->SetLabel(wallahyZhe2t);
		this->SetFocus();
}
void ConnectFour::endGame()
{
	for (short i = 0; i < 6; i++)
	{
		for (short j = 0; j < 7; j++)
		{
			if (!(cells[i][j]->GetLabel() == 'x' || cells[i][j]->GetLabel() == 'o')) {
				cells[i][j]->SetLabel("   ");
			}
		}
	}
	GameStatusAndScore->SetLabel(GameStatusAndScore->GetLabel() + " - Press Reset To Rematch");
	isOver = true;
}
void ConnectFour::onCellClick(wxCommandEvent& event) {
	wxButton* cell = static_cast<wxButton*>(event.GetEventObject());
	row = (cell->GetId() - 989) / 7;
	col = (cell->GetId() - 989) % 7;
	click();
}
void ConnectFour::click() {
	for (int i = 0; i < 6; ++i) {
		if (cells[i][col]->GetLabel().size() > 1) {
			row = i;
		}
	}
	if (isOver || cells[row][col]->GetLabel() == 'o' || cells[row][col]->GetLabel() == 'x') {
		return;
	}
	cells[row][col]->SetForegroundColour(wxColour(0, 0, 0));

	cells[row][col]->SetLabel(players[currentPlayerIndex]->get_symbol());
	if (isWinner() == 1) {
		GameStatusAndScore->SetLabel(players[0]->getName() + winner);
		endGame();
	}
	else if (isWinner() == -1) {
		GameStatusAndScore->SetLabel(players[1]->getName() + winner);
		endGame();
	}
	if (isDraw()) {
		GameStatusAndScore->SetLabel("                                   Draw!");
		endGame();
	}
	Sleep(240);

	if (players[1]->getName() == "Easy AI" && !isWinner()) {
		ComputerPlay(row, col);
	}
	if (players[1]->getName() == "Random Computer Player" && !isWinner()) {
		ComputerPlay(row, col);
	}
	currentPlayerIndex = (currentPlayerIndex + 1) % 2;
	moves++;
	this->SetFocus();
}
void ConnectFour::OnCharEvent(wxKeyEvent& event) {
	int keycode = event.GetKeyCode();

	// Check if the pressed key is a numeric key (0-9)
	if (keycode >= '0' && keycode <= '9') {
		// Handle numeric key press 
		row = 0;
		col = (keycode-'0');
		click();
	}

	event.Skip(); // Allow default processing for other keys
}
ConnectFour::~ConnectFour()
{
	// Disconnect Events
	ResetBtn->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ConnectFour::OnResetBtn), NULL, this);

	for (short i = 0; i < 6; i++)
	{
		for (short j = 0; j < 7; j++)
		{
			cells[i][j]->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(ConnectFour::onCellClick), NULL, this);
		}

	}

}
////////////////////////////////Pyramic's Methods//////////////////////////////////////