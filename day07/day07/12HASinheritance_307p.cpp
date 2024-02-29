#include <iostream>
#include <cstring>
using namespace std;

class Gun
{
private:
	int bullet;
public:
	Gun(int bnum) : bullet(bnum)
	{}
	void Shot()
	{
		cout << "BBANG!" << endl;
		bullet--;
	}
	int getbullet()
	{
		return bullet;
	}
};

class Police : public Gun
{
private:
	int handcuffs;
public:
	Police(int bnum, int bcuff)
		:Gun(bnum), handcuffs(bcuff)
	{}
	void PutHandcuff()
	{
		cout << "SNAP!" << endl;
		handcuffs--;
	}
	void state()
	{
		cout << getbullet() << ", " << handcuffs << endl;
	}
};

int main()
{
	Police pman(5, 3);
	pman.state();
	pman.Shot();
	pman.PutHandcuff();
	pman.state();
	return 0;
}


/*
45�� pman.state(); 

	int getbullet()
	{
		return bullet;
	}
���� �Լ��� ������־��µ�, �� ������ bullet�� private�̱⶧���� ��ӹ޾Ƽ� ��� �Ұ��ϱ⶧��

void state()
	{
		cout << getbullet() << ", " << handcuffs << endl;
���� bullet�� public�� ������ �Լ��� ��������, handcuffs�� Police���� �ִ� �����̹Ƿ� �״�� ���

*/