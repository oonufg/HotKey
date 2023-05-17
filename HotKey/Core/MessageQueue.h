#include "Message.h"
#include <queue>

class IMessageQueue {
public:
	virtual void add(IMessage* message) = 0;
	virtual IMessage* get() = 0;
	virtual bool isEmpty() = 0;
	virtual IMessageQueue* getMessageQueue()  = 0;
};

class STDMessageQueue : public IMessageQueue{
private:
	IMessageQueue* messageQueue = nullptr;
	std::queue<IMessage*>* queueRealization;
	STDMessageQueue();

public:
	~STDMessageQueue();
	void add(IMessage* message) override;
	IMessage* get() override;
	IMessageQueue* getMessageQueue() override;
	bool isEmpty() override;
};