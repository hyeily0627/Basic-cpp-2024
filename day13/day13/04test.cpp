/*
char ary[] = {'a','b','c','d','e','f'}
while �� if�������� �迭 ������ �ٲپ� ���� ����Ͻÿ�. 
*/

#include <iostream>
using namespace std;

int main() {
    // �־��� ���� �迭 �ʱ�ȭ
    char ary[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    // �迭�� ũ�� ���
    int size = sizeof(ary) / sizeof(ary[0]);

    // �迭�� ���۰� �� �ε��� ����
    int start = 0;
    int end = size - 1;

    // �迭�� ������ �ٲٴ� while ����
    while (start < end) {
        // ¦�� ��° ��ġ�� �ִ� ���ҵ鸸 ��ȯ
        if (start % 2 == 0 && end % 2 == 0) {
            // �� ���Ҹ� ��ȯ�ϴ� �ڵ�
            char temp = ary[start];
            ary[start] = ary[end];
            ary[end] = temp;
        }
        // ���� �ε��� ����, �� �ε��� ����
        start++;
        end--;
    }

    // �ٲ� �迭 ���
    cout << "***�ٲ� �迭***" << endl;
    for (int i = 0; i < size; i++) {
        cout << ary[i]; // �� ���� ���
    }

    return 0;
}