/*
����ڷκ��� 5���� ������ �Է� �޾Ƽ�, �� ���� ����ϴ� ���α׷�

������ ��)

1��° �����Է� : 1
2��° �����Է� : 2
3��° �����Է� : 3
4��° �����Է� : 4
5��° �����Է� : 5
�հ� 15

*/

#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int result = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "��° �����Է� : ";
		cin >> num; 
		result += num;
	}

	cout << "�հ� : " << result << endl;

	return 0;
}  