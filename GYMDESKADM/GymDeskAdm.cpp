
#include "GymDeskAdm.h"

IMPLEMENT_APP(GymDeskAdmApp)

bool GymDeskAdmApp::OnInit()
{

    long language = wxLANGUAGE_SPANISH_MEXICAN;
    wxLocale* locale = new wxLocale();

    /*
    wxString testDBName = wxGetCwd() + wxS("/test2.db");
    wxMessageBox(testDBName);

    if (locale->Init(language/*, wxLOCALE_CONV_ENCODING* /))
        wxMessageBox("Language loaded OK\n");
    else
        wxMessageBox("Language loading failed\n");*/


    const wxString dbFileTest = wxGetCwd() + wxS("\\test.db");

   // wxMessageBox(dbFileTest);

    MainFrame*  frame = new MainFrame(NULL);

    this->SetTopWindow(frame);

    frame->SetLocale(locale);

    frame->Show();

    return true;

}

int GymDeskAdmApp::OnExit()
{
    return 0;
}