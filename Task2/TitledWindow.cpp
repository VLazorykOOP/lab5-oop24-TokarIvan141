#include "TitledWindow.h"
#include <iostream>
using namespace std;

TitledWindow::TitledWindow() : Window(), title("Untitled") {
    cout << "TitledWindow created (default)" << endl;
}

TitledWindow::TitledWindow(int w, int h, const string& t) : Window(w, h), title(t) {
    cout << "TitledWindow created (parameterized)" << endl;
}

TitledWindow::~TitledWindow() {
    cout << "TitledWindow destroyed" << endl;
}

void TitledWindow::display() const {
    cout << "Title: " << title << endl;
    Window::display();
}
