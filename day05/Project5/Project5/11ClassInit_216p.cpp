#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class SoSimple						  // SoSimple Ŭ���� ����
{
private:
    int num1;							// ������ ��� ���� num1
    int num2;							// ������ ��� ���� num2
public:
    SoSimple(int n1, int n2)		  // �� ���� ������ �޴� ������
        : num1(n1), num2(n2)		  // ��� �̴ϼȶ������� ����Ͽ� ��� ���� �ʱ�ȭ
    {
        // ������ ������ ��� ����
    }

    SoSimple(SoSimple& copy)		  // ���� ������ ����
        : num1(copy.num1), num2(copy.num2)  // �ٸ� SoSimple ��ü�� �޾� �� ��ü�� num1�� num2�� �����Ͽ� �ʱ�ȭ
    {
        cout << "Called SoSimple(SoSimple &copy)" << endl;  // ���� �����ڰ� ȣ��� �� �޽��� ���
    }

    void ShowSimpleData()			// ��� ���� ���� ����ϴ� �޼���
    {
        cout << num1 << endl;
        cout << num2 << endl;
    }
};

int main(void)
{
    SoSimple sim1(15, 30);			// SoSimple ��ü sim1�� �����ϰ� �ʱ�ȭ
    cout << "���� �� �ʱ�ȭ ����" << endl;
    SoSimple sim2 = sim1;			// SoSimple ��ü sim2�� ���� �����ڸ� ���� sim1�κ��� �ʱ�ȭ
    cout << "���� �� �ʱ�ȭ ����" << endl;
    sim2.ShowSimpleData();			// sim2�� ��� ���� �� ���
    return 0;
}
