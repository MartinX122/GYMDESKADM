#include "MainFrame.h"

BEGIN_EVENT_TABLE(MainFrame, wxFrame)	
	EVT_CLOSE(MainFrame::OnClose)
END_EVENT_TABLE()


MainFrame::MainFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	CreateGUIControls();

	this->DefaultLoginDialog = new LoginDialog(NULL);
	this->DefaultLoginDialog->ShowModal();

}

MainFrame::~MainFrame()
{
}

void MainFrame::CreateGUIControls()
{
	this->MenuBar = new wxMenuBar();

	this->SetMenuBar(this->MenuBar);
	this->SetTitle(wxString(""));
	this->SetIcon(wxNullIcon);
	this->SetSize(8, 8, 800, 640);
	this->Center();
	this->SetBackgroundColour(wxColour(*wxWHITE));
	
}

void MainFrame::OnClose(wxCloseEvent& event)
{
	this->Destroy();
}
