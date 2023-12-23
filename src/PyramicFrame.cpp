// Author: Rawan Ehab
// TA: Rana Abdelkader
// Section S21
#include "../include/Frames.h"
#include "../resource.h"
////////////////////////////////Pyramic's Methods//////////////////////////////////////
PyramicTicTac::PyramicTicTac(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX))
{
	SetCursor(wxCursor(wxT("MOUSE"), wxBITMAP_TYPE_CUR_RESOURCE));

	wxIcon icon("ICONAYA", wxBITMAP_TYPE_ICO_RESOURCE);
	this->SetIcon(icon);
	this->SetSizeHints(350, 425);
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
	Help->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(PyramicTicTac::OnInstructions), this, Instructions->GetId());
}
void PyramicTicTac::OnInstructions(wxCommandEvent& event)
{
	// You can customize the instructions message here
	wxString instructionsMessage = "Welcome to Pyramic Tic Tac Toe!\n\n"
		"Instructions:\n"
		"• The game board is shaped like a pyramid. \n• Five squares make the base, then three, then one. \n• Players take turns marking Xs and Os as in traditional tic - tac - toe.\n"
		"Winning:\n• The first player to get three - in - a - row vertically, horizontally, or diagonally wins\n";

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