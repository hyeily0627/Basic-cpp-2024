#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int ary[3] = { 10, 20, 30 }; //���⼭ 3�� ũ�⸦ ��Ÿ���� 
	ary[0] = 111; // �ε��� 0��(10)�� 111�� ����  / ���⼭ 0�� �ε���

	// �迭�� ���� �����͸� ����, ����ϱⰡ ���ϴ�. 

	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}
	return 0;
}

