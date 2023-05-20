class IMessage {
	void virtual getInfo() = 0;
};

class KeyboardMessage : public IMessage {
private:
	int vck;
public:
	KeyboardMessage(int vck);
	void getInfo() override;
};