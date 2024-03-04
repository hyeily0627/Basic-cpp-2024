#include <iostream>
using namespace std;

class First
{
public :
	void MyFunc()
	{
		cout << "FristFunc" << endl;
	}
};

class Second : public First
{
public:
	void MyFunc()
	{
		cout << "SecondFunc" << endl;
	}
};

class Third : public Second
{
public:
	void MyFunc()
	{
		cout << "ThirdFunc" << endl;
	}
};

int main(void)
{
	Third* tptr = new Third();
	Second* sptr = tptr;
	First* fptr = sptr;

	/*
	객체포인터 타입을 기준으로 접근 범위가 결정된다.
	오버라이딩 된 경우는 부모 것은 자식 것으로 가려진다. 
	*/

	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();

	tptr->Second:: MyFunc();     //범위를 지정해주면 거기에 해당하는 함수를 가져옴

	delete tptr;
	return 0;
}