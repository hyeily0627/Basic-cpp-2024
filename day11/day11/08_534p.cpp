#include <iostream>
using namespace std;

// 템플릿 함수 정의: 두 개의 템플릿 타입을 받아들이는 ShowData
template <class T1, class T2>
void ShowData(double num)
{
    // num을 T1과 T2 타입으로 캐스팅하여 출력
    cout << (T1)num << " ," << (T2)num << endl;
}

int main()
{
    // ShowData 함수 호출, T1을 char, T2를 int로 설정하고 65를 인자로 전달
    ShowData<char, int>(65);
    // 출력: A, 65

    // ShowData 함수 호출, T1을 char, T2를 int로 설정하고 67를 인자로 전달
    ShowData<char, int>(67);
    // 출력: C, 67

    // ShowData 함수 호출, T1을 char, T2를 double로 설정하고 68.9를 인자로 전달
    ShowData<char, double>(68.9);
    // 출력: D, 68.9

    // ShowData 함수 호출, T1을 short(정수 부분만 남김), T2를 double로 설정하고 69.2를 인자로 전달
    ShowData<short, double>(69.2);
    // 출력: 69, 69.2 

    // ShowData 함수 호출, T1을 short, T2를 double로 설정하고 70.4를 인자로 전달
    ShowData<short, double>(70.4);
    // 출력: 70, 70.4

    return 0;
}
