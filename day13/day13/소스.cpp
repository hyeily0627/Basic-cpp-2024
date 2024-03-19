#include <iostream>

using namespace std;

int main() {

    char ary[] = { 'a','b','c','d','e','f' };
    int length = sizeof(ary) / sizeof(char);
    char temp;
    int L = 0;
    int R = length - 1;

    while (L < (length / 2)) {
        int temp = ary[L];
        ary[L] = ary[R];
        ary[R] = temp;
        L += 1;
        R -= 1;
    }

    for (int i = 0; i < length; i++)
    {
        printf("%c ", ary[i]);
    }

    return 0;
}