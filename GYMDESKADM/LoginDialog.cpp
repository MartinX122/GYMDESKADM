#include "LoginDialog.h"

BEGIN_EVENT_TABLE(LoginDialog, wxDialog)
	EVT_CLOSE(LoginDialog::OnClose)
	EVT_BUTTON(LoginDialog::ID_ACPTBUTTON, LoginDialog::AceptButtonEvent)
END_EVENT_TABLE()

LoginDialog::LoginDialog(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent,id,title,pos,size,style)
{
	this->CreateGUIControls();
}

LoginDialog::~LoginDialog()
{
}

void LoginDialog::OnClose(wxCloseEvent& event)
{
	this->Destroy();
}

void LoginDialog::CreateGUIControls()
{

	this->EntryUser = new wxTextCtrl(this, this->ID_ENTRYUSER, wxEmptyString, wxPoint(130, 75), wxSize(245, 20), 0, wxDefaultValidator, wxString("EntryUser"));
	this->EntryPassword = new wxTextCtrl(this, this->ID_ENTRYPASS, wxEmptyString, wxPoint(130, 125), wxSize(245, 20),wxTE_PASSWORD ,wxDefaultValidator, wxString("EntryPassword"));

	
	this->CancelButton = new wxButton(this, this->ID_CANCELBUTTON,wxString("Cancelar"), wxPoint(130, 250) , wxSize(120, 25), 0, wxDefaultValidator, wxString("CancelButton"));
	this->AceptButton = new wxButton(this, this->ID_ACPTBUTTON, wxString("Aceptar"), wxPoint(255, 250), wxSize(120, 25), 0, wxDefaultValidator, wxString("AceptButton"));

	this->SetTitle(_("Login"));
	this->SetIcon(wxNullIcon);
	this->SetSize(8, 8, 400, 320);
	this->Center();
}

void LoginDialog::AceptButtonEvent(wxCommandEvent& event)
{
	

}
