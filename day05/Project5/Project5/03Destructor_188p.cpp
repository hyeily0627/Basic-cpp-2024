#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private: 
	char* name; 
	int age;
public:
	Person(const char* myname, int myage)		//�Է� 2���� ���� ������		
	{
		int len = strlen(myname) + 1;			//strlen()�� ���ڿ��� ���̸� ���ϴ� �Լ�
		name = new char[len];
		//cout << "char ũ��: " << sizeof(char) << endl;
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersinInfo() const
	{
		cout << "�̸�: " << name << endl; 
		cout << "����: " << age << endl;
	}
	~Person()									// �ڵ����� �����Ϸ��� ȣ��
	{
	delete[]name;
	cout << "called destructor!" << endl;
	}
};

int main()
{
	Person man1("lee", 29);
	Person man2("Jang", 24);
	man1.ShowPersinInfo();
	man2.ShowPersinInfo();
	return 0;
}

