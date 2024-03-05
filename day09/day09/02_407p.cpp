// �����Լ��� ������ �����ε�

#include <iostream>
using namespace std;

// Point Ŭ���� ����
class Point
{
private:
    int xpos, ypos; // x�� y ��ǥ�� �����ϴ� ��� ����
public:
    // ������ ����, ����Ʈ �Ű������� ����Ͽ� �ʱⰪ ����
    Point(int x = 0, int y = 0) : xpos(x), ypos(y)
    { }

    // ���� ��ǥ�� ����ϴ� ��� �Լ�
    void ShowPosition() const
    {
        cout << '[' << xpos << ", " << ypos << ']' << endl;
    }

    // �ܺ�(�ܺο��� ������ operator+ �Լ�)���� Point ��ü�� ���� ������ �����ϱ� ���� friend �Լ� ����
    friend Point operator+(const Point& pos1, const Point& pos2);
};

// �ܺο��� ������ operator+ �Լ� ����
Point operator+(const Point& pos1, const Point& pos2)
{
    // �� Point ��ü�� x ��ǥ�� y ��ǥ�� ���Ͽ� ���ο� Point ��ü ����
    Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
    return pos;
}

// ���� �Լ�
int main()
{
    // Point ��ü ���� �� �ʱ�ȭ
    Point pos1(3, 4);
    Point pos2(10, 20);

    // �� Point ��ü�� ���Ͽ� ���ο� Point ��ü ����
    Point pos3 = pos1 + pos2;

    // ������ Point ��ü�� ��ǥ ���
    pos1.ShowPosition();
    pos2.ShowPosition();
    pos3.ShowPosition();

    return 0;
}
