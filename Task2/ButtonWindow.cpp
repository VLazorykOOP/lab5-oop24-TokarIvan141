#include "ButtonWindow.h"
#include <iostream>
using namespace std;

ButtonWindow::ButtonWindow() : TitledWindow(), buttonLabel("OK") {
    cout << "ButtonWindow created (default)" << endl;
}

ButtonWindow::ButtonWindow(int w, int h, const string& t, const string& b)
        : TitledWindow(w, h, t), buttonLabel(b) {
    cout << "ButtonWindow created (parameterized)" << endl;
}

ButtonWindow::~ButtonWindow() {
    cout << "ButtonWindow destroyed" << endl;
}

void ButtonWindow::display() const {
    TitledWindow::display();
    cout << "Button: [" << buttonLabel << "]" << endl;
}
