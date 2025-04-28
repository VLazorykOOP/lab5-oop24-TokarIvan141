#ifndef TITLEDWINDOW_H
#define TITLEDWINDOW_H

#include "Window.h"
using namespace std;

class TitledWindow : public Window {
protected:
    string title;

public:
    TitledWindow();
    TitledWindow(int w, int h, const string& t);
    ~TitledWindow() override;
    void display() const override;
};

#endif
