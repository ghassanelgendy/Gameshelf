// Author: Ghassan Elgendy - Rowan Ammar - Jana Ramadan
// Section: S21
// TA: Rana Abdelkader
// Frames.cpp
#include "../include/Frames.h"
#include "../resource.h"
GUI_Player* players[2];
short clicks{ 0 };
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