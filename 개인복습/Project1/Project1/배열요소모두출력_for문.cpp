#include <iostream>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };    // ũ�Ⱑ 10�� int�� �迭

    for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)    // �迭�� ��� ������ŭ �ݺ�
    {
        std::cout << numArr[i] << std::endl;    // �迭�� �ε����� �ݺ����� ���� i�� ����
    }

    return 0;
}
