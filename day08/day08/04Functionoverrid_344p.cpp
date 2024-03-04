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
	��ü������ Ÿ���� �������� ���� ������ �����ȴ�.
	�������̵� �� ���� �θ� ���� �ڽ� ������ ��������. 
	*/

	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();

	tptr->Second:: MyFunc();     //������ �������ָ� �ű⿡ �ش��ϴ� �Լ��� ������

	delete tptr;
	return 0;
}