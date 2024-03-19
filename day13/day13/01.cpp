#include <iostream>
using namespace std;
/*
int main()
{
	int n1, n2;
	cout << "정수 2개를 입력하세요 : "; 
	cin >> n1 >> n2;

	cout << "+: " << n1 + n2 << endl; 
	cout << "-: " << n1 - n2 << endl;
	
	cout << "x: " << n1 * n2 << endl;

	try
	{
		if (!n2) throw n2;						// n2 가 참이 아니면 (0 외에는 다 참이므로 !n2는 0을 가리킴)
		cout << "/: " << n1 / n2 << endl;
	}
	catch (exception)
	{
		cout << "0으로 나눌 수 없습니다!" << endl;
	}

	return 0; 
}
*/

void cal(int _n1, int _n2)
{
	if (!_n2) throw _n2; 
	cout << "+: " << _n1 + _n2 << endl;
	cout << "-: " << _n1 - _n2 << endl;
	cout << "/: " << _n1 / _n2 << endl;
	cout << "x: " << _n1 * _n2 << endl;
}

int main(int argc, char* argv[])
{
	int n1, n2;
	cout << "정수 2개를 입력하세요 : ";
	cin >> n1 >> n2;

	try
	{
		cal(n1, n2);
	}
	catch (exception)
	{
		cout << "0으로 나눌 수 없습니다!" << endl;
	}
	return 0;
}