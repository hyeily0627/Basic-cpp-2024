/*

#include <iostream>

int gloval = 100; // ��������

void func() {
	int a; // �������� a
	a = 100; // a�� func ��� �Լ� ������ ���
}


int main(void)
{
	int a; 
	int val;
	int val1; //�޸�(RAM)�� int ũ��� ��������� �Ҵ�ް� val�̸����� ����Ѵ�.
	std::cout << "ù ��° ���� �Է�: ";
	std::cin >> val1;

	int val2;
	std::cout << "�ι�° ���� �Է�: ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "���� ���: " << result << std::endl;
	a = 10; //�ش� a�� 7��� �ٸ� �������� a
	val = 100; 
	return 0;
}

/* 
�������� = ���ú��� : ���� �Ǿ��� ���� �ȿ����� ��� ����(static ������ ����)
*/


