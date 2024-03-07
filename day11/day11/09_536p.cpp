#include <iostream>
using namespace std;

// ���ø� �Լ� ����: �� ���� ������ Ÿ���� �Ű������� �޾Ƶ��̰�, ū ���� ��ȯ�ϴ� Max �Լ�
template <typename T>
T Max(T a, T b)
{
    // a�� b�� ���Ͽ� ū ���� ��ȯ
    return a > b ? a : b;
}

int main()
{
    // Max �Լ� ȣ��, int�� �Ű������� 11�� 15�� �����Ͽ� �� �� �� ū ���� ���
    cout << Max(11, 15) << endl;
    // ���: 15

    // Max �Լ� ȣ��, char�� �Ű������� 'T'�� 'Q'�� �����Ͽ� �� �� �� ū ���� ���
    cout << Max('T', 'Q') << endl;
    // ���: T

    // Max �Լ� ȣ��, double�� �Ű������� 3.5�� 7.5�� �����Ͽ� �� �� �� ū ���� ���
    cout << Max(3.5, 7.5) << endl;
    // ���: 7.5

    // Max �Լ� ȣ��, const char* �� �Ű������� "simple"�� "best"�� �����Ͽ� �� ���ڿ� �� ū ���� ���
    cout << Max("simple", "best") << endl;
    // ���: simple

    return 0;
}
