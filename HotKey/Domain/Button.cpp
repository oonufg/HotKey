#include "Button.h"

Button::Button() {
    virtualKeyCode = -1;
    symbol = "";
}

Button::Button(int virtualKeyCode, const char* symb) {
    virtualKeyCode = virtualKeyCode;
    symbol = symb;

    button = new INPUT;
    ZeroMemory(button, sizeof(INPUT));
    button->type = INPUT_KEYBOARD;
    button->ki.wVk = virtualKeyCode;
}

Button::~Button() {
    delete button;
}
void Button::press() {
    SendInput(1, button, sizeof(INPUT));
}

void Button::unPress() {
    button->ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, button, sizeof(INPUT));
    button->ki.dwFlags = 0;
}

