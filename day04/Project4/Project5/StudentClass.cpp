#include <iostream>
using namespace std;

class StudentClass
{
private:
	const int Id;
	char Name[20];
	char Major[20];
	int Age;

public:
	// 문자열은 주소기 때문에 포인터 변수에 넣어서 사용한다. - 문장열의 첫번째 문자 주소가 저자오딘다
	// 멤버이니셜라이즈는 객체 생성시 초기화 되지 않는 멤버들을 초기화할때 사용한다. 

	StudentClass(int a, const char *pName, const char *pMajor, int aAge) :Id(a)//멤버 이니셜라이즈  - 생성자 호출
	{
		//int Id = aId;
		strcpy(Name, pName); // 문자열 배열을 선언하고 바로 초기화 하지 않은 경우는 strcpy()를 통해 초기화  - 생성자 실행
		strcpy(Major, pMajor);
		Age = aAge;
	}

	void ShowStudentInfo() const
	{
		std::cout << "id: " << Id << "name" << Name << " major: " << Major << " age: " << Age << std::endl;
	}

};

int main()
{
	StudentClass a1(32, "오혜진" , "his" , 27);


	return 0;
}
