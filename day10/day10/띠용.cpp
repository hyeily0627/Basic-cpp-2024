#include <iostream>
#include <cstring> // 문자열 처리를 위해 필요합니다.
using namespace std;

class Grade
{
private:
    char* Name;
    int Korean;
    int Math;
    int English;

public:
    // 생성자: 이름과 세 과목의 성적을 받아들임
    Grade(const char* n, int kor, int mat, int eng) : Korean(kor), Math(mat), English(eng)
    {
        Name = new char[strlen(n) + 1];
        strcpy(Name, n);
    }

    // 디폴트 생성자: 사용자로부터 이름과 세 과목의 성적을 입력받음
    Grade()
    {
        Name = new char[50];

        cout << "학생의 이름을 입력하세요: ";
        cin >> Name;

        cout << "국어 점수를 입력하세요: ";
        cin >> Korean;

        cout << "수학 점수를 입력하세요: ";
        cin >> Math;

        cout << "영어 점수를 입력하세요: ";
        cin >> English;
    }

    // 소멸자: 동적으로 할당된 메모리를 해제합니다.
    ~Grade()
    {
        delete[] Name;
    }

    // 총점을 계산하는 메서드
    int getTotalScore() const
    {
        return Korean + Math + English;
    }

    // 평균을 계산하는 메서드
    float getAverage() const
    {
        return getTotalScore() / 3.0f;
    }

    // 이름을 반환하는 메서드
    const char* getName() const
    {
        return Name;
    }

    // 국어 점수를 반환하는 메서드
    int getKoreanScore() const
    {
        return Korean;
    }

    // 수학 점수를 반환하는 메서드
    int getMathScore() const
    {
        return Math;
    }

    // 영어 점수를 반환하는 메서드
    int getEnglishScore() const
    {
        return English;
    }
};

int main()
{
    const int NUM_STUDENTS = 5;
    Grade students[NUM_STUDENTS];

    // 각 학생의 이름과 성적 출력
    cout << "학생별 총점과 평균" << endl;
    for (int i = 0; i < NUM_STUDENTS; ++i)
    {
        cout << students[i].getName() << "의 총점: " << students[i].getTotalScore() << ", 평균: " << students[i].getAverage() << endl;
    }

    // 과목별 총점과 평균 계산
    int totalKorean = 0, totalMath = 0, totalEnglish = 0;
    for (int i = 0; i < NUM_STUDENTS; ++i)
    {
        totalKorean += students[i].getKoreanScore();
        totalMath += students[i].getMathScore();
        totalEnglish += students[i].getEnglishScore();
    }
    float avgKorean = totalKorean / static_cast<float>(NUM_STUDENTS);
    float avgMath = totalMath / static_cast<float>(NUM_STUDENTS);
    float avgEnglish = totalEnglish / static_cast<float>(NUM_STUDENTS);

    // 과목별 총점과 평균 출력
    cout << "국어 과목의 총점: " << totalKorean << ", 평균: " << avgKorean << endl;
    cout << "수학 과목의 총점: " << totalMath << ", 평균: " << avgMath << endl;
    cout << "영어 과목의 총점: " << totalEnglish << ", 평균: " << avgEnglish << endl;

    return 0;
}

