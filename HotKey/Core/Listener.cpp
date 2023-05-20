#include "Listener.h"


Listener::Listener(IShortcutManager* shortcutManager, IMessageQueue* messageQueue) {
	this->shortcutManager = shortcutManager;
	this->messageQueue = messageQueue;
}

void Listener::mainLoop() {
	while (true) {
		int button = getch();
		if (shortcutManager->isExist(button)) {
			messageQueue->add(new KeyboardMessage(button));
		}
	}
}

void Listener::registerMessage(int ch) {
	this->messageQueue->add(new KeyboardMessage(ch));
}

