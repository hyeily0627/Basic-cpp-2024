// 전역함수로 연산자 오버로딩

#include <iostream>
using namespace std;

// Point 클래스 정의
class Point
{
private:
    int xpos, ypos; // x와 y 좌표를 저장하는 멤버 변수
public:
    // 생성자 정의, 디폴트 매개변수를 사용하여 초기값 설정
    Point(int x = 0, int y = 0) : xpos(x), ypos(y)
    { }

    // 현재 좌표를 출력하는 멤버 함수
    void ShowPosition() const
    {
        cout << '[' << xpos << ", " << ypos << ']' << endl;
    }

    // 외부(외부에서 정의한 operator+ 함수)에서 Point 객체들 간의 덧셈을 수행하기 위한 friend 함수 선언
    friend Point operator+(const Point& pos1, const Point& pos2);
};

// 외부에서 정의한 operator+ 함수 정의
Point operator+(const Point& pos1, const Point& pos2)
{
    // 두 Point 객체의 x 좌표와 y 좌표를 더하여 새로운 Point 객체 생성
    Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
    return pos;
}

// 메인 함수
int main()
{
    // Point 객체 생성 및 초기화
    Point pos1(3, 4);
    Point pos2(10, 20);

    // 두 Point 객체를 더하여 새로운 Point 객체 생성
    Point pos3 = pos1 + pos2;

    // 각각의 Point 객체의 좌표 출력
    pos1.ShowPosition();
    pos2.ShowPosition();
    pos3.ShowPosition();

    return 0;
}
