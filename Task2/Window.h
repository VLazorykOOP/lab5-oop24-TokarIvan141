#ifndef WINDOW_H
#define WINDOW_H

#include <string>
using namespace std;

class Window {
protected:
    int width;
    int height;

public:
    Window();
    Window(int w, int h);
    virtual ~Window();
    virtual void display() const;
};

#endif
