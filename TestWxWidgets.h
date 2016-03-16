//
// Created by Minty - Munk on 16-03-2016.
//

#ifndef TESTWXWIDGETS2_TESTWXWIDGETS_H
#define TESTWXWIDGETS2_TESTWXWIDGETS_H

#include <wx/wxprec.h> //Needed by wx

#ifndef WX_PRECOMP  //needed by wx
#include <wx/wx.h>
#endif
class TestWxWidgets : public wxApp{ //: wxApp needed by wx
public:
    virtual bool OnInit();      // std needed by wx
};


#endif //TESTWXWIDGETS2_TESTWXWIDGETS_H
