
#include <iostream>
using namespace std;
int main()
{
	int num1;
	int num2;
	int result = 0;

	cout << "정수를 2개 입력하세요 >";
	cin >> num1 >> num2 ;

	char a;

	cout << "연산자를 입력하세요 >" ;
	cin >> a;

	
	if (a == '+') {
		result = num1 + num2;
		
	}
	else if (a == '-') {
		result = num1 - num2;
		
	}
	else if (a == '/') {
		if (num2 != 0) {
		result = num1 / num2;

		}
		else {
			cout << "0으로 나눌 수 없습니다." << endl;
			return 0;
		}
		
		
	}
	else if (a == 'x') {
		result = num1 * num2;
		
	}
	else {
		cout << "잘못된 입력입니다" << endl;
		return 0;
		
	}
	cout << result << endl;
	return 0; 
}