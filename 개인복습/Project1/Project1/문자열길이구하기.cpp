#include <iostream>
#include <cstring>    // strlen �Լ��� ����� ��� ����

int main()
{
    const char* s1 = "Hello";       // �����Ϳ� ���ڿ� Hello�� �ּ� ����
    char s2[10] = "Hello";    // ũ�Ⱑ 10�� char�� �迭�� �����ϰ� ���ڿ� �Ҵ�

    std::cout << std::strlen(s1) << std::endl;    // 5: strlen �Լ��� ���ڿ��� ���̸� ����
    std::cout << std::strlen(s2) << std::endl;    // 5: strlen �Լ��� ���ڿ��� ���̸� ����

    return 0;
}
