/*
int numArr[3][4] = {
    { 가로 요소 4개 },
    { 가로 요소 4개 },
    { 가로 요소 4개 }
};              ↑ 세로 3줄
*/

#include <iostream>


int main()
{
    int numArr[3][4] = {    // 세로 크기 3, 가로 크기 4인 int형 2차원 배열 선언
        { 11, 22, 33, 44 },
        { 55, 66, 77, 88 },
        { 99, 110, 121, 132 }
    };
    // ↓ 세로 인덱스
    std::cout << numArr[0][0] << std::endl;    // 11 : 세로 인덱스 0, 가로 인덱스 0인 요소 출력
    std::cout << numArr[1][2] << std::endl;    // 77 : 세로 인덱스 1, 가로 인덱스 2인 요소 출력
    std::cout << numArr[2][0] << std::endl;    // 99 : 세로 인덱스 2, 가로 인덱스 0인 요소 출력
    std::cout << numArr[2][3] << std::endl;    // 132: 세로 인덱스 2, 가로 인덱스 3인 요소 출력
    // ↑ 가로 인덱스

    return 0;
}
