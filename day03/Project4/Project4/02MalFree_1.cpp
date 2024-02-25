#include <iostream> 
#include <string.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

char* MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len);  //C:heap영역에 20Byte 크기로 메모리 할당 
	printf("char size: %llu\n", sizeof(char));
	return str;
}
// %llu\n 정수를 뽑기위한 형식 지정자
// sizeof 메모리의 크기를 계산 
// char = 1byte 문자열 이라서 출력하면 'char size: 1'

/*
1. MakeStrAdr 함수는 정수 len을 매개변수로 받아서 길이가 len인 문자열을 동적으로 할당.
2. new 연산자를 사용하여 길이가 len인 문자열을 위한 메모리를 동적으로 할당하고, 그 메모리의 시작 주소를 가리키는 포인터 str을 반환.
3. printf("char size : %llu\n", sizeof(char));는 char 데이터 타입의 크기를 출력하는 코드.
*/


int main()
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy");
	// strcpy 오류 있으므로 속성 - C/C++ - 전처리기정의에  _CRT_SECURE_NO_WARNINGS 설정
	cout << str << endl;
	free(str);
	return 0;
}
