#include <iostream>
using namespace std;

class Sosimple
{
private:
	int num1;
	mutable int num2;							// num2��  mutable�� ���� -> const �Լ� ������ ���� ���
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
		num2 = num1;							//const �Լ������� num2�� ����� ���� ���� => mutable�� num2�� �����߱⶧���� �����ϴ�. 
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