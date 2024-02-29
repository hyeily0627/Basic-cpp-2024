#include <iostream>
using namespace std;

class SoSimple
{
private:
	static int simObjCnt;									// SoSimple내에 선언된 static 변수이니, SoSimple객체에 의해서 공유
public:
	SoSimple()
	{
		simObjCnt++;										// SoSimple 멤버변수(생성자)내에서는 마치 멤버변수'인 것처럼' 접근 가능
		cout << simObjCnt << "번째 SoSimple 객체" << endl;	// 그렇다고 해서 멤버변수로 오해하면 안된다. 
	}
};
int SoSimple::simObjCnt = 0;								// static 변수의 초기화 -> 클래스 외부에서 초기화 

class SoComplex
{
private:
	static int cmxObjCnt;									// SoComplex내에 선언된 static 변수이니, SoComplex객체에 의해서 공유
public:
	SoComplex()
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
};
int SoComplex::cmxObjCnt = 0;								// static 변수의 초기화 -> 클래스 외부에서 초기화 

int main(void)
{
	SoSimple sim1;
	SoSimple sim2;

	SoComplex cmx1;
	SoComplex cmx2 = cmx1;
	SoComplex();
	return 0;
}