/*
���ڸ� �ϳ� �Է¹޾Ƽ� �� ���ڿ� �ش��ϴ� �������� ����ϴ� ���α׷��� �ۼ�
��) ����ڰ� 5�� �Է��Ѵٸ� �����ܿ��� 5���� ����ؾ���.
*/

#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	cout << "������ ���";
	cin >> num; 

	for (int i = 1; i < 10; i++)
	{
		cout << num << 'x' << num*i << endl;
	}

	return 0;
}