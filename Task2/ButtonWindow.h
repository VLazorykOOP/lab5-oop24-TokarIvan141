#ifndef BUTTONWINDOW_H
#define BUTTONWINDOW_H

#include "TitledWindow.h"
using namespace std;

class ButtonWindow : public TitledWindow {
private:
    string buttonLabel;

public:
    ButtonWindow();
    ButtonWindow(int w, int h, const string& t, const string& b);
    ~ButtonWindow() override;
    void display() const override;
};

#endif
