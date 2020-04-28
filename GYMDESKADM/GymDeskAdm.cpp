
#include "GymDeskAdm.h"

IMPLEMENT_APP(GymDeskAdmApp)

bool GymDeskAdmApp::OnInit()
{

    long language = wxLANGUAGE_SPANISH_MEXICAN;
    wxLocale* locale = new wxLocale();

    if (locale->Init(language/*, wxLOCALE_CONV_ENCODING*/))
        wxMessageBox("Language loaded OK\n");
    else
        wxMessageBox("Language loading failed\n");

    MainFrame*  frame = new MainFrame(NULL);
    SetTopWindow(frame);
    frame->Show();

    return true;

}

int GymDeskAdmApp::OnExit()
{
    return 0;
}