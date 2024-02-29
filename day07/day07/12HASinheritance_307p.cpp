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
45행 pman.state(); 

	int getbullet()
	{
		return bullet;
	}
으로 함수로 만들어주었는데, 그 이유는 bullet이 private이기때문에 상속받아서 사용 불가하기때문

void state()
	{
		cout << getbullet() << ", " << handcuffs << endl;
따라서 bullet은 public에 생성된 함수로 가져오고, handcuffs는 Police내에 있는 변수이므로 그대로 사용

*/