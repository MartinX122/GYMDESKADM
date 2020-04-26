
#include "GymDeskAdm.h"
#include "MainFrame.h"


IMPLEMENT_APP(GymDeskAdmApp)

bool GymDeskAdmApp::OnInit()
{
    MainFrame*  frame = new MainFrame(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;

}

int GymDeskAdmApp::OnExit()
{
    return 0;
}