#include <map>
#include "../Domain/Shortcut.h"
class IShortcutManager {
public:
	void virtual add(int ch, IShortcut* shortcut) = 0;
	void virtual execute(int ch) = 0;
	bool virtual isExist(int ch) = 0;
};

class ShortcutManager : public IShortcutManager{
private:
	std::map<int, IShortcut*>* shortcuts;
public:
	ShortcutManager();
	void add(int ch, IShortcut* shortcut) override;
	void execute(int ch) override;
	bool isExist(int ch) override;

};