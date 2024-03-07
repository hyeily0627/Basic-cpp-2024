#include <iostream>
using namespace std;

int main()
{
	int code = 97;
	cout << code << endl;							// 97
	cout << (char)code << endl;						// a (아스키 코드 97번을 문자로 출력)
	cout << "==============================" << endl;

	char ary[6] = { 'a','b','c','d','e' };			// 문자열 타입의 배열 선언 
	cout << ary << endl;
	/*
	* [5]가아닌 [6]인 이유 :  C 스타일 문자열을 사용할 때, 배열 크기에 널 종단 문자를 포함해야 합니다.
	char ary[6] = {'a', 'b', 'c', 'd', 'e', '\0'};
	*/

	char ary1[] = { 'a','b','\0','d','e' };			// \0 : null 문자  - 문자열의 끝을 알림 
	cout << ary1 << endl;							// ab 
	cout << sizeof(ary1) << endl;					// 5
	/*
	sizeof(ary1)은 널 종단 문자를 포함하여 배열의 요소 수를 세는 것이 아니라, 단순히 배열의 전체 바이트 크기를 반환하므로 5가 됩니다.
	*/
	cout << strlen(ary1) << endl;					// null문자 앞까지의 크기								//Stack 영역에 형성 
	cout << "==============================" << endl;

	char str[] = "string";							
	cout << str << endl;							// string	
	cout << sizeof(str) << endl;					// 7 : 자동으로 null문자 붙어서 6이 아닌 7 
	/*따라서 sizeof(str)은 배열 str의 전체 바이트 크기를 반환하며, 널 종단 문자를 포함하여 총 7바이트.*/
	cout << strlen(str) << endl;					// 6 	
	cout << "33==============================" << endl;

	const char* pstr = "STRING";																			//데이터 영역에 형성 
	cout << pstr << endl;							// STRING
	cout << sizeof(pstr) << endl;					// 8
	/*
	여기서 pstr은 문자열 "STRING"의 첫 번째 문자를 가리키는 포인터입니다. 대부분의 시스템에서 포인터의 크기는 일반적으로 4바이트 또는 8바이트입니다.
	따라서 sizeof(pstr)은 포인터의 크기를 반환합니다. 만약 64비트 아키텍처를 사용하는 경우 포인터의 크기는 일반적으로 8바이트입니다. 이렇게 되면 sizeof(pstr)은 8이 됩니다.
	포인터의 크기는 플랫폼에 따라 다를 수 있으며, 위의 경우 8바이트로 처리된 것입니다.
	*/

	// 포인터 크기 예시 
	int a = 100;
	int* pa = &a;
	cout << sizeof(pa) << endl;						// 역시 포인터 크기인 8 출력

	cout << strlen(pstr) << endl;					// 6 


	cout << "==============================" << endl;

	string s = "string";
	cout << s << endl;
	cout << sizeof(s) << endl;						// 40 string 타입의 객체에 문자열 삽입시는 크기는 기본적으로 40이다. 
	//cout << strlen(s) << endl; 안됨
	cout << s.size() << endl;						// 6 

	string s1 = "ohhyejin";
	cout << s1 << endl;
	cout << sizeof(s1) << endl;						// 40 string 타입의 객체에 문자열 삽입시는 크기는 기본적으로 40이다.
	cout << s1.size() << endl;						// 8
	cout << s1.capacity() << endl;					// 15 

	/*
	string 클래스의 capacity() 함수는 현재 string 객체가 할당된 메모리의 용량(capacity)을 반환합니다. 이 값은 string 객체가 내부적으로 관리하는 동적 할당된 메모리의 크기를 나타냅니다.

일반적으로 capacity()는 실제 문자열의 길이보다 크거나 같은 값을 반환합니다. 이는 문자열이 계속 확장되거나 변경될 수 있기 때문입니다. 더 큰 용량을 할당함으로써 문자열이 확장되는 경우, 추가적인 메모리 할당 및 복사 작업이 필요하지 않도록 미리 공간을 확보할 수 있습니다. 이렇게 함으로써 문자열에 대한 추가 작업이 더 빠르게 수행될 수 있습니다.

capacity() 값은 구현에 따라 달라질 수 있으며, string 클래스의 구현 방식과 메모리 관리 정책에 따라 달라집니다. 일반적으로 capacity() 값은 문자열이 추가되거나 변경될 때마다 조정됩니다.

이 경우에 s1.capacity()는 현재 할당된 메모리의 용량을 반환하는데, 문자열 "ohhyejin"을 저장하기에 충분한 용량을 할당했으므로 capacity() 값은 15입니다.
	
	*/

	return 0; 
}