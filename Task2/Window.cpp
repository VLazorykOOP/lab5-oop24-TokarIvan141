#include "Window.h"
#include <iostream>
using namespace std;

Window::Window() : width(100), height(100) {
    cout << "Window created (default)" << endl;
}

Window::Window(int w, int h) : width(w), height(h) {
    cout << "Window created (parameterized)" << endl;
}

Window::~Window() {
    cout << "Window destroyed" << endl;
}

void Window::display() const {
    cout << "Window size: " << width << "x" << height << endl;
}
