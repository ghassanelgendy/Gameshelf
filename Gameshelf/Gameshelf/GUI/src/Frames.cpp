// Author: Ghassan Elgendy - Rowan Ammar - Jana Ramadan
// Section: S21
// TA: Rana Abdelkader
// GUI CLASSES
#include "../include/Frames.h"
#include "../include/ConnectFourFrame.h"
#include "../resource.h"
GUI_Player* players[2];
short clicks{ 0 };
Player* Players_3ady[2];
short currentPlayerIndex{ 0 };
string winner = " is the winner";
string wallahyZhe2t = "Player 1 VS Player 2";
////////////////////////////////MainFrame's Methods//////////////////////////////////////
MainFrame::MainFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX))
{

	SetCursor(wxCursor(wxT("MOUSE"), wxBITMAP_TYPE_CUR_RESOURCE));
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);
	this->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNTEXT));
	this->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));

	wxGridSizer* MainGridSizer;
	MainGridSizer = new wxGridSizer(1, 4, 2, 0);

	wxGridSizer* SizerAwelLe3ba;
	SizerAwelLe3ba = new wxGridSizer(2, 0, 0, 0);
	SouretXO3x3 = new wxStaticBitmap(this, wxID_ANY, wxBitmap(wxT("THREE"), wxBITMAP_TYPE_RESOURCE), wxDefaultPosition, wxDefaultSize, 0);

	SizerAwelLe3ba->Add(SouretXO3x3, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	XO3x3Btn = new wxButton(this, wxID_ANY, wxT("3x3 XO "), wxDefaultPosition, wxSize(70, 35), 0);
	XO3x3Btn->SetBackgroundColour(wxColour(255, 255, 255));

	SizerAwelLe3ba->Add(XO3x3Btn, 0, wxALIGN_CENTER_HORIZONTAL | wxALIGN_BOTTOM | wxALL, 5);


	MainGridSizer->Add(SizerAwelLe3ba, 1, wxEXPAND, 0);

	wxGridSizer* SizerTanyLe3ba;
	SizerTanyLe3ba = new wxGridSizer(2, 0, 0, 0);
	SouretXO5x5 = new wxStaticBitmap(this, wxID_ANY, wxBitmap(wxT("FIVE"), wxBITMAP_TYPE_RESOURCE), wxDefaultPosition, wxDefaultSize, 0);
	SizerTanyLe3ba->Add(SouretXO5x5, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	XO5x5Btn = new wxButton(this, wxID_ANY, wxT("5x5 XO "), wxDefaultPosition, wxSize(70, 35), 0);
	XO5x5Btn->SetBackgroundColour(wxColour(255, 255, 255));

	SizerTanyLe3ba->Add(XO5x5Btn, 0, wxALIGN_BOTTOM | wxALIGN_CENTER_HORIZONTAL | wxTOP | wxBOTTOM | wxLEFT, 5);


	MainGridSizer->Add(SizerTanyLe3ba, 1, wxEXPAND, 5);

	wxGridSizer* SizerTaletLe3ba;
	SizerTaletLe3ba = new wxGridSizer(2, 0, 0, 0);

	SouretConnectFour = new wxStaticBitmap(this, wxID_ANY, wxBitmap(wxT("CONNECTFOUR"), wxBITMAP_TYPE_RESOURCE), wxDefaultPosition, wxDefaultSize, 0);
	SizerTaletLe3ba->Add(SouretConnectFour, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	ConnectFourBtn = new wxButton(this, wxID_ANY, wxT("Connect Four"), wxDefaultPosition, wxSize(90, 35), 0);
	ConnectFourBtn->SetBackgroundColour(wxColour(255, 255, 255));

	SizerTaletLe3ba->Add(ConnectFourBtn, 0, wxALL | wxALIGN_BOTTOM | wxALIGN_CENTER_HORIZONTAL, 5);


	MainGridSizer->Add(SizerTaletLe3ba, 1, wxEXPAND, 5);

	wxGridSizer* SizerRabe3Le3ba;
	SizerRabe3Le3ba = new wxGridSizer(2, 0, 0, 0);

	SouretXOPyramid = new wxStaticBitmap(this, wxID_ANY, wxBitmap(wxT("PYRAMID"), wxBITMAP_TYPE_RESOURCE), wxDefaultPosition, wxDefaultSize, 0);

	SizerRabe3Le3ba->Add(SouretXOPyramid, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	PyramicXOBtn = new wxButton(this, wxID_ANY, wxT("Pyramic XO"), wxDefaultPosition, wxSize(90, 35), 0);
	PyramicXOBtn->SetBackgroundColour(wxColour(255, 255, 255));

	SizerRabe3Le3ba->Add(PyramicXOBtn, 0, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_BOTTOM, 5);


	MainGridSizer->Add(SizerRabe3Le3ba, 1, wxEXPAND | wxRIGHT, 5);


	this->SetSizer(MainGridSizer);
	this->Layout();
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
	Player1 = new wxMenuItem(Players, wxID_ANY, wxString(wxT("X")), wxEmptyString, wxITEM_NORMAL);
	Players->Append(Player1);

	wxMenuItem* Player2;
	Player2 = new wxMenuItem(Players, wxID_ANY, wxString(wxT("O")), wxEmptyString, wxITEM_NORMAL);
	Players->Append(Player2);

	Players->AppendSeparator();


	wxMenuItem* EditPlayers;
	EditPlayers = new wxMenuItem(Players, wxID_ANY, wxString(wxT("Edit Players")), wxEmptyString, wxITEM_NORMAL);
	Players->Append(EditPlayers);

	MenuBar->Append(Players, wxT("Players"));

	Help = new wxMenu();
	wxMenuItem* SourceCode;
	SourceCode = new wxMenuItem(Help, wxID_ANY, wxString(wxT("Source Code")) + wxT('\t') + wxT("ALT+S"), wxT("See source code"), wxITEM_NORMAL);
	Help->Append(SourceCode);

	wxMenuItem* Credits;
	Credits = new wxMenuItem(Help, wxID_ANY, wxString(wxT("Credits")) + wxT('\t') + wxT("ALT+C"), wxEmptyString, wxITEM_NORMAL);
	Help->Append(Credits);

	wxMenuItem* BugReport;
	BugReport = new wxMenuItem(Help, wxID_ANY, wxString(wxT("Report A Bug")) + wxT('\t') + wxT("ALT+B"), wxT("See source code"), wxITEM_NORMAL);
	Help->Append(BugReport);


	MenuBar->Append(Help, wxT("Help"));

	this->SetMenuBar(MenuBar);


	this->Centre(wxBOTH);

	// Connect Events
	
	this->Connect(wxEVT_SHOW, wxShowEventHandler(MainFrame::MainFrameOnShow));
	SouretXO3x3->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(MainFrame::launch3x3Frame), NULL, this);
	XO3x3Btn->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::launch3x3Frame), NULL, this);
	SouretXO5x5->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(MainFrame::launch5x5Frame), NULL, this);
	XO5x5Btn->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::launch5x5Frame), NULL, this);
	SouretConnectFour->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(MainFrame::launchConnectFourFrame), NULL, this);
	ConnectFourBtn->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::launchConnectFourFrame), NULL, this);
	SouretXOPyramid->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(MainFrame::launchPyramicXOFrame), NULL, this);
	PyramicXOBtn->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::launchPyramicXOFrame), NULL, this);
	Games->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::launch3x3Frame), this, XO3x3->GetId());
	Games->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::launch5x5Frame), this, XO5x5->GetId());
	Games->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::launchConnectFourFrame), this, ConnectFour->GetId());
	Games->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::launchPyramicXOFrame), this, PyramicXO->GetId());
	Players->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::launchPlayersModal), this, EditPlayers->GetId());
	Help->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::openRepoLink), this, SourceCode->GetId());
	Help->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::openBug), this, BugReport->GetId());
	Help->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::launchCreditsFrame), this, Credits->GetId());
	this->Connect(Credits->GetId(), wxEVT_UPDATE_UI, wxUpdateUIEventHandler(MainFrame::CreditsOnUpdateUI));
}
void MainFrame::CreateCredits() {
	Credits* setupPlayersFrame = new Credits(this, wxID_ANY, wxT("Credits"));
	setupPlayersFrame->Show(true);
	setupPlayersFrame->Raise();
}
void MainFrame::CreatePlayerModal() {
	PlayersFrame* setupPlayersFrame = new PlayersFrame(this, wxID_ANY, wxT("Players Setup"));
	setupPlayersFrame->Show(true);
	setupPlayersFrame->Raise();
}
void MainFrame::Create3x3() {
	XO3x3* xo3x3Frame = new XO3x3(this, wxID_ANY, wxT("3x3 Tic Tac Toe"));
	xo3x3Frame->Show(true);
	xo3x3Frame->Raise();
}
void MainFrame::Create5x5()
{
	XO5x5* xo5x5Frame = new XO5x5(this, wxID_ANY, wxT("5x5 Tic Tac Toe"));
	xo5x5Frame->Show(true);
	xo5x5Frame->Raise();
}
void MainFrame::CreateConnect4()
{
	ConnectFour* connect4Frame = new ConnectFour(this, wxID_ANY, wxT("Connect Four"));
	connect4Frame->Show(true);
	connect4Frame->Raise();
}
void MainFrame::CreatePyramic()
{
	PyramicTicTac* PyramicFrame = new PyramicTicTac(this, wxID_ANY, wxT("Pyramic Tic Tac Toe"));
	PyramicFrame->Show(true);
	PyramicFrame->Raise();
}
void MainFrame::MainFrameOnShow(wxShowEvent& event)
{
	CreatePlayerModal();
}
void MainFrame::launchPlayersModal(wxCommandEvent& event)
{
	CreatePlayerModal();
}
MainFrame::~MainFrame()
{
	// Disconnect Events
	this->Disconnect(wxEVT_SHOW, wxShowEventHandler(MainFrame::MainFrameOnShow));
	SouretXO3x3->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(MainFrame::launch3x3Frame), NULL, this);
	XO3x3Btn->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::launch3x3Frame), NULL, this);
	SouretXO5x5->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(MainFrame::launch5x5Frame), NULL, this);
	XO5x5Btn->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::launch5x5Frame), NULL, this);
	SouretConnectFour->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(MainFrame::launchConnectFourFrame), NULL, this);
	ConnectFourBtn->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::launchConnectFourFrame), NULL, this);
	SouretXOPyramid->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(MainFrame::launchPyramicXOFrame), NULL, this);
	PyramicXOBtn->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::launchPyramicXOFrame), NULL, this);
	this->Disconnect(wxID_ANY, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(MainFrame::CreditsOnUpdateUI));

}
////////////////////////////////3x3's Methods//////////////////////////////////////
XO3x3::XO3x3(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	SetCursor(wxCursor(wxT("MOUSE"), wxBITMAP_TYPE_CUR_RESOURCE));

	wxIcon icon("ICONAYA", wxBITMAP_TYPE_ICO_RESOURCE);
	this->SetIcon(icon);
	moves =  0 ;
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
				GameStatusAndScore->SetLabel(  players[0]->getName() + winner);
			}
			else {
				GameStatusAndScore->SetLabel(  players[1]->getName() + winner);
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
				GameStatusAndScore->SetLabel(  players[0]->getName() + winner);
			}
			else {
				GameStatusAndScore->SetLabel(  players[1]->getName() + winner);
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
			GameStatusAndScore->SetLabel(  players[0]->getName() + winner);
		}
		else {
			GameStatusAndScore->SetLabel(  players[1]->getName() + winner);

		}
		isOver = true;
		return;
	}

	if (cells[0][2]->GetLabel() != "" &&
		cells[0][2]->GetLabel() == cells[1][1]->GetLabel() &&
		cells[0][2]->GetLabel() == cells[2][0]->GetLabel()) {
		if (cells[0][2]->GetLabel() == players[0]->get_symbol()) {
			GameStatusAndScore->SetLabel( players[0]->getName() + winner);
		}
		else {
			GameStatusAndScore->SetLabel( players[1]->getName() + winner);

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
	// You can customize the instructions message here
	wxString instructionsMessage = "Welcome to Tic Tac Toe!\n\nInstructions:\n� The game board is a 3x3 grid.\n� Players choose a token (X or O) and take turns placing tokens on the grid.\n� The goal is to form a horizontal, vertical, or diagonal line of three tokens of the same mark.\n\nWinning:\n�The first player to connect three discs of their mark wins the game.\n� If the board is full and no player has connected three tokens, the game is a draw.";

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
////////////////////////////////Pyramic's Methods//////////////////////////////////////
PyramicTicTac::PyramicTicTac(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX))
{
	SetCursor(wxCursor(wxT("MOUSE"), wxBITMAP_TYPE_CUR_RESOURCE));

	wxIcon icon("ICONAYA", wxBITMAP_TYPE_ICO_RESOURCE);
	this->SetIcon(icon);
	this->SetSizeHints(350,425);
	this->SetBackgroundColour(wxColour(1, 68, 33));

	MenuBar = new wxMenuBar(0);


	Help = new wxMenu();
	wxMenuItem* Instructions;
	Instructions = new wxMenuItem(Help, wxID_ANY, wxString(wxT("Instructions")) + wxT('\t') + wxT("ALT+I"), wxEmptyString, wxITEM_NORMAL);
	Help->Append(Instructions);
	
	MenuBar->Append(Help, wxT("Help"));

	this->SetMenuBar(MenuBar);

	resetButton = new wxButton(this, wxID_ANY, wxT("Reset"));
	resetButton->SetBackgroundColour(wxColour(255, 255, 255));
	resetButton->SetSize(wxSize(5, 30));
	resetButton->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &PyramicTicTac::ResetButton, this);
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	for (int i = 0; i < 9; i++)
	{
		buttons[i] = new wxButton(this, 1000 + i, "");
		buttons[i]->Bind(wxEVT_LEFT_DOWN, wxCommandEventHandler(PyramicTicTac::OnButtonClicked), this);

		buttons[i]->SetMinSize(wxSize(80, 80));

		buttons[i]->SetBackgroundColour(wxColour(255, 255, 255));

		// Set font size for "X" and "O"
		buttons[i]->SetFont(wxFont(24, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Aharoni")));
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
	main_sizer->Add(resetButton, 0, wxALIGN_RIGHT | wxALL, 5);
	main_sizer->Add(row1, 2, wxALIGN_CENTER | wxALL, 3);
	main_sizer->Add(row2, 2, wxALIGN_CENTER | wxALL, 3);
	main_sizer->Add(row3, 2, wxALIGN_CENTER | wxALL, 3);



	GameStatusAndScore = new wxStaticText(this, wxID_ANY, wallahyZhe2t, wxDefaultPosition, wxDefaultSize, 0);
	GameStatusAndScore->Wrap(-1);
	GameStatusAndScore->SetFont(wxFont(12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Aharoni")));
	GameStatusAndScore->SetForegroundColour(wxColour(255, 255, 255));
	GameStatusAndScore->SetBackgroundColour(wxColour(1, 68, 33));

	main_sizer->Add(GameStatusAndScore, 2, wxALIGN_CENTER | wxALL, 5);
	


	SetSizer(main_sizer);




	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	main_sizer->Layout();
	this->Layout();
	this->Centre(wxBOTH);




	// Connect Events
	Help->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(PyramicTicTac::OnInstructions),this, Instructions->GetId());
	
	
}
void PyramicTicTac::OnInstructions(wxCommandEvent& event)
{
	// You can customize the instructions message here
	wxString instructionsMessage = "Welcome to Pyramic Tic Tac Toe!\n\n"
		"Instructions:\n"
		"� The game board is shaped like a pyramid. \n� Five squares make the base, then three, then one. \n� Players take turns marking Xs and Os as in traditional tic - tac - toe.\n"
		"Winning:\n� The first player to get three - in - a - row vertically, horizontally, or diagonally wins\n";

	// Display instructions in a dialog
	wxMessageDialog dialog(this, instructionsMessage, "Instructions", wxOK | wxCENTRE);
	dialog.ShowModal();
}
void PyramicTicTac::rand_comp_move()
{
	int randomIndex = rand() % 9;
	while (board[randomIndex] != 0)
	{
		randomIndex = rand() % 9;
	}
	board[randomIndex] = -1;
	buttons[randomIndex]->SetLabel("o");

	turn = -turn;

	if (is_winner(turn))
	{
		if (turn == 1)
		{
			GameStatusAndScore->SetLabel(players[0]->getName() + winner);

		}

		else
		{
			GameStatusAndScore->SetLabel(players[1]->getName() + winner);
		}

		for (int i = 0; i < 9; i++)
		{
			buttons[i]->Disable();
		}
		return;
	}
	if (is_draw())
	{
		GameStatusAndScore->SetLabel("                                   Draw!");
		for (int i = 0; i < 9; i++)
		{
			buttons[i]->Disable();
		}
		return;
	}
}
void PyramicTicTac::smart_comp_move()
{
	for (int i = 0; i < 9; i++)
	{
		if (board[i] == 0) 
		{
			board[i] = -1; 
			if (is_winner(-1)) 
			{
				buttons[i]->SetLabel("o");
				turn = -turn;
				GameStatusAndScore->SetLabel(players[1]->getName() + winner);
				for (int j = 0; j < 9; j++)
				{
					buttons[j]->Disable();
				}
				return;
			}
			board[i] = 0;
		}
	}

	for (int i = 0; i < 9; i++)
	{
		if (board[i] == 0)
		{
			board[i] = 1; 
			if (is_winner(1)) 
			{
				board[i] = -1; 
				buttons[i]->SetLabel("o");
				turn = -turn;
				return;
			}
			board[i] = 0; 
		}
	}

	rand_comp_move();
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
		return;
	}
	if (turn == 1)
	{
		board[index] = 1;
		buttons[index]->SetLabel("x");
	}
	else                                                                                                              
	{
		
			board[index] = -1;
			buttons[index]->SetLabel("o");

	}

	if (is_winner(turn))
	{
		if (turn == 1)
		{
			GameStatusAndScore->SetLabel(players[0]->getName() + winner);

		}

		else
		{
			GameStatusAndScore->SetLabel(players[1]->getName() + winner);
		}

		for (int i = 0; i < 9; i++)
		{
			buttons[i]->Disable();
		}
		return;
	}
	if (is_draw())
	{
		GameStatusAndScore->SetLabel("                                   Draw!");
		for (int i = 0; i < 9; i++)
		{
			buttons[i]->Disable();
		}
		return;
	}	
	if ((players[1]->getName()) == "Random Computer Player") {
		Sleep(290);
		rand_comp_move();
		
	}

	if (players[1]->getName() == "Easy AI") {
		Sleep(290);
		smart_comp_move();
		
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
void PyramicTicTac::ResetButton(wxCommandEvent& event)
{
	for (int i = 0; i < 9; i++)
	{
		board[i] = 0;
		buttons[i]->SetLabel("");
		buttons[i]->Enable();
	}
	turn = 1;

	GameStatusAndScore->SetLabel(wallahyZhe2t);
	  
}
void PyramicTicTac::Reset()
{
	
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
}
////////////////////////////////5x5's Methods//////////////////////////////////////
XO5x5::XO5x5(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	SetCursor(wxCursor(wxT("MOUSE"), wxBITMAP_TYPE_CUR_RESOURCE));

	wxIcon icon("ICONAYA", wxBITMAP_TYPE_ICO_RESOURCE);
	this->SetIcon(icon);
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);
	this->SetBackgroundColour(wxColour(54, 180, 248));

	wxGridSizer* boardContainer;
	boardContainer = new wxGridSizer(6, 5, 0, 0);

	CellNo25 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo25->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo25, 0, wxEXPAND, 5);

	CellNo24 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo24->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo24, 0, wxEXPAND, 5);

	CellNo23 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo23->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo23, 0, wxEXPAND, 5);

	CellNo22 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo22->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo22, 0, wxEXPAND, 5);

	CellNo20 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo20->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo20, 0, wxEXPAND, 5);

	CellNo21 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo21->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo21, 0, wxEXPAND, 5);

	CellNo19 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo19->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo19, 0, wxEXPAND, 5);

	CellNo18 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo18->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo18, 0, wxEXPAND, 5);

	CellNo16 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo16->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo16, 0, wxEXPAND, 5);

	CellNo17 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo17->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo17, 0, wxEXPAND, 5);

	CellNo15 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo15->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo15, 0, wxEXPAND, 5);

	CellNo14 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo14->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo14, 0, wxEXPAND, 5);

	CellNo13 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo13->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo13, 0, wxEXPAND, 5);

	CellNo12 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo12->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo12, 0, wxEXPAND, 5);

	CellNo11 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo11->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo11, 0, wxEXPAND, 5);

	CellNo10 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo10->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo10, 0, wxEXPAND, 5);

	CellNo9 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo9->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo9, 0, wxEXPAND, 5);

	CellNo7 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo7->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo7, 0, wxEXPAND, 5);

	CellNo8 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo8->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo8, 0, wxEXPAND, 5);

	CellNo5 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo5->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo5, 0, wxEXPAND, 5);

	CellNo6 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo6->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo6, 0, wxEXPAND, 5);

	CellNo3 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo3->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo3, 0, wxEXPAND, 5);

	CellNo4 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo4->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo4, 0, wxEXPAND, 5);

	CellNo2 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo2->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo2, 0, wxEXPAND, 5);

	CellNo1 = new wxToggleButton(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	CellNo1->SetBackgroundColour(wxColour(255, 255, 255));

	boardContainer->Add(CellNo1, 0, wxEXPAND, 5);


	boardContainer->Add(0, 0, 1, wxEXPAND, 5);


	boardContainer->Add(0, 0, 1, wxEXPAND, 5);

	GameStatusAndScore = new wxStaticText(this, wxID_ANY, wallahyZhe2t, wxDefaultPosition, wxDefaultSize, 0);
	GameStatusAndScore->Wrap(-1);
	GameStatusAndScore->SetFont(wxFont(12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Aharoni")));
	GameStatusAndScore->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BACKGROUND));
	GameStatusAndScore->SetBackgroundColour(wxColour(50, 180, 248));

	boardContainer->Add(GameStatusAndScore, 0, wxALIGN_CENTER_HORIZONTAL | wxALL | wxALIGN_CENTER_VERTICAL, 5);


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
	CellNo1->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler(XO5x5::onCellClick), NULL, this);
}
XO5x5::~XO5x5()
{
	// Disconnect Events
	CellNo1->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler(XO5x5::onCellClick), NULL, this);

}
////////////////////////////////Credits's Methods//////////////////////////////////////
Credits::Credits(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	wxIcon icon("ICONAYA", wxBITMAP_TYPE_ICO_RESOURCE);
	this->SetIcon(icon);
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);
	this->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));

	wxFlexGridSizer* SwarnaSizer;
	SwarnaSizer = new wxFlexGridSizer(3, 1, 0, 0);
	SwarnaSizer->SetFlexibleDirection(wxBOTH);
	SwarnaSizer->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

	SwarnaSizer->SetMinSize(wxSize(200, 200));
	wxGridSizer* sizerLinks;
	sizerLinks = new wxGridSizer(0, 3, 0, 0);

	linkGhassan = new wxHyperlinkCtrl(this, wxID_ANY, wxT("Ghassan Elgendy"), wxT("github.com/ghassanelgendy"), wxDefaultPosition, wxDefaultSize, wxHL_DEFAULT_STYLE);
	linkGhassan->SetMinSize(wxSize(-1, 20));
	linkGhassan->SetMaxSize(wxSize(-1, 20));

	sizerLinks->Add(linkGhassan, 0, wxALIGN_CENTER_VERTICAL | wxTOP | wxALIGN_CENTER_HORIZONTAL, 5);

	linRowan = new wxHyperlinkCtrl(this, wxID_ANY, wxT("Rowan Ehab"), wxT("github.com/rowanammar"), wxDefaultPosition, wxDefaultSize, wxHL_DEFAULT_STYLE);
	linRowan->SetMinSize(wxSize(-1, 20));
	linRowan->SetMaxSize(wxSize(-1, 20));

	sizerLinks->Add(linRowan, 0, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxTOP, 5);

	linkJana = new wxHyperlinkCtrl(this, wxID_ANY, wxT("Jana Ramadan"), wxT("github.com/janaramadan"), wxDefaultPosition, wxDefaultSize, wxHL_DEFAULT_STYLE);
	linkJana->SetMinSize(wxSize(-1, 20));
	linkJana->SetMaxSize(wxSize(-1, 20));

	sizerLinks->Add(linkJana, 0, wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL | wxTOP, 5);


	SwarnaSizer->Add(sizerLinks, 1, wxEXPAND, 5);

	wxWrapSizer* sizerPics;
	sizerPics = new wxWrapSizer(wxVERTICAL, wxWRAPSIZER_DEFAULT_FLAGS);
	GhassanPic = new wxStaticBitmap(this, wxID_ANY, wxBitmap(wxT("GHASSAN"), wxBITMAP_TYPE_RESOURCE), wxDefaultPosition, wxDefaultSize, 0);

	GhassanPic->SetMaxSize(wxSize(200, 200));


	sizerPics->Add(GhassanPic, 0, wxALL | wxALIGN_CENTER_VERTICAL | wxALIGN_CENTER_HORIZONTAL, 5);
	RowanPic = new wxStaticBitmap(this, wxID_ANY, wxBitmap(wxT("RUE"), wxBITMAP_TYPE_RESOURCE), wxDefaultPosition, wxDefaultSize, 0);

	RowanPic->SetMaxSize(wxSize(200, 200));

	sizerPics->Add(RowanPic, 0, wxALL | wxALIGN_CENTER_VERTICAL | wxALIGN_CENTER_HORIZONTAL, 5);

	JanaPic = new wxStaticBitmap(this, wxID_ANY, wxBitmap(wxT("JANA"), wxBITMAP_TYPE_RESOURCE), wxDefaultPosition, wxDefaultSize, 0);

	JanaPic->SetMaxSize(wxSize(200, 200));

	sizerPics->Add(JanaPic, 0, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL, 5);


	SwarnaSizer->Add(sizerPics, 1, wxEXPAND, 5);

	CreditsStaticText = new wxStaticText(this, wxID_ANY, wxT("This Project Was made possible in FCAI - CU\nUnder the supervision of Prof. Mohamed Elramly and Eng. Rana Abdelkader \nas part of Assignment 3 in CS213 class."), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL);
	CreditsStaticText->Wrap(2);
	CreditsStaticText->SetMinSize(wxSize(-1, 50));

	SwarnaSizer->Add(CreditsStaticText, 0, wxALIGN_BOTTOM | wxALIGN_CENTER_HORIZONTAL | wxTOP | wxRIGHT | wxLEFT, 5);


	this->SetSizer(SwarnaSizer);
	this->Layout();

	this->Centre(wxBOTH);

	// Connect Events
	GhassanPic->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(Credits::openLinkGhassan), NULL, this);
	RowanPic->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(Credits::openLinkRowan), NULL, this);
	JanaPic->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(Credits::openLinkJana), NULL, this);
}
Credits::~Credits()
{
	// Disconnect Events
	GhassanPic->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(Credits::openLinkGhassan), NULL, this);
	RowanPic->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(Credits::openLinkRowan), NULL, this);
	JanaPic->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(Credits::openLinkJana), NULL, this);

}
////////////////////////////////PlayersFrame's Methods//////////////////////////////////////
PlayersFrame::PlayersFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
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
	playersSizer->Add( playerTowField, 0, wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	playersSizer->Add(0, 0, 0, wxEXPAND, 5);

	aiBtn = new wxRadioButton( this, 554, wxT("AI"), wxDefaultPosition, wxDefaultSize, 0 );
	playersSizer->Add( aiBtn, 0, wxBOTTOM | wxRIGHT | wxLEFT | wxTOP, 5 );

	computerBtn = new wxRadioButton( this, 568, wxT("Computer"), wxDefaultPosition, wxDefaultSize, 0 );
	playersSizer->Add( computerBtn, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	computerBtn->Bind(wxEVT_RIGHT_DOWN, &PlayersFrame::OnRadioRightClick, this);
	computerBtn->Bind(wxEVT_LEFT_DOWN, &PlayersFrame::OnRadioLeftClick, this);
	aiBtn->Bind(wxEVT_RIGHT_DOWN, &PlayersFrame::OnRadioRightClick, this);
	aiBtn->Bind(wxEVT_LEFT_DOWN, &PlayersFrame::OnRadioLeftClick, this);
	playersSizer->Add( 0, 0, 0, wxEXPAND, 5 );


	doneBtn = new wxButton( this, wxID_ANY, wxT("Done"), wxDefaultPosition, wxDefaultSize, 0 );
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
	whoVSwho->SetLabel(wallahyZhe2t);
	playersSizer->Add( whoVSwho, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );


	this->SetSizer( playersSizer );
	this->Layout();
	wxIcon icon("ICONAYA", wxBITMAP_TYPE_ICO_RESOURCE);
	this->SetIcon(icon);
	this->Centre( wxBOTH );
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCommandEventHandler(PlayersFrame::doneBtnOnButtonClick));
	doneBtn->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PlayersFrame::doneBtnOnButtonClick), NULL, this);
	cancelBtn->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PlayersFrame::cancelBtnOnButtonClick ), NULL, this );
}
void PlayersFrame::OnRadioRightClick(wxMouseEvent& event)
{
	playerTowField->Enable();
	playerTowField->SetLabel("");
	computerBtn->SetValue(0);
	aiBtn->SetValue(0);

}
void PlayersFrame::OnRadioLeftClick(wxMouseEvent& event)
{
	wxRadioButton* button = wxDynamicCast(event.GetEventObject(), wxRadioButton);
	clicks++;
	if (clicks > 3) {
		whoVSwho->SetLabel("Right Click To Discard");
		whoVSwho->SetForegroundColour(wxColour(255, 0, 0));
	}
	if (button->GetLabel() == "AI") {
		playerTowField->Disable();
		playerTowField->SetLabel("Easy AI");
		computerBtn->SetValue(0);
		aiBtn->SetValue(1);
		computerBtn->SetValue(0);

	}
	else {
		playerTowField->Disable();
		playerTowField->SetLabel("Computer");
		computerBtn->SetValue(1);
		aiBtn->SetValue(0);

	}
	event.Skip();
}
void PlayersFrame::doneBtnOnButtonClick(wxCommandEvent& event)
{
	clicks = 0;
	players[0] = new GUI_Player(1, 'x');
	if (playerOneField->GetValue() != "") {
		players[0]->setName(playerOneField->GetValue().ToStdString());
	}
	else
		players[0]->setName("Player 1");
	if (!computerBtn->GetValue()) {
		players[1] = new GUI_Player(2, 'o');
		if (playerTowField->GetValue() != "") {
			players[1]->setName(playerTowField->GetValue().ToStdString());
		}
		else
			players[1]->setName("Player 2");

	}
	else {

		players[1] = new GUI_RandomPlayer('o', 3);
	}

	wallahyZhe2t = players[0]->getName() + " (X) " + " VS " + players[1]->getName() + " (O) ";
	whoVSwho->SetLabel(wallahyZhe2t);
	Destroy();
}
PlayersFrame::~PlayersFrame()
{
	// Disconnect Events
	
	doneBtn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PlayersFrame::doneBtnOnButtonClick ), NULL, this );
	cancelBtn->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PlayersFrame::cancelBtnOnButtonClick ), NULL, this );

}
////////////////////////////////GUI Player's Methods//////////////////////////////////////
GUI_Player::GUI_Player(char symbol) {
	this->symbol = symbol;
}
GUI_Player::GUI_Player(int order, char symbol) {
	cout << "Welcome player " << order << endl;
	cout << "Please enter your name: ";
	cin >> name;
	this->symbol = symbol;
}
string GUI_Player::getName()
{
	return name;
}
void GUI_Player::setName(string n)
{
	name = n;
}
GUI_Player::GUI_Player()
{
}
void GUI_Player::get_move(int& x, int& y) {
	cout << "\nPlease enter your move x and y separated by spaces: ";
	cin >> x >> y;
}
string GUI_Player::to_string() {
	return name;
}
char GUI_Player::get_symbol() {
	return symbol;
}
GUI_RandomPlayer::GUI_RandomPlayer(char symbol, int dimension) :GUI_Player(symbol)
{
	this->dimension = dimension;
	this->name = "Random Computer Player";
}
void GUI_RandomPlayer::get_move(int& x, int& y)
{
}
