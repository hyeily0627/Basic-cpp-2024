#include <iostream>

int main()
{
	int arr[5] = { 1,2,3,4,5 };				// int형 배열 선언
	int *parr = arr;						// 배열의 이름은 주소이다. 
	
	printf("arr 주소 : %p\n", arr);			// 출력 : 0000006F605BFAB8 =>1자리당 4비트.따라서 16진수 16자리는 총 64비트
	printf("arr 크기 : %u\n",sizeof(arr));	// 출력 : 20 => int크기 4바이트 * 방갯수 5 = 20byte
	
	printf("arr[0] 주소 : %p\n", &arr[0]);
	printf("arr[1] 주소 : %p\n", &arr[1]);
	/*
	arr[0] 주소 : 00000045516FFB28
	arr[1] 주소 : 00000045516FFB2C    => 8 -> C 4바이트 증가 
	*/
	printf("arr + 1 : %p\n", arr+1);		// 출력 arr[1] 주소와 같다. 
	//-----------------------------------------------------------------------------------

	printf("parr 주소 : %p\n", &parr);		// 포인터 변수의 주소
	printf("parr 데이터 : %p\n", parr);		// 배열 arr의 주소 저장
	printf("parr +1 : %p\n", parr+1);		// 출력 arr[1] 주소와 같다. 
	printf("parr[0] : %d\t *pa:%d\t arr[0]:%d\n", parr[0], *parr, arr[0]);
	// 출력											1	   *pa:1  arr[0]:1
	//		arr의 방 0번 숫자 1  
	return 0; 
}