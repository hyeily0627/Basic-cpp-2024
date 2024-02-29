#include <iostream>
using namespace std;

class Sosimple
{
private:
	int num1;
	mutable int num2;							// num2가  mutable로 선언 -> const 함수 내에서 변경 허용
public:
	Sosimple(int n1, int n2)
		:num1(n1), num2(n2)
	{ }
	void ShowSimpleData() const
	{
		cout << num1 << ", " << num2 << endl;
	}
	void CopyToNum2() const
	{
		num2 = num1;							//const 함수내에서 num2에 저장된 값을 변경 => mutable로 num2를 선언했기때문에 가능하다. 
	}
};

int main()
{
	Sosimple sm(1, 2);
	sm.ShowSimpleData();
	sm.CopyToNum2();
	sm.ShowSimpleData();
	return 0;
}