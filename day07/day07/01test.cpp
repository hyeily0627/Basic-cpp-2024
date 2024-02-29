#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* pname, int page) 
	{
		name = new char[strlen(pname) + 1];
		strcpy(name, pname);
		age = page;
	}
	Person(Person& per)
	{
		name = new char[strlen(per.name) + 1];
		strcpy(name, per.name);
		age = per.age;
	}
	~Person() 
	{
		delete[]name;
		cout << "����" << endl;
	}

	void PersonInfo()
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
};


int main()
{
	Person p("������", 27);
	p.PersonInfo();

	Person copyp(p);
	copyp.PersonInfo();

	return 0;
}
