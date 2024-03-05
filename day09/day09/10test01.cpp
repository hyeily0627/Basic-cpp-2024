#include <iostream>
using namespace std;

class Myclass
{
private:
	int num;
public: 
	Myclass(int a = 0) : num(a)
	{ }
	void print() const
	{
		cout << "value : " << num << endl;
	}
	/* 
	멤버함수
	
	Myclass operator+(const Myclass& ref)
	{
		Myclass anum(num+ref.num);
		return anum;
	}
	*/

	// 전역함수 
	friend Myclass operator+(const Myclass& ref, const Myclass& re);
};

Myclass operator+(const Myclass& ref, const Myclass& re)
{
	Myclass anum(ref.num + re.num);
	return anum;
}

int main()
{
	Myclass a(10);
	a.print();					//value : 10

	Myclass b(a);
	b.print();					//value : 10

	Myclass c=b;
	b.print();					//value : 10

	Myclass d = a + b + c;
	d.print();					//value : 30

	return 0;
}