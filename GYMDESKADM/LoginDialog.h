
#ifndef WX_PRECOMP
	#include "wx/wx.h"
	#include "wx/dialog.h"
#else
	#include "wx/wxprec.h"
#endif

#include "wx/textctrl.h"
#include "wx/button.h"


class LoginDialog : public wxDialog
{
DECLARE_EVENT_TABLE();

public:
	LoginDialog(
		wxWindow* parent, 
		wxWindowID id = 1,
		const wxString& title = wxT("Login"), 
		const wxPoint& pos = wxDefaultPosition, 
		const wxSize& size = wxDefaultSize, 
		long style = wxCAPTION | wxSYSTEM_MENU | wxDIALOG_NO_PARENT | wxMINIMIZE_BOX | wxCLOSE_BOX);

	virtual ~LoginDialog();
	

private:

	void OnClose(wxCloseEvent& event);
	void CreateGUIControls();
	void AceptButtonEvent(wxCommandEvent& event);

	wxTextCtrl* EntryUser;
	wxTextCtrl* EntryPassword;

	wxButton* AceptButton;
	wxButton* CancelButton;

	enum {
		
		ID_ENTRYUSER = 1001,
		ID_ENTRYPASS = 1002,
		ID_ACPTBUTTON = 1003,
		ID_CANCELBUTTON = 1004,
		
		ID_DUMMY_VALUE_ 
	};

};

