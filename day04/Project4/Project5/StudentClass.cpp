#include <iostream>
using namespace std;

class StudentClass
{
private:
	const int Id;
	char Name[20];
	char Major[20];
	int Age;

public:
	// ���ڿ��� �ּұ� ������ ������ ������ �־ ����Ѵ�. - ���忭�� ù��° ���� �ּҰ� ���ڿ����
	// ����̴ϼȶ������ ��ü ������ �ʱ�ȭ ���� �ʴ� ������� �ʱ�ȭ�Ҷ� ����Ѵ�. 

	StudentClass(int a, const char *pName, const char *pMajor, int aAge) :Id(a)//��� �̴ϼȶ�����  - ������ ȣ��
	{
		//int Id = aId;
		strcpy(Name, pName); // ���ڿ� �迭�� �����ϰ� �ٷ� �ʱ�ȭ ���� ���� ���� strcpy()�� ���� �ʱ�ȭ  - ������ ����
		strcpy(Major, pMajor);
		Age = aAge;
	}

	void ShowStudentInfo() const
	{
		std::cout << "id: " << Id << "name" << Name << " major: " << Major << " age: " << Age << std::endl;
	}

};

int main()
{
	StudentClass a1(32, "������" , "his" , 27);


	return 0;
}
