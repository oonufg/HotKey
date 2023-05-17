#include "Shortcut.h"

IShortcut::IShortcut(Button* buttonList, int keyCount) {
	this->buttonList = buttonList;
	this->keyCount = keyCount;
}

SequenceShortcut::SequenceShortcut(Button* buttonList, int keyCount) : IShortcut(buttonList, keyCount){
}

void SequenceShortcut::execute()  {
	for (int i = 0; i < keyCount; i++) {
		buttonList[i].press();
		buttonList[i].unPress();
	}
}

CombinationShortcut::CombinationShortcut(Button* buttonList, int keyCount) : IShortcut(buttonList, keyCount) {
}

void CombinationShortcut::execute() {
	for (int i = 0; i < keyCount; i++) {
		buttonList[i].press();
	}
	for (int i = 0; i < keyCount; i++) {
		buttonList[i].unPress();
	}
}