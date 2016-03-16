//
// Created by Minty - Munk on 16-03-2016.
//

#ifndef TESTWXWIDGETS2_TESTWXFRAME_H
#define TESTWXWIDGETS2_TESTWXFRAME_H

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

class TestWxFrame : public wxFrame{
public:
    TestWxFrame(const wxString& title, const wxPoint& pos, const wxSize& size);

private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);

    wxDECLARE_EVENT_TABLE();

    enum{ID_Hello = 1};


};


#endif //TESTWXWIDGETS2_TESTWXFRAME_H
