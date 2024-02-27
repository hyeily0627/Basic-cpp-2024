/*
객체 배열
*/

#include <iostream>
using namespace std;

class Human
{
private:
	char name[30];
	int age;

public:
	Human(const char* aname, int aage)
	{
		strcpy(name, aname);			//생성자 호출
		age = aage;						//생성자 호출
	}
	void HumanInfo()
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
	~Human()						//소멸자 호출
	{
		cout << "소멸자호출" << endl;
	}

};

int main()
{	
	Human h[3] = {Human("홍길동", 50), Human("오혜진", 27), Human("이용석", 27)};

	for(int i = 0; i <3 ; i ++)
	{
		 h[i].HumanInfo();
	}

	Human* h1 = new Human("가나다", 50);		// 힙 공간에 Human() 크기만큼 메모리에 할당받음
	// h1은  새로 할당된 메모리를 지칭
	Human h2 ("라마바", 30);
	
	h1->HumanInfo();
	// h1의 데이터에 접근해서 HumanInfo에게
	h2.HumanInfo();
	
	// h1과  h2 차이! 잘 이해하기

	return 0; 
}