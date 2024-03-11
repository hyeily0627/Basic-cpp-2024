/*
벡터 객체를 생성하고 정수를 입력 받을때마다 벡터에 삽입하고 평균을 출력
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec;
	int input;
	int sum = 0;

	cout << "정수를 입력하세요" << endl;
	
	while (true) 
	{
		cout << "정수 입력: ";
		cin >> input;

		if (input == 0)
			break;
	}
	vec.push_back(input);
	for (int i = 0; vec.size(); i++)
		cout << sum / vec.size() << endl;
		
	

	return 0;
}