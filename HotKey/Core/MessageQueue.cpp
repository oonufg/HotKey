#include "MessageQueue.h"

STDMessageQueue::STDMessageQueue() {
	queueRealization = new std::queue<IMessage*>;
}

STDMessageQueue::~STDMessageQueue() {
	delete queueRealization;
	delete messageQueue;
}

void STDMessageQueue::add(IMessage* message) {
	queueRealization->push(message);
}

IMessage* STDMessageQueue::get() {
	IMessage currentMessage = *(queueRealization->front());
	queueRealization->pop();
	return &currentMessage;
}

IMessageQueue* STDMessageQueue::getMessageQueue() {
	if (messageQueue == nullptr) {
		messageQueue = new STDMessageQueue();
	}

	return messageQueue;
}

bool STDMessageQueue::isEmpty() {
	return queueRealization->empty();
}

