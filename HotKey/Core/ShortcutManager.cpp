#include "ShortcutManager.h"

ShortcutManager::ShortcutManager() {
	this->shortcuts = new std::map<int, IShortcut*>;

}

void ShortcutManager::add(int ch, IShortcut* shortcut) {
	this->shortcuts->insert({ ch,shortcut });
}

void ShortcutManager::execute(int ch) {
	this->shortcuts->at(ch)->execute();
}

bool ShortcutManager::isExist(int ch) {
	return this->shortcuts->contains(ch);
}
