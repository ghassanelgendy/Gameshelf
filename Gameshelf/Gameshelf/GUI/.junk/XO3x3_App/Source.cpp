#include "../../Gameshelf/GUI/GUI_Classes.hpp"
#include <wx/wx.h>

class GameApp : public wxApp {
public:
    virtual bool OnInit() override {

        wxIcon icon("./icon.ico", wxBITMAP_TYPE_ICO);

        XO3x3* playersForm = new XO3x3(nullptr, wxID_ANY, "Players Setup",
            wxDefaultPosition, wxSize(400, 200));
        playersForm->SetIcon(icon);

        playersForm->Show(true);
        return true;
    }
    int OnExit() override {

        GameApp().GetTopWindow()->Close();
        return wxApp::OnExit();
    }
};

wxIMPLEMENT_APP(GameApp);