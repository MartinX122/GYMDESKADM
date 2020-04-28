

#ifndef __MAINFRAME_H__
#define __MAINFRAME_H__


#ifndef WX_PRECOMP
	#include "wx/wx.h"
	#include "wx/frame.h"
#else
	#include "wx/wxprec.h"
#endif

#include "wx/menu.h"

#include "LoginDialog.h"

class MainFrame : public wxFrame
{
DECLARE_EVENT_TABLE();

public:
	MainFrame(
		wxWindow* parent,
		wxWindowID id = 1,
		const wxString& title = wxString::Format(""),
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxDefaultSize,
		long style = wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX);


	virtual ~MainFrame();


private:
	
	void OnClose(wxCloseEvent& event);
	void CreateGUIControls();

	wxMenuBar* MenuBar;

	LoginDialog* DefaultLoginDialog;

};

#endif