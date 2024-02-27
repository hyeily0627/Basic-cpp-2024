/*
메모리 동적할당 : new 연산자 사용
프로그램 실행 중에 메모리를 할당 받는다. 
*/

#include <iostream>
using namespace std;

int main()
{
	cout << "int의 크기: " << sizeof(int) << endl;       // int 크기는 4이다. 
	int *pi = new int;									 // new연산자 : heap 공간에 int 크기(4byte)만큼 메모리에 할당 받음
	// pi는 새로 할당된 메모리를 지칭 (포인터 함수 사용- 주소값을 받음) 	
	
	*pi = 10;											 // 포인터변수가 지칭하고 있는 데이터를 나타내는 *
	cout << "pi가 가리키는 곳에 저장된 값: " << *pi << endl;

	delete pi;										     // delete가 없어도 heap 영역에 있는 메모리 삭제 되나, 사용하는 것이 개발자 책임
	// 동적할당 받은 메모리 공간을 반환하는 역할 


	int *pary = new int[10];							 // 10이라는 크기만큼 메모리 할당 
	// pary는 10이라는 크기만큼 새로 할당된 메모리를 지칭 (포인터 함수 사용- 주소값을 받음) 


	for (int i = 0; i < sizeof(pary); i++)				 // for문 초기식 ; 조건식 ; 증감식 
	{
		pary[i] = i + 10;								 // 배열의 각 방에 원소(요소)값을 집어 넣음 ex) pary[0] = 10
	}

	for (int i = 0; i < 10; i++)
	{
		printf("pary[%d] ; %d\n", i, pary[i]);
	}

	delete[]pary; 										 // 동적할당 메모리 반환(배열형식이므로 맞춰서) 
	
	return 0;
}