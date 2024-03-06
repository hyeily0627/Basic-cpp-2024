//5명의 이름과 국,영,수 3과목을 입력받아 학생별 총점과 평균, 그리고 과목별 총점과 평균을 구하시오 

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

        cout << "번째 학생의 이름을 입력하세요: ";
        cin >> Name;

        cout << "국어 점수를 입력하세요: ";
        cin >> Korean;

        cout << "수학 점수를 입력하세요: ";
        cin >> Math;

        cout << "영어 점수를 입력하세요: ";
        cin >> English;
    }
    ~Grade()
    {
        delete[] Name;
    }

    //이름 받고
    const char* getName() const
    {
        return Name;
    }

    // 총점
    int getTotalScore() const
    {
        return Korean, Math, English;
    }

    // 평균
    int getAverage() const
    {
        return getTotalScore() / 3;
    }
};


int main()
{
    //학생별 총점
   const int NUM_STUDENTS = 2;
   Grade students[NUM_STUDENTS];

   for (int i = 0; i < NUM_STUDENTS; ++i)
   {
       cout << students[i].getName() << "의 총점: " << students[i].getTotalScore() << ", 평균: " << students[i].getAverage() << endl;
   }
   //과목별 총점



    return 0; 
}




