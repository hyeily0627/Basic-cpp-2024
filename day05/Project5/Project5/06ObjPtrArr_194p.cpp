#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person()
	{
		name = NULL;
		age = 0;
		cout << "Called Person() " << endl;
	}
	void SetPersonInfo(char* myname, int myage)
	{
		name = myname;
		age = myage;
	}
	void ShowpersonInfo() const
	{
		cout << "�̸� : " << name << ", ";
		cout << "���� : " << age << endl;
	}
	~Person()
	{
		delete[]name;
		cout << "called destructor" << endl;
	}
};

int main()
{
	Person* parr[3];
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++)
	{
		cout << "�̸� : ";
		cin >> namestr;
		cout << "���� : ";
		cin >> age;
		parr[i] = new Person(namestr, age);				//�� ������ ��ü ����
	}

	parr[0]->ShowpersonInfo();							// -> ������(Arrow)�� ����ؼ� �����Ϳ� ���ٽ� ����ϴ� ������
	parr[1]->ShowpersonInfo();
	parr[2]->ShowpersonInfo();
	delete parr[0];
	delete parr[1];
	delete parr[2];
	return 0;

}