#include "Message.h"

KeyboardMessage::KeyboardMessage(int vck) {
	this->vck = vck;
}

int KeyboardMessage::getInfo() {
	return this->vck;
}