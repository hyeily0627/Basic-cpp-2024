/*
p. 326 

Person* ptr;				  // Person Ÿ���� ��ü ������ ���� 
Person* ptr = new Person();   // ����

Person p = new Person();	  // �Ұ���

�� ����/�Ұ��ɿ� ���ؼ� �����ϱ�

*/
#include <iostream> 
using namespace std;

class Person
{
public:
	void Sleep()
	{
		cout << "sleep" << endl;
	}
};
class Student : public Person
{
public :
	void Study()
	{
		cout << "study" << endl; 
	} 
	void Sleep()					       // �������̵� : ��Ӱ��迡�� ���
	{
		cout << "sleep now" << endl;  
	}

};

/*
�������̵�(Overriding)�� �Ļ� Ŭ�������� �⺻ Ŭ������ �̹� ���ǵ� �Լ��� ���� �̸����� �ٽ� �����ϴ� ���� �ǹ�
�Ļ� Ŭ�������� �⺻ Ŭ������ ��� �Լ��� �������Ͽ� ���ο� ������ ����

������, �����ؾ� �� ���� �Ļ� Ŭ�������� �Լ��� �������̵��� �� �Լ� �ñ״�ó(�̸��� �Ű����� ���)�� �⺻ Ŭ������ �Ͱ� ��Ȯ�� ��ġ�ؾ� �Ѵٴ� ��
�Լ� �ñ״�ó�� �ٸ��� �����ε�(Overloading)�� �߻�. ������, �� ��� �Լ� �ñ״�ó�� �����ϱ� ������ �������̵���
*/

class PartTimeStudent : public Student    // ��� �Լ� 3��
{
public :
	void Work()							  // Work�� ���� �ڱ� ����Լ�, Sleep�� Student�� ���
	{
		cout << "work" << endl;
	}
};

int main()
{	//�θ�ü�����ͷ� �ڳఴü�� ����ų �� �ִ�. 
	Person* ptr1 = new Student();			
	// ��Ģ�� Student* ptr1 = new Student(); -> ������ Ÿ������ ���!
	Person* ptr2 = new PartTimeStudent();		
	Student* ptr3 = new PartTimeStudent();
	ptr1->Sleep();							// �����ͷ� sleep ��ü ���� ( -> ���)
	ptr2->Sleep();
	ptr3->Study();
	delete ptr1; delete ptr2; delete ptr3;
	return 0;
}

/*
�θ�Ÿ���� ��ü �����ͷ� �ڽ� ��ü�� ����ų �� �ִ�.
������ �ڽ�Ÿ���� ��ü �����ͷ� �θ� ��ü�� ����ų �� ����.
�׸��� ������ ��ü �������� Ÿ���� ������. 
*/