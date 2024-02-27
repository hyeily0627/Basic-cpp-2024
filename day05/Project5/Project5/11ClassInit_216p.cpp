#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class SoSimple						  // SoSimple 클래스 정의
{
private:
    int num1;							// 정수형 멤버 변수 num1
    int num2;							// 정수형 멤버 변수 num2
public:
    SoSimple(int n1, int n2)		  // 두 개의 정수를 받는 생성자
        : num1(n1), num2(n2)		  // 멤버 이니셜라이저를 사용하여 멤버 변수 초기화
    {
        // 생성자 본문이 비어 있음
    }

    SoSimple(SoSimple& copy)		  // 복사 생성자 정의
        : num1(copy.num1), num2(copy.num2)  // 다른 SoSimple 객체를 받아 그 객체의 num1과 num2를 복사하여 초기화
    {
        cout << "Called SoSimple(SoSimple &copy)" << endl;  // 복사 생성자가 호출될 때 메시지 출력
    }

    void ShowSimpleData()			// 멤버 변수 값을 출력하는 메서드
    {
        cout << num1 << endl;
        cout << num2 << endl;
    }
};

int main(void)
{
    SoSimple sim1(15, 30);			// SoSimple 객체 sim1을 생성하고 초기화
    cout << "생성 및 초기화 직전" << endl;
    SoSimple sim2 = sim1;			// SoSimple 객체 sim2를 복사 생성자를 통해 sim1로부터 초기화
    cout << "생성 및 초기화 직후" << endl;
    sim2.ShowSimpleData();			// sim2의 멤버 변수 값 출력
    return 0;
}
