#include <iostream>
using namespace std;

class SoSimple
{
public:							// static 멤버변수가 public으로 선언
	static int simObjCnt;				
public:
	SoSimple()
	{
		simObjCnt++;
	}
};
int SoSimple::simObjCnt = 0;	// static 멤버변수 초기화

int main()
{
	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;		// public으로 선언된 static 멤버는 어디서든 접근이 가능 
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl;
	return 0;
}