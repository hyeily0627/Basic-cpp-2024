/*
#include <iostream>

int main(void)
{
	int val1, val2;
	int result = 0; // ���� ����� ���ÿ� ���� ���� : ���� �ʱ�ȭ
	std::cout << "�� ���� ���� �Է�: ";
	std::cin >> val1 >> val2; // �� ���� ������ �Է� �޾Ƽ� val1, val2�� ������� ������ ���� ����ϴ� ����

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++) // for�� ������ ���� ���� ����
			result += i;
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}

	std::cout << "�� �� ������ ���� ��: " << result << std::endl;
	return 0;
}
/*
<���>
1. �������
	if, switch

2. �ݺ����
	for, while

	* for ( �ʱ�� ; ���ǽ� ; ������ )
	1) �ʱ���� ������ ���ǽ��� ������
	2) ���ǽ��� ���̸� for���� ���๮�� �����ϰ�
	3) �������� ����
	4) ���ǽ��� ������ 
	2)-> 3) ->4) �� ���� 

*/