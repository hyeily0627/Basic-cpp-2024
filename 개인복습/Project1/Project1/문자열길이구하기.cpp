#include <iostream>
#include <cstring>    // strlen 함수가 선언된 헤더 파일

int main()
{
    const char* s1 = "Hello";       // 포인터에 문자열 Hello의 주소 저장
    char s2[10] = "Hello";    // 크기가 10인 char형 배열을 선언하고 문자열 할당

    std::cout << std::strlen(s1) << std::endl;    // 5: strlen 함수로 문자열의 길이를 구함
    std::cout << std::strlen(s2) << std::endl;    // 5: strlen 함수로 문자열의 길이를 구함

    return 0;
}
