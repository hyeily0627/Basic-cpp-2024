#include <iostream>
using namespace std;

class First
{
public:
	virtual void MyFunc()
	{
		cout << "FirstFunc" << endl;
	}
};

class Second : public First
{
public:
	virtual void MyFunc()					// 7행에서 virtual 함수로 선언되었으니 굳이 virtual 선언 하지 않아도 가상함수가 된다. 
	{
		cout << "SecondFunc" << endl;
	}
};

class Third : public Second
{
public:
	void MyFunc()							// 7행 설명 연속) 굳이 virtual 함수 선언 안해도 되지만, 써서 가상함수임을 알리는 것이 좋다 .
	{
		cout << "ThirdFunc" << endl;
	}
};

int main()
{
	Third* tptr = new Third();
	Second* sptr = tptr;
	First* fptr = sptr;

	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();
	delete tptr;
	return 0;
}