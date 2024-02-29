#include <iostream>
using namespace std;

class SoSimple
{
private:
	static int simObjCnt;									// SoSimple���� ����� static �����̴�, SoSimple��ü�� ���ؼ� ����
public:
	SoSimple()
	{
		simObjCnt++;										// SoSimple �������(������)�������� ��ġ �������'�� ��ó��' ���� ����
		cout << simObjCnt << "��° SoSimple ��ü" << endl;	// �׷��ٰ� �ؼ� ��������� �����ϸ� �ȵȴ�. 
	}
};
int SoSimple::simObjCnt = 0;								// static ������ �ʱ�ȭ -> Ŭ���� �ܺο��� �ʱ�ȭ 

class SoComplex
{
private:
	static int cmxObjCnt;									// SoComplex���� ����� static �����̴�, SoComplex��ü�� ���ؼ� ����
public:
	SoComplex()
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
	}
	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
	}
};
int SoComplex::cmxObjCnt = 0;								// static ������ �ʱ�ȭ -> Ŭ���� �ܺο��� �ʱ�ȭ 

int main(void)
{
	SoSimple sim1;
	SoSimple sim2;

	SoComplex cmx1;
	SoComplex cmx2 = cmx1;
	SoComplex();
	return 0;
}