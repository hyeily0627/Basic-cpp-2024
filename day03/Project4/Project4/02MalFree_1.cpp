#include <iostream> 
#include <string.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

char* MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len);  //C:heap������ 20Byte ũ��� �޸� �Ҵ� 
	printf("char size: %llu\n", sizeof(char));
	return str;
}
// %llu\n ������ �̱����� ���� ������
// sizeof �޸��� ũ�⸦ ��� 
// char = 1byte ���ڿ� �̶� ����ϸ� 'char size: 1'

/*
1. MakeStrAdr �Լ��� ���� len�� �Ű������� �޾Ƽ� ���̰� len�� ���ڿ��� �������� �Ҵ�.
2. new �����ڸ� ����Ͽ� ���̰� len�� ���ڿ��� ���� �޸𸮸� �������� �Ҵ��ϰ�, �� �޸��� ���� �ּҸ� ����Ű�� ������ str�� ��ȯ.
3. printf("char size : %llu\n", sizeof(char));�� char ������ Ÿ���� ũ�⸦ ����ϴ� �ڵ�.
*/


int main()
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy");
	// strcpy ���� �����Ƿ� �Ӽ� - C/C++ - ��ó�������ǿ�  _CRT_SECURE_NO_WARNINGS ����
	cout << str << endl;
	free(str);
	return 0;
}
