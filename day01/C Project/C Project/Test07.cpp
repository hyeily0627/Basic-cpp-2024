
#include <iostream>
using namespace std;
int main()
{
	int num1;
	int num2;
	int result = 0;

	cout << "������ 2�� �Է��ϼ��� >";
	cin >> num1 >> num2 ;

	char a;

	cout << "�����ڸ� �Է��ϼ��� >" ;
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
			cout << "0���� ���� �� �����ϴ�." << endl;
			return 0;
		}
		
		
	}
	else if (a == 'x') {
		result = num1 * num2;
		
	}
	else {
		cout << "�߸��� �Է��Դϴ�" << endl;
		return 0;
		
	}
	cout << result << endl;
	return 0; 
}