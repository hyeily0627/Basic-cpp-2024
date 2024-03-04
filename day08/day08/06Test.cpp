// �������� ����

#include <iostream>
using namespace std;

class RemoteControl 
{
public:
	virtual void on()
	{
		cout << "remotecontrol" << endl;
	}
};

class SamsungTV : public RemoteControl
{
public:
	virtual void on()					// 7�࿡�� virtual �Լ��� ����Ǿ����� ���� virtual ���� ���� �ʾƵ� �����Լ��� �ȴ�. 
	{
		cout << "�ＺTV on" << endl;
	}
};

class LgTV : public RemoteControl
{
public:
	void on()							// 7�� ���� ����) ���� virtual �Լ� ���� ���ص� ������, �Ἥ �����Լ����� �˸��� ���� ���� .
	{
		cout << "����TV on" << endl;
	}
};

int main()
{
	RemoteControl *remote =new SamsungTV;
	remote->on();
	delete remote; 

	remote = new LgTV;
	remote->on();


	return 0;
}