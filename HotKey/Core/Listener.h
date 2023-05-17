#include "conio.h"
#include "MessageQueue.h"
#include "ShortcutManager.h"

class Listener {
private:
	IMessageQueue* messageQueue;
	IShortcutManager* shortcutManager;
public:
	Listener(IMessageQueue* messageQueue, IShortcutManager* shortcutManager);
	void init();
};