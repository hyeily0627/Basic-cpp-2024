/*

#include <iostream>

int gloval = 100; // 전역변수

void func() {
	int a; // 지역변수 a
	a = 100; // a는 func 라는 함수 내에서 사용
}


int main(void)
{
	int a; 
	int val;
	int val1; //메모리(RAM)에 int 크기로 저장공간을 할당받고 val이름으로 사용한다.
	std::cout << "첫 번째 숫자 입력: ";
	std::cin >> val1;

	int val2;
	std::cout << "두번째 숫자 입력: ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈 결과: " << result << std::endl;
	a = 10; //해당 a는 7행과 다른 지역변수 a
	val = 100; 
	return 0;
}

/* 
지역변수 = 로컬변수 : 선언 되어진 범위 안에서만 사용 가능(static 영역에 저장)
*/


