#include <iostream>
using namespace std;

// 템플릿 함수 정의: 두 개의 동일한 타입의 매개변수를 받아들이고, 큰 값을 반환하는 Max 함수
template <typename T>
T Max(T a, T b)
{
    // a와 b를 비교하여 큰 값을 반환
    return a > b ? a : b;
}

int main()
{
    // Max 함수 호출, int형 매개변수로 11과 15를 전달하여 두 값 중 큰 값을 출력
    cout << Max(11, 15) << endl;
    // 출력: 15

    // Max 함수 호출, char형 매개변수로 'T'와 'Q'를 전달하여 두 값 중 큰 값을 출력
    cout << Max('T', 'Q') << endl;
    // 출력: T

    // Max 함수 호출, double형 매개변수로 3.5와 7.5를 전달하여 두 값 중 큰 값을 출력
    cout << Max(3.5, 7.5) << endl;
    // 출력: 7.5

    // Max 함수 호출, const char* 형 매개변수로 "simple"과 "best"를 전달하여 두 문자열 중 큰 값을 출력
    cout << Max("simple", "best") << endl;
    // 출력: simple

    return 0;
}
