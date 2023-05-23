#include "Listener.h"
#include "conio.h"

Listener::Listener(IShortcutManager* shortcutManager, IMessageQueue* messageQueue) {
	this->shortcutManager = shortcutManager;
	this->messageQueue = messageQueue;
}

void Listener::mainLoop() {
	while (true) {
		int button = getch();
		printf("%d", button);
		if (shortcutManager->isExist(button)) {
			messageQueue->add(new KeyboardMessage(button));
			printf("Ok");
		}
	}
}

void Listener::registerMessage(int ch) {
	this->messageQueue->add(new KeyboardMessage(ch));
}

