class IMessage {
public:
	int virtual getInfo() = 0;
};

class KeyboardMessage : public IMessage {
private:
	int vck;
public:
	KeyboardMessage(int vck);
	int getInfo() override;
};