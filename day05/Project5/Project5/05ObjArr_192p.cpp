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
		cout << "Called Person() "<< endl;
	}
	void SetPersonInfo(char* myname, int myage)
	{
		name = myname;
		age = myage;
	}
	void ShowpersonInfo() const
	{
		cout << "이름 : " << name << ", ";
		cout << "나이 : " << age << endl; 
 	}
	~Person()
	{
		delete[]name;
		cout << "called destructor" << endl;
	}
};

int main()
{
	Person parr[3];								// 객체 배열 parr의 각각의 방에는 Person을 담을 수 있음 
	char namestr[100];							// 문자 배열 
	char* strptr;								// char 타입의 포인터변수
	int age;
	int len;

	for (int i = 0; i < 3; i++)
	{
		cout << "이름 : ";						
		cin >> namestr;							
		cout << "나이 : "; 
		cin >> age; 

		len = strlen(namestr) + 1;
		strptr = new char[len];
		strcpy(strptr, namestr);
		parr[i].SetPersonInfo(strptr, age);
	}
	parr[0].ShowpersonInfo();
	parr[1].ShowpersonInfo();
	parr[2].ShowpersonInfo();
	return 0; 
}

/*
포인터 배열 : 포인터를 저장하고 있는 배열
배열 포인터 : 배열을 가리키는 포인터
*/