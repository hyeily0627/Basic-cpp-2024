/*
사용자로부터 5개의 정수를 입력 받아서, 그 합을 출력하는 프로그램

실행의 예)

1번째 정수입력 : 1
2번째 정수입력 : 2
3번째 정수입력 : 3
4번째 정수입력 : 4
5번째 정수입력 : 5
합계 15

*/

#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int result = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "번째 정수입력 : ";
		cin >> num; 
		result += num;
	}

	cout << "합계 : " << result << endl;

	return 0;
}  