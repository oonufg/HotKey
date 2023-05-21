#include "MessageQueue.h"
#include "ShortcutManager.h"

class IEventHandler {
public:
	virtual void mainLoop() = 0;
};

class EventHandler : public IEventHandler {
private:
	IMessageQueue* messageQueue;
	IShortcutManager* shortcutManager;
public:
	EventHandler(IMessageQueue* messageQueue, IShortcutManager* shortcutManager);
	void mainLoop() override;
};