/*
char ary[] = {'a','b','c','d','e','f'}
while 과 if문만으로 배열 순서를 바꾸어 저장 출력하시오. 
*/

#include <iostream>
using namespace std;

int main() {
    // 주어진 문자 배열 초기화
    char ary[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    // 배열의 크기 계산
    int size = sizeof(ary) / sizeof(ary[0]);

    // 배열의 시작과 끝 인덱스 설정
    int start = 0;
    int end = size - 1;

    // 배열의 순서를 바꾸는 while 루프
    while (start < end) {
        // 짝수 번째 위치에 있는 원소들만 교환
        if (start % 2 == 0 && end % 2 == 0) {
            // 두 원소를 교환하는 코드
            char temp = ary[start];
            ary[start] = ary[end];
            ary[end] = temp;
        }
        // 시작 인덱스 증가, 끝 인덱스 감소
        start++;
        end--;
    }

    // 바뀐 배열 출력
    cout << "***바뀐 배열***" << endl;
    for (int i = 0; i < size; i++) {
        cout << ary[i]; // 각 문자 출력
    }

    return 0;
}