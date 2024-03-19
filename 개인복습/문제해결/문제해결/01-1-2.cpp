/*
프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아, 입력 받은 데이터를 그대로 출력하는 프로그램 작성
*/

#include <iostream>
using namespace std;

int main()
{
	char Name[100];
	char Number[100];

	cout << "이름 : ";
	cin >> Name;

	cout << "번호 : " ;
	cin >> Number;
	
	cout << "이름: " << Name << endl;
	cout << "번호: " << Number << endl;

	return 0;
}