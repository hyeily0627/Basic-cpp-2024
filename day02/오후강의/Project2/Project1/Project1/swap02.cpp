

// swap 함수 구현 call by reference

#include <iostream>

using namespace std;

/*
Q. swap01 파일에서 만든 것을 함수로 만들어보아라
*/

void swap(int *x, int *y) { // 주소를 받을 수 있는 포인트 변수를 선언  
	int temp;
	temp = *x;				// 주소의 데이터를 참조
	*x = *y;
	*y = temp;
}

int main()
{
	int a = 10;  // 지역변수
	int b = 20;
	
	cout << "before: " << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	
	swap(&a, &b); //변수의 주소를 전달 

	cout << "after: " << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	
	return 0; 
}

// A & B  비트 연산자
// A && B  논리 연산자 : A가 참이고 B도 참인 경우 결과가 참

// 0  0 = 0 
// 0  1 = 0
// 1  0 = 0
// 1  1 = 1

// A : ob 1000 1111 
// B : Ob 1011 0010
// A&B    1000 0010

// int& num2 = num1;
// int& num2 = 100;

// int num = 10;		/ 일반적인 변수선언 
// int* ptr = &num1;    / 변수 num1의 주소값을 반환해서 포인터 ptr에 저장
// int& num2 = num1;    / 변수 num1에 대한 참조자 num2를 선언
