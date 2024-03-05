#include <iostream>
#include <cstring>
using namespace std;

class Point
{
private:
	int x, y;
public: 
	Point(int ax = 0, int by = 0) : x(ax), y(by) 
	{ }
	void viewPoint() const
	{
		cout << " x " << x << " y " << y << endl;
	}
	friend Point operator+(const Point& a, const Point& b);
	friend Point operator+(const Point& a, int b);
}; 
	Point operator+(const Point& a, const Point& b)
	{
		Point plus(a.x + b.x, a.y + b.y);
		return plus;
	}
	Point operator+(const Point& a, int b)
	{
		Point plus(a.x + b, a.y + b);
		return plus;
	}

int main()
{
	Point a(10, 20);
	Point b(30, 40);
	Point c = a + b;
	Point d = a + 100;
	Point e = 100 + a;
	c.viewPoint();
	d.viewPoint();
	e.viewPoint();

	//std::cout << c << std::endl;
	//std::cout << d << std::endl;
	//std::cout << e << std::endl;


	return 0;
}