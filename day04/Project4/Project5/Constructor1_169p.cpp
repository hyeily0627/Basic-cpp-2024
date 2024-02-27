#include <iostream>
using namespace std;

class SimpleClass
{
	int num1;
	int num2;

public:
	SimpleClass()		// 디폴트 생성자 
	{
		num1 = 0;
		num2 = 0;
	}
	SimpleClass(int n)
	{
		num1 = n;
		num2 = 0;
	}
	SimpleClass(int n1, int n2)
	{
		num1 = n1;
		num2 = n2;
	}

	/*
	SimpleClass(int n1=0, int n2=0)
	{
		num1=n1;
		num2=n2;
	}
	*/

	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	SimpleClass sc1;				// 입력값 없는 객체 생성	
	sc1.ShowData();

	SimpleClass sc2(100);			// 입력 1개 전달 객체 생성 
	sc2.ShowData();

	SimpleClass sc3(100, 200);		// 입력 2개 전달 객체 생성 
	sc3.ShowData();
	return 0;
}

/* */