//5���� �̸��� ��,��,�� 3������ �Է¹޾� �л��� ������ ���, �׸��� ���� ������ ����� ���Ͻÿ� 

#include <iostream>
using namespace std;

class Grade
{
private: 
	char* Name;
	int Korean;
	int Math;
	int English;
public: 
	Grade(const char* n, int kor, int mat, int eng)
		: Korean(kor), Math(mat), English(eng)
	{
		Name = new char[strlen(n) + 1];
		strcpy(Name, n);
	}
    Grade()
    {
        Name = new char[50];

        cout << "��° �л��� �̸��� �Է��ϼ���: ";
        cin >> Name;

        cout << "���� ������ �Է��ϼ���: ";
        cin >> Korean;

        cout << "���� ������ �Է��ϼ���: ";
        cin >> Math;

        cout << "���� ������ �Է��ϼ���: ";
        cin >> English;
    }
    ~Grade()
    {
        delete[] Name;
    }

    //�̸� �ް�
    const char* getName() const
    {
        return Name;
    }

    // ����
    int getTotalScore() const
    {
        return Korean, Math, English;
    }

    // ���
    int getAverage() const
    {
        return getTotalScore() / 3;
    }
};


int main()
{
    //�л��� ����
   const int NUM_STUDENTS = 2;
   Grade students[NUM_STUDENTS];

   for (int i = 0; i < NUM_STUDENTS; ++i)
   {
       cout << students[i].getName() << "�� ����: " << students[i].getTotalScore() << ", ���: " << students[i].getAverage() << endl;
   }
   //���� ����



    return 0; 
}




