#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class Grade
{
private:
    char* Name;
    int Korean;
    int Math;
    int English;

public:
    Grade()
    {
        Name = nullptr;
        Korean = 0;
        Math = 0;
        English = 0;
    }
   void aGrade(const char* n, int kor, int mat, int eng)
    {
        this->Name = new char[strlen(n) + 1];
        strcpy(this->Name, n);
        Korean = kor;
        Math = mat;
        English = eng;
    }
    ~Grade()
    {
        delete[] Name;
    }
    int sum() const
    {
        return Korean + Math + English;
    }
    double average() const
    {
        return sum() / 3.0;
    }
    int getKo() const
    {
        return Korean;
    }
    int getMa() const
    {
        return Math;
    }
    int getEn() const
    {
        return English;
    }
};

int main()
{
    //const int NUM_STUDENTS = 2;
    //Grade GradeAry[NUM_STUDENTS];     // 객체배열

    int Korean;
    int Math;
    int English;

    char Name[50];
    int count_stu;
    cout << "성적처리 학생 수: ";
    cin >> count_stu; 
    vector<Grade>GradeAry(count_stu);                   // 동적으로 배열 할당


    for (int i = 0; i < count_stu; ++i) {

        cout << "학생의 이름을 입력하세요: ";
        cin >> Name;

        cout << "국어 점수를 입력하세요: ";
        cin >> Korean;

        cout << "수학 점수를 입력하세요: ";
        cin >> Math;

        cout << "영어 점수를 입력하세요: ";
        cin >> English;

        cout << "이름 : " << Name << " => " << "국어점수 : " << Korean << " , " << "수학점수 : " << Math << " , " << "영어점수 : " << English << endl;

        GradeAry[i].aGrade(Name, Korean, Math, English);

        cout << "이름 : " << Name << " => " << "합계 : " << GradeAry[i].sum() << " , " << "평점 : " << GradeAry[i].average() << endl;
    }

    int totalKo = 0;
    int totalMa = 0;
    int totalEn = 0;

    for (int i = 0; i < count_stu; ++i)
    {
        totalKo += GradeAry[i].getKo();
        totalMa += GradeAry[i].getMa();
        totalEn += GradeAry[i].getEn();

    }
    cout << "\n과목별 점수 및 평균" << endl;
    cout << "국어점수 합계 : " << totalKo << " , " << "수학점수 합계 : " << totalMa << " , " << "영어점수 합계 : " << totalEn << endl;
    cout << "국어점수 평균 : " << totalKo / 3 << " , " << "수학점수 평균 : " << totalMa / 3 << " , " << "영어점수 평균 : " << totalEn / 3 << endl;


    return 0;
}
