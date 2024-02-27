#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private: 
	char* name; 
	int age;
public:
	Person(const char* myname, int myage)		//입력 2개를 갖는 생성자		
	{
		int len = strlen(myname) + 1;			//strlen()는 문자열의 길이를 구하는 함수
		name = new char[len];
		//cout << "char 크기: " << sizeof(char) << endl;
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersinInfo() const
	{
		cout << "이름: " << name << endl; 
		cout << "나이: " << age << endl;
	}
	~Person()									// 자동으로 컴파일러가 호출
	{
	delete[]name;
	cout << "called destructor!" << endl;
	}
};

int main()
{
	Person man1("lee", 29);
	Person man2("Jang", 24);
	man1.ShowPersinInfo();
	man2.ShowPersinInfo();
	return 0;
}

