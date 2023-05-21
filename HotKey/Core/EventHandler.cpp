#include "EventHandler.h"

EventHandler::EventHandler(IMessageQueue* messageQueue, IShortcutManager* shortcutManager) {
	this->messageQueue = messageQueue;
	this->shortcutManager = shortcutManager;
}

void EventHandler::mainLoop() {
	while (true) {
		if (!messageQueue->isEmpty()) {
			IMessage* currentMessage = messageQueue->get();
			shortcutManager->execute(currentMessage->getInfo());
		}
	}
}