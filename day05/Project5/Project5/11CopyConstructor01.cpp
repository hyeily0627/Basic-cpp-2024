// ���� ������ : ��ü�� �����Ҷ� ȣ��Ǵ� ������
// ���� ������ ��ü�� �Է����� �������ϸ�, �̶� ����ü�� ������ �Է����� �޴´�. 

#include <iostream>
using namespace std;

class A
{
public:
	A() 
	{
		cout << "����Ʈ ������ ȣ��" << endl;
	}
	A(int n)
	{
		cout << "A(int n) ������ ȣ��" << endl;
	}
	A(const A& r)										// ���� ������ 
	{
		cout << "A(const A& r) ������ ȣ��" << endl;
	}
};


int main()
{
	A obj1;					// ����Ʈ �����ڷ� ��ü ����
	A obj2(10);				// �Է� 1�� ������ ������ ȣ�� 
	A obj3(obj2);			// ���� ������ ȣ�� 

	return 0;

}