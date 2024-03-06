//new�� delete�� �������̱⶧���� �����ε��� �����ϴ�. 

#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) :xpos(x), ypos(y) { }
	friend ostream& operator<<(ostream& os, const Point& pos);

	void* operator new(size_t size)
	{
		cout << "operator new : " << size << endl;
		void* adr = new char[size];
		return adr;
	}
};

ostream& operator<<(ostream& os, const Point& pos)
{
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
}

int main()
{
	Point* ptr = new Point(3, 4);
	cout << *ptr;
	delete ptr;
	return 0; 
}