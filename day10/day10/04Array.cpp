#include <iostream>

int main()
{
	int arr[5] = { 1,2,3,4,5 };				// int�� �迭 ����
	int *parr = arr;						// �迭�� �̸��� �ּ��̴�. 
	
	printf("arr �ּ� : %p\n", arr);			// ��� : 0000006F605BFAB8 =>1�ڸ��� 4��Ʈ.���� 16���� 16�ڸ��� �� 64��Ʈ
	printf("arr ũ�� : %u\n",sizeof(arr));	// ��� : 20 => intũ�� 4����Ʈ * �氹�� 5 = 20byte
	
	printf("arr[0] �ּ� : %p\n", &arr[0]);
	printf("arr[1] �ּ� : %p\n", &arr[1]);
	/*
	arr[0] �ּ� : 00000045516FFB28
	arr[1] �ּ� : 00000045516FFB2C    => 8 -> C 4����Ʈ ���� 
	*/
	printf("arr + 1 : %p\n", arr+1);		// ��� arr[1] �ּҿ� ����. 
	//-----------------------------------------------------------------------------------

	printf("parr �ּ� : %p\n", &parr);		// ������ ������ �ּ�
	printf("parr ������ : %p\n", parr);		// �迭 arr�� �ּ� ����
	printf("parr +1 : %p\n", parr+1);		// ��� arr[1] �ּҿ� ����. 
	printf("parr[0] : %d\t *pa:%d\t arr[0]:%d\n", parr[0], *parr, arr[0]);
	// ���											1	   *pa:1  arr[0]:1
	//		arr�� �� 0�� ���� 1  
	return 0; 
}