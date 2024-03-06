#include <iostream>
using namespace std;

// AAA Ŭ���� ����
class AAA
{
private:
    int num; // ����� ��� ���� num
public:
    // �μ��� ������ �޴� ������, �⺻���� 0
    AAA(int n = 0) : num(n)
    {
        cout << "AAA(int n = 0)" << endl; // �����ڰ� ȣ��� �� �޽��� ���
    }

    // AAA ��ü�� ���� ���� ������, ��� ������ �μ��� ����
    AAA(const AAA& ref) : num(ref.num)
    {
        cout << "AAA(const AAA& ref)" << endl; // ���� �����ڰ� ȣ��� �� �޽��� ���
    }

    // AAA ��ü�� ���� ���� ������ �����ε�, ��� ������ �μ��� ����
    AAA& operator=(const AAA& ref)
    {
        num = ref.num; // ������ ��ü�� num ���� ����
        cout << "operator=(const AAA& ref)" << endl; // �Ҵ� �����ڰ� ȣ��� �� �޽��� ���
        return *this; // ������ ��ü�� ���� ���� ��ȯ
    }
};

// BBB Ŭ���� ����
class BBB
{
private:
    AAA mem; // AAA ������ ����� ��� ���� mem
public:
    // AAA ��ü�� ���� ��� ������ �μ��� �޴� ������
    BBB(const AAA& ref) : mem(ref) {} // ��� �ʱ�ȭ ����� ����Ͽ� mem�� ������ AAA ��ü�� �ʱ�ȭ
};

// CCC Ŭ���� ����
class CCC
{
private:
    AAA mem; // AAA ������ ����� ��� ���� mem
public:
    // AAA ��ü�� ���� ��� ������ �μ��� �޴� ������
    CCC(const AAA& ref) { mem = ref; } // ������ �������� ������ AAA ��ü�� mem�� �Ҵ�
};

// ���� �Լ�
int main()
{
    AAA obj1(12); // ���� 12�� AAA ��ü obj1 ����
    cout << "*****************" << endl; // ���� �޽��� ���

    BBB obj2(obj1); // obj1�� �����Ͽ� BBB ��ü obj2 ����
    cout << "*****************" << endl; // ���� �޽��� ���

    CCC obj3(obj1); // obj1�� �����Ͽ� CCC ��ü obj3 ����
    cout << "*****************" << endl; // ���� �޽��� ���

    return 0;
}
