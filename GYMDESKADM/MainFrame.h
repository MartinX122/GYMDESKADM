

#ifndef __MAINFRAME_H__
#define __MAINFRAME_H__


#ifndef WX_PRECOMP
	#include "wx/wx.h"
	#include "wx/frame.h"
#else
	#include "wx/wxprec.h"
#endif


class MainFrame : public wxFrame
{

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
	DECLARE_EVENT_TABLE();
	void OnClose(wxCloseEvent& event);
	void CreateGUIControls();

};

#endif