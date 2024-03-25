# Basic-cpp-2024 심화프로그래밍 2024 
부경대학교 2024 IoT 개발자 과정 - 심화 프로그래밍 언어

## 1일차
- 개발환경 설치
   - Visual Studio 2022 Community 설치
   - C, C++ 소스코드 실행
   - C++에 대해 설명

- 제어문
   1. 선택제어문 
      - if, switch
      - if, else 문(C언어종류) / elif = Python
      
   2. 반복제어문 
      - for,while
      - for(초기식; 조건식; 증감식){
         1. 초기식을 가지고 조건식을 따진다.
         2. 참이면 for문의 실행문 실행
         3. 증감식을 실행
         4. 조건식을 따지고
         2.
         3.
         4.
         2.
         3.
         4.
         .
         .
         .
      }

   
- 지역변수 = 로컬변수
   1. 선언되어진 범위 안에서만 사용이 가능(static 영역에 저장)

- 자료형
   1. 문자 : 문자(char),문자열
   2. 숫자 : 정수(int),실수

- 함수 오버로딩(다중정의) (<-> 오버라이딩 : 재정의)
    : 함수호출시 전달되는 인자를 통해서 호출하고자 하는 함수의 구분이 가능 => C++는 이를 허용함
    = 즉, 입력(매개변수)이 다르면 구분됨! 
   

## 2일차(정보처리기사 시험일/ 오전 결강) 

- swap 함수 구현

- class 안에 들어 가는 함수 = Method

- Default Value

- Reference 함수
	- 반환형 Reference Type
   
- Name Space

- 전역,지역변수

- C에서 메모리
	- 스택 : 지역변수, 매개변수
	- HEAP : 사용자에게 할당된 영역
		= Malloc() -> free()반환 = 사용을 할려면 Malloc으로 할당을 받는다
	- data: 함수, 전역변수, 상수, 문자 리터럴
	
	 ** A & B = 비트 And 연산자
	 ** A && B = 논리 And 연산자 = 논리 곱

## 3일차 
- Reference 함수(변수) = 계속

- MALLOC & FREE => NEW & DELETE(대신)
	= Malloc() -> free()반환 = 사용을 할려면 Malloc으로 할당을 받는다
	-> HEAP : 사용자에게 할당된 영역
	=> 사용을 할려면 Malloc()(C++: NEW)으로 할당을 받는다 => FREE(C++: DELETE로 반환)

- 접근제어 지시자
	- Public
	- Protected
	- Private

- Class
    - 멤버변수와 멤버함수로 구성
    - 클래스 내부에서 멤버들의 선언으로 작성
    - 멤버함수의 정의를 밖으로 빼낸다(스코프 연산자 사용)
    - 일반적으로 멤버변수는 Private, 멤버함수 Public의 접근제한을 사용 
	
- C++ 파일분할 (C++ 와 Head 파일로 분할하는 것 배움)

## 4일차 
- 생성자(클래스 이름과 같은 멤버함수로, 출력은 없다)
   : 객체 생성시 자동으로 호출되는 멤버함수
   : 모든 클래스는 디폴트 생성자를 가지고 있다.
   : 만약 명시적으로 생성자를 작성하면 디폴트 생성자의 호출은 불가하며 디폴트 생성자가 필요한 경우는 명시적으로 작성한다.
   : 멤버변수들의 초기화를 담당한다.

- 멤버 이니셜라이즈 (Member Initializer)
   : 객체 생성전에 선언과 동시 초기화가 필요한 경우에 사용한다. 
   : const 변수와 참조변수의 초기화에 사용

- Class
	- 멤버변수와 멤버함수로 구성된다.
	- 클래스 내부에는 멤버들의 선언을 작성
	- 멤버함수의 정의를 외부로 뺌(Scope 연산자 사용)
	- 일반적으로 멤버변수 = Private, 멤버함수= Public의 접근제한을 사용
	- 생성자(기능:객체를 생성하고, 초기화)

- 클래스(Class) 와 객채(Object)
- 객체지향 프로그래밍의 이해 
- 정보은닉
- 생성자와 소멸자
	a. SimpleClass sc(20) 
	- 주어진 코드는 SimpleClass라는 클래스의 객체 sc를 생성. 
	- 이 객체는 생성자에 정수 값 20을 전달하여 초기화
		
	b. SimpleClass *ptr = new SimpleClass()
	- SimpleClass 클래스의 포인터를 생성하고, 동적으로 메모리를 할당하여 객체를 초기화.
	- 여기서 new 연산자는 힙(heap) 메모리에서 동적으로 객체를 생성하고, 해당 객체에 대한 포인터를 반환.
	- SimpleClass *ptr은 SimpleClass 타입을 가리키는 포인터를 선언.
	- new SimpleClass()는 SimpleClass의 기본 생성자를 호출하여 객체를 생성. 이후 반환된 포인터는 ptr에 할당.
	- 따라서 ptr은 힙 메모리에 동적으로 생성된 SimpleClass 객체를 가리키는 포인터


- strcpy, Private, Public

## 5일차
- C++
	- 객체 지향
	- 캡슐화
	- 생성자
	- new delete -> 힙영역 메모리에 저장 및 삭제

- 생성자 불일치
	- 매개변수가 void형으로 선언되는 디폴트 생성자
	- 생성자가 하나도 정의되어 있지 않을때에만 삽입이 됨!
	
- Private 생성자
	- 생성자들은 모두 Public으로 선언
	- 객체의 생성이 클래스의 외부에서 진행도기 때문에 생성자는 Public으로 선언
	
- 소멸자 => 객체 생성시 반드시 호출되는 것이 생성자 -> 객체 소멸시 반드시 호출 되는 것은 소멸자

- 메모리 동적할당 : new 연산자 사용
	- 프로그램 실행 중 = 메모리 할당
	
- 객체 배열

```c++ 
SoSimple arr[10];

c++ 동적으로 할당할 경우
SoSimple *ptrArr = new SoSimple[10]

```
- 포인터배열 : 포인터를 저장하는 배열
- 배열 포인터 : 배열을 가리키는 포인터
- 복사 생성자, 디폴트 생성자


## 6일차
- 깊은 복사와 얕은 복사
- 복사 생성자의 호출 시점
	1. 기존에 생성된 객체 => 새로운 객체를 초기화
	2. Call-By-Value 방식의 함수호출 과정에서 객체를 인자로 전달
	3. 객체를 반환 -> 참조형으로는 반환 X
	
- Return Object Dead Time

- friend

- static

- const
	1. 객체와 객체의 특성들
	2. 함수 오버 로딩
	3. 함수의 Friend 선언

- C++ 에서의 Static

## 7일차
- static 멤버변수(클래스 변수)
	- const static
	
- mutable: const 함수에 대하여 예외를 둠

- string 문자열 사용시 strcpy를 사용하지 않고 사용가능 
(08Inheritance선생님출력.cpp 참고)

- 상속(INHERITANCE)
	- 상속 시 class (name) :public (name) 및 각 변수도 지정. 단, 확장 시 추가 해야함
	- 상속 예시
```C++
class Person {
private:
    char name[50];
    int age;
public:
    Person(const char* myname, int myage) : age(myage) {
        strcpy(name, myname);
    }
    void WhatYourName() const {
        cout << "My name is " << name << endl;
    }
    void HowOldAreYou() const {
        cout << "I'm " << age << " years old" << endl;
    }
};

class UnivStudent : public Person {
private:
    string major;
public:
    UnivStudent(const char* myname, int myage, const char* mymajor) : Person(myname, myage), major(mymajor) {
        cout << "자식 생성자 호출" << endl;
    }
    void WhoAreYou() const {
        WhatYourName();
        HowOldAreYou();
        cout << "My major is " << major << endl;
    }
};
```

- 부모의 private를 사용하기 위하여 public에 함수를 만들어 return 값을 통해 사용가능
- string Showname(), int Showage() 은 private에 있는 변수 사용 불가하므로 만들어준 함수

```C++
class Myclass
{
private:
	char name[30];
	int age;
public:
	Myclass(const char* myname, int myage) : age(myage)
	{
		strcpy(name, myname);
	}
	string Showname() const
	{
		return name; 
	}
	int Showage()
	{
		return age;
	}
};

class MyInfo : public Myclass
{
private:
	char pNumber[20];
public:
	MyInfo(const char* myname, int myage, const char* phoneNumber)
		:Myclass(myname,myage)
	{
		strcpy(pNumber, phoneNumber);
	}
	void printMyInfo()
	{
		cout << "나의 이름은 " << Showname() << "이고, 나이는 " << Showage() << "이며, 전화번호는 " << pNumber << "입니다" << endl;
	}
	
};
int main()
{
	MyInfo p1("오혜진", 27, "01076961487");
	p1.printMyInfo();
	return 0;
}

```


