#include <iostream>
using namespace std;

// AAA 클래스 정의
class AAA
{
private:
    int num; // 비공개 멤버 변수 num
public:
    // 인수로 정수를 받는 생성자, 기본값은 0
    AAA(int n = 0) : num(n)
    {
        cout << "AAA(int n = 0)" << endl; // 생성자가 호출될 때 메시지 출력
    }

    // AAA 객체에 대한 복사 생성자, 상수 참조를 인수로 받음
    AAA(const AAA& ref) : num(ref.num)
    {
        cout << "AAA(const AAA& ref)" << endl; // 복사 생성자가 호출될 때 메시지 출력
    }

    // AAA 객체에 대한 대입 연산자 오버로딩, 상수 참조를 인수로 받음
    AAA& operator=(const AAA& ref)
    {
        num = ref.num; // 참조된 객체의 num 값을 복사
        cout << "operator=(const AAA& ref)" << endl; // 할당 연산자가 호출될 때 메시지 출력
        return *this; // 수정된 객체에 대한 참조 반환
    }
};

// BBB 클래스 정의
class BBB
{
private:
    AAA mem; // AAA 유형의 비공개 멤버 변수 mem
public:
    // AAA 객체에 대한 상수 참조를 인수로 받는 생성자
    BBB(const AAA& ref) : mem(ref) {} // 멤버 초기화 목록을 사용하여 mem을 제공된 AAA 객체로 초기화
};

// CCC 클래스 정의
class CCC
{
private:
    AAA mem; // AAA 유형의 비공개 멤버 변수 mem
public:
    // AAA 객체에 대한 상수 참조를 인수로 받는 생성자
    CCC(const AAA& ref) { mem = ref; } // 생성자 본문에서 제공된 AAA 객체를 mem에 할당
};

// 메인 함수
int main()
{
    AAA obj1(12); // 값이 12인 AAA 객체 obj1 생성
    cout << "*****************" << endl; // 구분 메시지 출력

    BBB obj2(obj1); // obj1을 전달하여 BBB 객체 obj2 생성
    cout << "*****************" << endl; // 구분 메시지 출력

    CCC obj3(obj1); // obj1을 전달하여 CCC 객체 obj3 생성
    cout << "*****************" << endl; // 구분 메시지 출력

    return 0;
}
