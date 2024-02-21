#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int ary[3] = { 10, 20, 30 }; //여기서 3은 크기를 나타내는 
	ary[0] = 111; // 인덱스 0번(10)을 111로 변경  / 여기서 0은 인덱스

	// 배열을 쓰면 데이터를 관리, 사용하기가 편하다. 

	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}
	return 0;
}