## 8일차
- 다형성
	- 오버로딩(Overloading) : 다중정의 
		- 메서드의 이름은 같고 매개변수의 유형과 개수가 다르도록 하는 것을 의미한다.
		- 리턴값만을 다르게 갖는 오버로딩은 작성할 수 없다.
	- 오버라이딩(Overriding) : 재정의, 상속관계에서 사용
		- 상위 클래스가 가지고 있는 메서드를 하위 클래스가 재정의해서 사용하는 것을 의미한다.
		```C++
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

		```		
- 가상함수(virtual Function) : 가상 함수를 사용하면 파생 클래스에서 기본 클래스에 정의된 함수를 재정의할 수 있다. 
	- 동적으로 할당되는 것을 동적 바인딩(dynamic binding)
	- 가상 함수로 선언하기 위해서는 기본 클래스의 함수 선언 앞에 virtual 키워드를 붙여야 한다. 

- 순수 가상 함수(pure virtual function): 함수의 정의가 없는 가상 함수. 즉, 함수의 몸체가 없고 실행부가 없으며, 세미콜론으로만 선언
	- 형태: virtual 반환타입 함수이름(매개변수) = 0;
	- 순수 가상 함수를 가진 클래스는 추상 클래스(abstract class)로 간주 -> 객체 생성 불가


## 9일차 
- 연산자 오버로딩(Operator Overloading) : 우리가 만든 자료형(class)에도 사칙연산을 사용할 수 있어야하는데, 기본 연산자들을 사용할 수 없다. 따라서 연산자 오버로딩을 사용하여 기존의 연산자들을 사용하고자 하는 것이다. 
	- 멤버함수, 전역함수로 이용가능
	- 주의 사항
		1. 본래의 의도를 벗어난 연산자 오버로딩 X
		2. 연산자의 우선순위와 결합성은 바뀌지 않음
		3. 매개변수의 디폴트 값 설정 불가
		4. 연산자의 순수기능 제거 불가	

```C++
	class Myclass
{
private:
	int num;
public: 
	Myclass(int a = 0) : num(a)
	{ }
	void print() const
	{
		cout << "value : " << num << endl;
	}
	/* 
	멤버함수
	
	Myclass operator+(const Myclass& ref)
	{
		Myclass anum(num+ref.num);
		return anum;
	}
	*/

	// 전역함수 
	friend Myclass operator+(const Myclass& ref, const Myclass& re);
};

Myclass operator+(const Myclass& ref, const Myclass& re)
{
	Myclass anum(ref.num + re.num);
	return anum;
}

int main()
{
	Myclass a(10);
	a.print();					//value : 10

	Myclass b(a);
	b.print();					//value : 10

	Myclass c=b;
	b.print();					//value : 10

	Myclass d = a + b + c;
	d.print();					//value : 30

	return 0;
}
	```
- 단항연산자의 오버로딩 

## 10일차
- 배열의 인덱스 연산자 오버로딩

- new 와 delete의 오버로딩(new 와 delete도 연산자이다)

- 스마트포인터 
	-펑터(Functor)

## 11일차
- string 개념 

```
* https://en.cppreference.com/w/ c++ 개념 참조
```

- 함수템플릿(Template) : 자료형을 결정짓지 않고 나중에 T를 대신해서 실제 자료형을 결정 하겠다라는 의미
	- 객체지향언어의 다형성 일부이다. 
	```c++
	template <typename T>
	T Add(T num1, T num2)
	{
	return num1 + num2;
	}

	```
	- 템플릿함수 : 탬플릿을 기반으로 만들어진 함수

## 12일차 

## 13일차

- vector : 자동으로 메모리 할당 
	- 수정하기 힘들고, 고정적 크기인 배열을 보완하고자  c++에서 지원
	- 벡터를 사용하기 위해서는 템플릿을 사용해야한다. 