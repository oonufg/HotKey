#include "Shortcut.h"

SequenceShortcut::SequenceShortcut(std::vector<Button*>* buttonList) {

	this->buttonList = buttonList;
}



void SequenceShortcut::execute()  {
	for (int i = 0; i < this->buttonList->size(); i++) {
		this->buttonList->at(i)->press();
		this->buttonList->at(i)->unPress();
	}
}

CombinationShortcut::CombinationShortcut(std::vector<Button*>* buttonList) {

	this->buttonList = buttonList;
}

void CombinationShortcut::execute() {
	for (int i = 0; i < this->buttonList->size(); i++) {
		this->buttonList->at(i)->press();

	}
	for (int i = 0; i < this->buttonList->size(); i++) {
		this->buttonList->at(i)->unPress();

	}
}

ProgramShortcut::ProgramShortcut(std::string* programPath) {
	this->programPath = programPath;
}

void ProgramShortcut::execute() {
	;
}