/*
* 75p ~ 76p
#include <iostream>

using namespace std;

void SwapByValue(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
} // call by value 
	
int main()
{
	int val1 = 10;
	int val2 = 20;
	SwapByValue(val1, val2); // val1과 val2에 저장된 값이 바뀌기를 기대함
	cout << "val1: " << val1 << endl; // 10 출력
	cout << "val2: " << val2 << endl; // 20 출력

	return 0;
} // 그런데 val1, val2 안바뀜
*/

#include <iostream>
using namespace std;

void SwapByRef(int* ptr1, int* ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

} // call by reference

int main()
{
	int val1 = 10;
	int val2 = 20;
	SwapByRef(&val1, &val2);
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;
	return 0;

}