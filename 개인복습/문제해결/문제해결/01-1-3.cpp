/*
숫자를 하나 입력받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램을 작성
예) 사용자가 5를 입력한다면 구구단에서 5단을 출력해야함.
*/

#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	cout << "구구단 출력";
	cin >> num; 

	for (int i = 1; i < 10; i++)
	{
		cout << num << 'x' << num*i << endl;
	}

	return 0;
}