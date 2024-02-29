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
	cout << "러시아 면적: " << ContryArea::Russia << "km²" << endl;
	cout << "캐나다 면적: " << ContryArea::Canada << "km²" << endl;
	cout << "중국 면적: " << ContryArea::China << "km²" << endl;
	cout << "한국 면적: " << ContryArea::South_Korea << "km²" << endl;
	return 0;
}