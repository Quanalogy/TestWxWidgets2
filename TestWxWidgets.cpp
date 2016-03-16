//
// Created by Minty - Munk on 16-03-2016.
//

#include "TestWxWidgets.h"
#include "TestWxFrame.h"

bool TestWxWidgets::OnInit() {
    TestWxFrame *welcomeFrame = new TestWxFrame("Hello World!", wxPoint(50,50), wxSize(450,340));
    welcomeFrame->Show(true); // which results in a problem on this line.
    return true;
}
