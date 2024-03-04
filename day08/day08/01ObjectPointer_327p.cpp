/*
p. 326 

Person* ptr;				  // Person 타입의 객체 포인터 형성 
Person* ptr = new Person();   // 가능

Person p = new Person();	  // 불가능

위 가능/불가능에 대해서 이해하기

*/
#include <iostream> 
using namespace std;

class Person
{
public:
	void Sleep()
	{
		cout << "sleep" << endl;
	}
};
class Student : public Person
{
public :
	void Study()
	{
		cout << "study" << endl; 
	} 
	void Sleep()					       // 오버라이딩 : 상속관계에서 사용
	{
		cout << "sleep now" << endl;  
	}

};

/*
오버라이딩(Overriding)은 파생 클래스에서 기본 클래스에 이미 정의된 함수를 같은 이름으로 다시 정의하는 것을 의미
파생 클래스에서 기본 클래스의 멤버 함수를 재정의하여 새로운 동작을 제공

하지만, 주의해야 할 점은 파생 클래스에서 함수를 오버라이딩할 때 함수 시그니처(이름과 매개변수 목록)가 기본 클래스의 것과 정확히 일치해야 한다는 것
함수 시그니처가 다르면 오버로딩(Overloading)이 발생. 하지만, 이 경우 함수 시그니처는 동일하기 때문에 오버라이딩됨
*/

class PartTimeStudent : public Student    // 멤버 함수 3개
{
public :
	void Work()							  // Work가 원래 자기 멤버함수, Sleep과 Student는 상속
	{
		cout << "work" << endl;
	}
};

int main()
{	//부모객체포인터로 자녀객체를 가리킬 수 있다. 
	Person* ptr1 = new Student();			
	// 원칙은 Student* ptr1 = new Student(); -> 동일한 타입으로 사용!
	Person* ptr2 = new PartTimeStudent();		
	Student* ptr3 = new PartTimeStudent();
	ptr1->Sleep();							// 포인터로 sleep 객체 접근 ( -> 사용)
	ptr2->Sleep();
	ptr3->Study();
	delete ptr1; delete ptr2; delete ptr3;
	return 0;
}

/*
부모타입의 객체 포인터로 자식 객체를 가리킬 수 있다.
하지만 자식타입의 객체 포인터로 부모 객체를 가리킬 수 없다.
그리고 접근은 객체 포인터의 타입을 따른다. 
*/