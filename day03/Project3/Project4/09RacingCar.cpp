#include <iostream>
using namespace std;

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10 

struct Car
{
	char gamerID[ID_LEN]; // 소유자 ID // char gamerID[5]
	int fuelGauge;		  // 연료량
	int curSpeed;		  // 현재속도
};

void ShowCarState(const Car& car)
{
	cout << "소유자ID: " << car.gamerID << endl;
	cout << "연료량: " << car.fuelGauge <<"%"<< endl;
	cout << "현재속도: " << car.curSpeed <<"km/s" << endl;

}

void Accel(Car& car)
{
	if (car.fuelGauge <= 0)
		return;
	else
		car.fuelGauge -= FUEL_STEP;

	if (car.curSpeed + ACC_STEP >= MAX_SPD)
	{
		car.curSpeed = MAX_SPD;
		return;
	}

	car.curSpeed += ACC_STEP;
}

void Break(Car& car)
{
	if (car.curSpeed < BRK_STEP)
	{
		car.curSpeed = 0; 
		return;
	}
	car.curSpeed -= BRK_STEP;
}

int main()
{
	Car run99 = { "run99", 100, 0 };
	Accel(run99);//(run99,98,10)
	Accel(run99);//(run99,96,20)
	ShowCarState(run99);
	Break(run99);//(run99,96,10)
	ShowCarState(run99);

	Car sped77 = { "sped77", 100, 0 };
	Accel(sped77);//(sped77,98,10)
	Break(sped77);//(sped77,98,0)
	ShowCarState(sped77);
	return 0; 
}
