/*
���� ��ü�� �����ϰ� ������ �Է� ���������� ���Ϳ� �����ϰ� ����� ���
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec;
	int input;
	int sum = 0;

	cout << "������ �Է��ϼ���" << endl;
	
	while (true) 
	{
		cout << "���� �Է�: ";
		cin >> input;

		if (input == 0)
			break;
	}
	vec.push_back(input);
	for (int i = 0; vec.size(); i++)
		cout << sum / vec.size() << endl;
		
	

	return 0;
}