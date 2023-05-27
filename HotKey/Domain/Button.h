#include "windows.h"


class Button {
private:
    INPUT* button;
    int virtualKeyCode;
    const char* symbol;
public:
    Button();
    Button(int vkc, const char* symb);
    ~Button();
    void press();
    void unPress();
};