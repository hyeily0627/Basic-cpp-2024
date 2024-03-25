#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;			// intŸ���� vector ���� 

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i + 1);
		printf("v[%d]: %d\n", i, v[i]);
		printf("v.size():%d\n", v.size());				// ���Ұ���
		printf("v.capacity():%d\n", v.capacity());		// �޸� ���� 
	}

	v.push_back(20);
	v.push_back(21);

	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		//v.push_back(i + 1);
		printf("v[%d] : %d\n", i, v[i]);
		printf("v.at(i) : %d\n",v.at(i));
	}

	cout << "iterator : �ݺ���" << endl;
	vector<int>::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++)
	{
		cout << "*iter : " << *iter << endl; 
	}

	vector<string> vs;
	vs.push_back("Hi");
	vs.push_back("Have a good day");
	vs.push_back("See you later");
	cout << "vs.front()" << vs.front() << endl;
	cout << "vs.back()" << vs.back() << endl;
	vector<string>::iterator it;
	for (it = vs.begin(); it != vs.end(); it++)
	{
		cout << "*it : " << *it << endl;
	}

	return 0;
}