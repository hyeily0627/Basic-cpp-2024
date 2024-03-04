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
	virtual void MyFunc()					// 7�࿡�� virtual �Լ��� ����Ǿ����� ���� virtual ���� ���� �ʾƵ� �����Լ��� �ȴ�. 
	{
		cout << "SecondFunc" << endl;
	}
};

class Third : public Second
{
public:
	void MyFunc()							// 7�� ���� ����) ���� virtual �Լ� ���� ���ص� ������, �Ἥ �����Լ����� �˸��� ���� ���� .
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