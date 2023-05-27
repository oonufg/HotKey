#include "HotKey.h"
#include <iostream>
#include "conio.h"
void threadListen(IListener* listen) {
	listen->mainLoop();
}

void threadExecute(IMessageQueue* queue, IShortcutManager* manage) {

	while (true) {

		if (!queue->isEmpty()) {
			IMessage* currentMessage = queue->get();
			std::cout << currentMessage->getInfo() << std::endl;
			manage->execute(currentMessage->getInfo());
		}
	}
}

int main()
{
	Button* b1 = new Button(VK_CONTROL, "CTRL");
	Button* b2 = new Button(VK_LSHIFT, "SHIFT");
	Button* b3 = new Button(VK_ESCAPE, "ESC");
	std::vector<Button*> buttonList = { b1,b2,b3 };


	IShortcut* cut = new CombinationShortcut(&buttonList);
	IShortcutManager* manager = new ShortcutManager();
	manager->add(113,cut);

	IMessageQueue* messagequeue = new STDMessageQueue();
	
	IListener* listen = new Listener(manager, messagequeue);


	std::thread t1(threadListen,listen);
	std::thread t2(threadExecute, messagequeue,manager);
	t1.join();
	t2.join();

	
}	