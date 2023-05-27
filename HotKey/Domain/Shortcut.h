#include "Button.h"
#include <string>
#include <vector>

class IShortcut {
public:
	virtual void execute() = 0;
};

class SequenceShortcut : public IShortcut {
protected:
	std::vector<Button*>* buttonList;
public:
	SequenceShortcut(std::vector<Button*>* buttonList);
	void execute() override;
};

class CombinationShortcut : public IShortcut {
protected:
	std::vector<Button*>* buttonList;
public:
	CombinationShortcut(std::vector<Button*>* buttonList);
	void execute() override;
};

class ProgramShortcut : IShortcut {
protected:
	std::string* programPath;
public:
	ProgramShortcut(std::string* programPath);
	void execute() override;
};