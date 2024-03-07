#include <iostream>
using namespace std;

// ���ø� �Լ� ����: �� ���� ���ø� Ÿ���� �޾Ƶ��̴� ShowData
template <class T1, class T2>
void ShowData(double num)
{
    // num�� T1�� T2 Ÿ������ ĳ�����Ͽ� ���
    cout << (T1)num << " ," << (T2)num << endl;
}

int main()
{
    // ShowData �Լ� ȣ��, T1�� char, T2�� int�� �����ϰ� 65�� ���ڷ� ����
    ShowData<char, int>(65);
    // ���: A, 65

    // ShowData �Լ� ȣ��, T1�� char, T2�� int�� �����ϰ� 67�� ���ڷ� ����
    ShowData<char, int>(67);
    // ���: C, 67

    // ShowData �Լ� ȣ��, T1�� char, T2�� double�� �����ϰ� 68.9�� ���ڷ� ����
    ShowData<char, double>(68.9);
    // ���: D, 68.9

    // ShowData �Լ� ȣ��, T1�� short(���� �κи� ����), T2�� double�� �����ϰ� 69.2�� ���ڷ� ����
    ShowData<short, double>(69.2);
    // ���: 69, 69.2 

    // ShowData �Լ� ȣ��, T1�� short, T2�� double�� �����ϰ� 70.4�� ���ڷ� ����
    ShowData<short, double>(70.4);
    // ���: 70, 70.4

    return 0;
}
