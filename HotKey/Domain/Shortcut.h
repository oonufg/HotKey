#include "Button.h"

class IShortcut {
protected:
	Button** buttonList;
	int keyCount;
public:
	IShortcut(Button** ButtonList,int keyCount);
	virtual void execute() = 0;
};

class SequenceShortcut : public IShortcut {
public:
	SequenceShortcut(Button** buttonList, int keyCount);
	void execute() override;
};

class CombinationShortcut : public IShortcut {
public:
	CombinationShortcut(Button** buttonList, int keyCount);
	void execute() override;
};