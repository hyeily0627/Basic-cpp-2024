#include <iostream>
using namespace std;

class AA
{
	int a;
	int b;

public:
	AA(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	void AAInfo()
	{
		cout << a << " " << b << endl;
	}
};

int main()
{
	AA obj1(10, 20);
	obj1.AAInfo();

	AA obj2(obj1);
	obj2.AAInfo();						// 복사생성자를 만들지 않아도 실행 => 자동 생성

	return 0;

}