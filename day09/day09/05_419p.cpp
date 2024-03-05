#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{ }
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	Point& operator++()										// 전위증가 - 증가하고 던져줌
	{
		xpos += 1;
		ypos += 1;
		return *this;
	}
	const Point operator++(int)								// 후위증가 - 던져주고 증가
	{
		const Point retobj(xpos, ypos);						// 1. 현재 객체의 (던져주기 위해)복사본 생성
		xpos += 1;											// 2. 객체 속성값 1씩 증가
		ypos += 1;
		return retobj;										// 3. 원본객체(증가이전)의 복사본 반환
	}
	friend Point& operator--(Point& ref);
	friend const Point operator--(Point& ref, int);
};

Point& operator--(Point& ref)								// 전위감소
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}

const Point operator--(Point& ref, int)						// 후위감소 
{
	const Point retobj(ref);
	ref.xpos -= 1;
	ref.ypos -= 1;
	return retobj;
}

int main()
{
	Point pos(3, 5);
	Point cpy;
	cpy = pos--;
	cpy.ShowPosition();
	pos.ShowPosition();

	cpy = pos++;
	cpy.ShowPosition();
	pos.ShowPosition();
	return 0;
}