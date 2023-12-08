#include "GUI_Classes.hpp"
#include <wx/wx.h>
class GameApp : public wxApp {
public:
    virtual bool OnInit() override {
        MainFrame* frame = new MainFrame(nullptr, wxID_ANY, "FCAI Gameshelf",
            wxDefaultPosition, wxSize(1200, 525));
        wxIcon icon("./icon.ico", wxBITMAP_TYPE_ICO);
        PlayersFrame* playersForm = new PlayersFrame(nullptr, wxID_ANY, "Players Setup",
            wxDefaultPosition, wxSize(400, 200));
        frame->SetIcon(icon);
        playersForm->SetIcon(icon);

        playersForm->CentreOnScreen();
        frame->CentreOnScreen();        
        SetTopWindow(frame);
        frame->Show(true);
        playersForm->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(GameApp);