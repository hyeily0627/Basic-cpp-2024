#include <iostream>
using namespace std;
/*
int main()
{
	int n1, n2;
	cout << "���� 2���� �Է��ϼ��� : "; 
	cin >> n1 >> n2;

	cout << "+: " << n1 + n2 << endl; 
	cout << "-: " << n1 - n2 << endl;
	
	cout << "x: " << n1 * n2 << endl;

	try
	{
		if (!n2) throw n2;						// n2 �� ���� �ƴϸ� (0 �ܿ��� �� ���̹Ƿ� !n2�� 0�� ����Ŵ)
		cout << "/: " << n1 / n2 << endl;
	}
	catch (exception)
	{
		cout << "0���� ���� �� �����ϴ�!" << endl;
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
	cout << "���� 2���� �Է��ϼ��� : ";
	cin >> n1 >> n2;

	try
	{
		cal(n1, n2);
	}
	catch (exception)
	{
		cout << "0���� ���� �� �����ϴ�!" << endl;
	}
	return 0;
}