#include <iostream>
using namespace std;

class ContryArea
{
public:
	const static int Russia = 1707540;
	const static int Canada = 998467;
	const static int China = 957290;
	const static int South_Korea = 9922;
};

int main()
{
	cout << "���þ� ����: " << ContryArea::Russia << "km��" << endl;
	cout << "ĳ���� ����: " << ContryArea::Canada << "km��" << endl;
	cout << "�߱� ����: " << ContryArea::China << "km��" << endl;
	cout << "�ѱ� ����: " << ContryArea::South_Korea << "km��" << endl;
	return 0;
}