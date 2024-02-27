

// swap �Լ� ���� call by reference

#include <iostream>

using namespace std;

/*
Q. swap01 ���Ͽ��� ���� ���� �Լ��� �����ƶ�
*/

void swap(int *x, int *y) { // �ּҸ� ���� �� �ִ� ����Ʈ ������ ����  
	int temp;
	temp = *x;				// �ּ��� �����͸� ����
	*x = *y;
	*y = temp;
}

int main()
{
	int a = 10;  // ��������
	int b = 20;
	
	cout << "before: " << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	
	swap(&a, &b); //������ �ּҸ� ���� 

	cout << "after: " << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	
	return 0; 
}

// A & B  ��Ʈ ������
// A && B  �� ������ : A�� ���̰� B�� ���� ��� ����� ��

// 0  0 = 0 
// 0  1 = 0
// 1  0 = 0
// 1  1 = 1

// A : ob 1000 1111 
// B : Ob 1011 0010
// A&B    1000 0010

// int& num2 = num1;
// int& num2 = 100;

// int num = 10;		/ �Ϲ����� �������� 
// int* ptr = &num1;    / ���� num1�� �ּҰ��� ��ȯ�ؼ� ������ ptr�� ����
// int& num2 = num1;    / ���� num1�� ���� ������ num2�� ����
