#include <iostream>

using namespace std;

int main() 
{
	int num = 10;
	cout << "num: " << num << endl;

	int *pnum = &num;
	int &rnum = num;
	num = 20;

	cout << endl;
	cout << "num: " << num << endl;
	cout << "*pnum: " << *pnum << endl;
	cout << "rnum: " << rnum << endl;

	rnum = 40;

	cout << endl;
	cout << "num: " << num << endl;
	cout << "*pnum: " << *pnum << endl;
	cout << "rnum: " << rnum << endl;

	return 0;
}