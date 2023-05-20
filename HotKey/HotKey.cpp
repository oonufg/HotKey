#include "HotKey.h"

int main()
{
	std::map<int, IShortcut*> shortcuts;
	Button b1(VK_CONTROL, "CTRL");
	Button b2(VK_LSHIFT, "SHIFT");
	Button b3(VK_ESCAPE, "ESC");
	Button buttonList[3] = { b1,b2,b3 };


	IShortcut* cut = new CombinationShortcut(buttonList, 3);

	shortcuts[99] = cut;

	
	while (true) {
		int ch = getch();
		if (shortcuts.contains(ch)) {
			shortcuts[ch]->execute();
			
		}
	}
}	