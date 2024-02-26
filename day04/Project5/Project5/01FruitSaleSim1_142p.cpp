#include <iostream>
using namespace std;

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money) // 생성자(기능: 객체를 생성하고 초기화)
	{
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}
	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}
	void ShowSaleResult()
	{
		cout << "남은 사과: " << numOfApples << endl;
		cout << "판매 수익: " << myMoney << endl << endl;
	}
};

class FruitBuyer
{
	int myMoney;			// private 
	int numOfApples;		// private 

public:
	void InitMembers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}
	void BuyApples(FruitSeller& seller, int money)  // main의 seller와 다름! 다만, 참조하고 있으므로 동일한 객체를 지칭 //헷갈리면 refseller로 바꿔보자
	{
		numOfApples +=seller.SaleApples(money);
		myMoney -= money;
	}
	void ShowBuyResult()
	{
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 갯수: " << numOfApples << endl << endl;
	}
};

int main(void)
{
	FruitSeller seller;							    // seller는 FruitSeller 타입의 객체
	seller.InitMembers(1000, 20, 0);				// seller 가격 1000 갯수 20 잔액 0 
	FruitBuyer buyer;
	buyer.InitMembers(5000);						// buyer 잔액 5000 갯수 0  
	buyer.BuyApples(seller, 2000);					// seller 가격 1000 갯수 18 잔액 2000 / buyer 갯수 2  잔액 3000 

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSaleResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();
	return 0;
}