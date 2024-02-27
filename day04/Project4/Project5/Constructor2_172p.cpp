#include <iostream>
using namespace std;

class SimpleClass
{
private:
	int num1;
	int num2;
public:
	SimpleClass(int n1 = 0, int n2 = 0)
	{
		num1 = n1;
		num2 = n2;
	}
	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	SimpleClass sc1();				//함수선언 - sc1은 함수 입력 없음
	SimpleClass mysc=sc1();			//
	mysc.ShowData();

	return 0;
}

SimpleClass sc1()
{
	SimpleClass sc(20, 30);
	return sc;						//sc라는 객체로 리턴 - 24행으로 가서 리턴된 객체를 저장 
}

/* */