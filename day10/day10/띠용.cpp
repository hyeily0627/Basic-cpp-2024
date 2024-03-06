#include <iostream>
#include <cstring> // ���ڿ� ó���� ���� �ʿ��մϴ�.
using namespace std;

class Grade
{
private:
    char* Name;
    int Korean;
    int Math;
    int English;

public:
    // ������: �̸��� �� ������ ������ �޾Ƶ���
    Grade(const char* n, int kor, int mat, int eng) : Korean(kor), Math(mat), English(eng)
    {
        Name = new char[strlen(n) + 1];
        strcpy(Name, n);
    }

    // ����Ʈ ������: ����ڷκ��� �̸��� �� ������ ������ �Է¹���
    Grade()
    {
        Name = new char[50];

        cout << "�л��� �̸��� �Է��ϼ���: ";
        cin >> Name;

        cout << "���� ������ �Է��ϼ���: ";
        cin >> Korean;

        cout << "���� ������ �Է��ϼ���: ";
        cin >> Math;

        cout << "���� ������ �Է��ϼ���: ";
        cin >> English;
    }

    // �Ҹ���: �������� �Ҵ�� �޸𸮸� �����մϴ�.
    ~Grade()
    {
        delete[] Name;
    }

    // ������ ����ϴ� �޼���
    int getTotalScore() const
    {
        return Korean + Math + English;
    }

    // ����� ����ϴ� �޼���
    float getAverage() const
    {
        return getTotalScore() / 3.0f;
    }

    // �̸��� ��ȯ�ϴ� �޼���
    const char* getName() const
    {
        return Name;
    }

    // ���� ������ ��ȯ�ϴ� �޼���
    int getKoreanScore() const
    {
        return Korean;
    }

    // ���� ������ ��ȯ�ϴ� �޼���
    int getMathScore() const
    {
        return Math;
    }

    // ���� ������ ��ȯ�ϴ� �޼���
    int getEnglishScore() const
    {
        return English;
    }
};

int main()
{
    const int NUM_STUDENTS = 5;
    Grade students[NUM_STUDENTS];

    // �� �л��� �̸��� ���� ���
    cout << "�л��� ������ ���" << endl;
    for (int i = 0; i < NUM_STUDENTS; ++i)
    {
        cout << students[i].getName() << "�� ����: " << students[i].getTotalScore() << ", ���: " << students[i].getAverage() << endl;
    }

    // ���� ������ ��� ���
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

    // ���� ������ ��� ���
    cout << "���� ������ ����: " << totalKorean << ", ���: " << avgKorean << endl;
    cout << "���� ������ ����: " << totalMath << ", ���: " << avgMath << endl;
    cout << "���� ������ ����: " << totalEnglish << ", ���: " << avgEnglish << endl;

    return 0;
}

