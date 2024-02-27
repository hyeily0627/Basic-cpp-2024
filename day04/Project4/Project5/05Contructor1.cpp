#include <iostream>
using namespace std;

class MyClass
{
	int num;

public: 
	MyClass()
	{
		cout << "생성자 호출 : MyClass()" << endl;
		num = 10;
	}

	MyClass(int anum)
	{
		cout << "생성자 호출 : MyClass(int)" << endl;
		num = anum;
	}

	void MyClassInfo()
	{
		cout << "num: " << num << endl;
	}
};

int main()
{
	//MyClass* m = new MyClass();
	MyClass m1;						// 객체생성 명령으로 생성자는 자동 호출 된다. 
	m1.MyClassInfo();
	MyClass m2(20);
	m2.MyClassInfo();

return 0; 
}

/*
매개변수를 가지지 않는 생성자 = 디폴트 생성자
위 코드에서는 MyClass()

생성자 안만들어도 디폴트 생성자 자동호출?

*/

