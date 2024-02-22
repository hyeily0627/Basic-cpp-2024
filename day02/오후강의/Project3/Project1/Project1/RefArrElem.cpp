#include <iostream>

using namespace std;

int main()
{
	int arr[] = { 1, 3, 5 ,7, 9 }; // [n] = {방의 갯수 n개}  / 즉 [3] 인데 {1,2,3,4,5} 이면 에러
	for (int i = 0; i < 5; i++) {
		cout << i << "번째 방에 들어가는 요소값 : " << arr[i] << endl; //배열의 각 원소에 접근 
	}
	arr[3] = 10;
	cout << "arr[3]" << arr[3] << endl;

	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];

	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;

	return 0;
}

