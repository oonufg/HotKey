#include "MessageQueue.h"
#include "ShortcutManager.h"

class IListener {
public:
	void virtual registerMessage(int vck) = 0;
	void virtual mainLoop() = 0;
};

class Listener : public IListener {
private:
	IShortcutManager* shortcutManager;
	IMessageQueue* messageQueue;
public:
	Listener(IShortcutManager* shortcutManager, IMessageQueue* messageQueue);
	void registerMessage(int vck) override;
	void mainLoop() override;
};


