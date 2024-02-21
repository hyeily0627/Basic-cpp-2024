/*
#include <iostream>

int main(void)
{
	int val1, val2;
	int result = 0; // 변수 선언과 동시에 값을 대입 : 변수 초기화
	std::cout << "두 개의 숫자 입력: ";
	std::cin >> val1 >> val2; // 두 개의 정수를 입력 받아서 val1, val2에 순서대로 저장할 것을 명령하는 문장

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++) // for문 내에서 변수 선언 가능
			result += i;
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}

	std::cout << "두 수 사이의 정수 합: " << result << std::endl;
	return 0;
}
/*
<제어문>
1. 선택제어문
	if, switch

2. 반복제어문
	for, while

	* for ( 초기식 ; 조건식 ; 증감식 )
	1) 초기식을 가지고 조건식을 따진다
	2) 조건식이 참이면 for문의 실행문을 실행하고
	3) 증감식을 실행
	4) 조건식을 따지고 
	2)-> 3) ->4) 로 진행 

*/