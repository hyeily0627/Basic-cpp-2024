#include <iostream>
using namespace std;

class SelfRef
{
private:
    int num; // ������ ���� num
public:
    SelfRef(int n) : num(n) // ������. ���ڷ� ���� ���� num�� �Ҵ�
    {
        cout << "��ü����" << endl; // ��ü�� ������ �� �޽��� ���
    }

    // ������ �޾� num�� ���� �� �ڱ� �ڽ��� �����ϴ� ��ü�� ��ȯ�ϴ� �޼���
    SelfRef& Adder(int n)
    {
        num += n;
        return *this; // �ڱ� �ڽ��� �����ϴ� ��ü ��ȯ
    }

    // num ���� ����ϰ� �ڱ� �ڽ��� �����ϴ� ��ü�� ��ȯ�ϴ� �޼���
    SelfRef& ShowTwoNumber()
    {
        cout << num << endl; // num �� ���
        return *this; // �ڱ� �ڽ��� �����ϴ� ��ü ��ȯ
    }
};


int main(void)
{
	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2);

	obj.ShowTwoNumber();
	ref.ShowTwoNumber();

	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	return 0;
}
