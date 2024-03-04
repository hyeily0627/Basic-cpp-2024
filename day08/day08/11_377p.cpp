#include <iostream>
using namespace std;

// Ŭ���� Data�� �䳻 �� ����
typedef struct Data
{
	int data;
	void (*showData)(Data*);				// ����Լ� ����
	void (*Add)(Data*, int);				// ����Լ� ����
} Data;

void ShowData(Data* THIS)					// showData ����Լ� ���� 
{ 
	cout << "Data: " << THIS->data << endl;
}
void Add(Data* THIS, int num)				// Add ����Լ� ����
{ 
	THIS->data += num;
}

// ������ ����� main �Լ�
int main()
{
	Data obj1 = { 15, ShowData, Add };		// Data ����ü ���� obj1 ����� �ʱ�ȭ 
	Data obj2 = { 7, ShowData, Add };
	
	obj1.Add(&obj1, 17);
	obj2.Add(&obj2, 9);
	obj1.showData(&obj1);
	obj2.showData(&obj2);
	return 0; 

}