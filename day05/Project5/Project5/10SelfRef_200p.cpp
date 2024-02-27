#include <iostream>
using namespace std;

class SelfRef
{
private:
    int num; // 정수형 변수 num
public:
    SelfRef(int n) : num(n) // 생성자. 인자로 받은 값을 num에 할당
    {
        cout << "객체생성" << endl; // 객체가 생성될 때 메시지 출력
    }

    // 정수를 받아 num에 더한 후 자기 자신을 참조하는 객체를 반환하는 메서드
    SelfRef& Adder(int n)
    {
        num += n;
        return *this; // 자기 자신을 참조하는 객체 반환
    }

    // num 값을 출력하고 자기 자신을 참조하는 객체를 반환하는 메서드
    SelfRef& ShowTwoNumber()
    {
        cout << num << endl; // num 값 출력
        return *this; // 자기 자신을 참조하는 객체 반환
    }
};


int main(void)
{
	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2);

	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	return 0;
}
