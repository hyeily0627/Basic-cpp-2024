#include <iostream>
#include <cstring>
using namespace std;

class Myclass
{
private:
	char name[30];
	int age;
public:
	Myclass(const char* myname, int myage) : age(myage)
	{
		strcpy(name, myname);
	}
	string Showname() const
	{
		return name; 
	}
	int Showage()
	{
		return age;
	}
};

class MyInfo : public Myclass
{
private:
	char pNumber[20];
public:
	MyInfo(const char* myname, int myage, const char* phoneNumber)
		:Myclass(myname,myage)
	{
		strcpy(pNumber, phoneNumber);
	}
	void printMyInfo()
	{
		cout << "���� �̸��� " << Showname() << "�̰�, ���̴� " << Showage() << "�̸�, ��ȭ��ȣ�� " << pNumber << "�Դϴ�" << endl;
	}
	
};
int main()
{
	MyInfo p1("������", 27, "01076961487");
	p1.printMyInfo();
	return 0;
}