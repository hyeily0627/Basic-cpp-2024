#include <iostream>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };    // ũ�Ⱑ 10�� int�� �迭

    std::cout << sizeof(numArr) << std::endl;                   // 40: 4����Ʈ ũ���� ��Ұ� 10���̹Ƿ� 40
    std::cout << sizeof(numArr) / sizeof(int) << std::endl;     // 10: �迭�� ũ�⸦ ���� ����
    // ��ü ������ ����� ũ��� ������

    return 0;
}
