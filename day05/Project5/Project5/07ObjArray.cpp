/*
��ü �迭
*/

#include <iostream>
using namespace std;

class Human
{
private:
	char name[30];
	int age;

public:
	Human(const char* aname, int aage)
	{
		strcpy(name, aname);			//������ ȣ��
		age = aage;						//������ ȣ��
	}
	void HumanInfo()
	{
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}
	~Human()						//�Ҹ��� ȣ��
	{
		cout << "�Ҹ���ȣ��" << endl;
	}

};

int main()
{	
	Human h[3] = {Human("ȫ�浿", 50), Human("������", 27), Human("�̿뼮", 27)};

	for(int i = 0; i <3 ; i ++)
	{
		 h[i].HumanInfo();
	}

	Human* h1 = new Human("������", 50);		// �� ������ Human() ũ�⸸ŭ �޸𸮿� �Ҵ����
	// h1��  ���� �Ҵ�� �޸𸮸� ��Ī
	Human h2 ("�󸶹�", 30);
	
	h1->HumanInfo();
	// h1�� �����Ϳ� �����ؼ� HumanInfo����
	h2.HumanInfo();
	
	// h1��  h2 ����! �� �����ϱ�

	return 0; 
}