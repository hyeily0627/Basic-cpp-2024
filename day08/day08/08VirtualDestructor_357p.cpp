#include <iostream>
using namespace std;


class First
{
private:
	char* strOne;
public:
	First(const char* str)
	{
		strOne = new char[strlen(str) + 1];
	}
	 ~First()
	{
		cout << "~First()" << endl;
		delete[]strOne;
	}
};

class Second : public First
{
private:
	char* strTwo;
public:
	Second(const char* str1, const char* str2) : First(str1)
	{
		strTwo = new char[strlen(str2) + 1];
	}
	 ~Second()
	{
		cout << "~second()" << endl;
		delete[] strTwo;
	}

};

int main()
{
	// 상속관계에 있어서 객체포인터는 조심해야함
	// 부모타입의 객체 포인터로 자식 객체를 가리키는 경우 (다형성)
	First* ptr = new Second("simple", "complex");
	delete ptr;
	return 0;
}

/*
소멸자에 아무것도 없을 경우 결과값 
~First()
=> 메모리 누수 발생

소멸자에 virtual 붙였을때 결과값 
~second()
~First()
=> 포인터 변수의 자료형과 관계없이 모든 소멸자 호출
*/