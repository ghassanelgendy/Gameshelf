#include "../include/Frames.h"
#include <wx/wx.h>

class GameApp : public wxApp {
public:
    virtual bool OnInit() override {
        wxIcon icon("ICONAYA", wxBITMAP_TYPE_ICO_RESOURCE);

       // wxIcon icon("./icon.ico", wxBITMAP_TYPE_ICO);
        MainFrame* mainFrame = new MainFrame(nullptr, wxID_ANY, "FCAI Gameshelf",
            wxDefaultPosition);
        mainFrame->SetIcon(icon);
        mainFrame->Show(true);
        return true;
    }
    int OnExit() override {
        GameApp().GetTopWindow()->Close();
        return wxApp::OnExit();
    }
};

wxIMPLEMENT_APP(GameApp);