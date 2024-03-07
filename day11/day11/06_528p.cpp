#include <iostream>
using namespace std;

template <typename T>
T Add(T num1, T num2)
{
	return num1 + num2;
}

int main()
{
	cout << Add<int>(15, 20)		<< endl;
	cout << Add<double>(2.9, 3.7)	<< endl;
	cout << Add<int>(3.2, 3.2)		<< endl;
	cout << Add<double>(3.14, 2.75) << endl;
	return 0;
}

/*
* 아래도 가능하지만, 명시적으로 자료형을 나타내주는 것이 좋다. 
int main()
{
	cout << Add(15, 20)		<< endl;
	cout << Add(2.9, 3.7)	<< endl;
	cout << Add(3.2, 3.2)		<< endl;
	cout << Add(3.14, 2.75) << endl;
	return 0;
}
*/