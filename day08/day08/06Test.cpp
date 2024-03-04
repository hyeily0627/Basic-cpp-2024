// 다형성의 구현

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
	virtual void on()					// 7행에서 virtual 함수로 선언되었으니 굳이 virtual 선언 하지 않아도 가상함수가 된다. 
	{
		cout << "삼성TV on" << endl;
	}
};

class LgTV : public RemoteControl
{
public:
	void on()							// 7행 설명 연속) 굳이 virtual 함수 선언 안해도 되지만, 써서 가상함수임을 알리는 것이 좋다 .
	{
		cout << "엘지TV on" << endl;
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