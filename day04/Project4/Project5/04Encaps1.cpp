//Ä¸½¶È­°¡ ¹«³ÊÁø »ç·Ê 

#include <iostream>
using namespace std;

class SinivelCap //Äà¹° Ã³Ä¡¿ë Ä¸½¶
{
public:
	void Take() const { cout << "Äà¹°ÀÌ ³³´Ï´Ù." << endl; }
};

class SneezeCap //±âÄ§ Ã³Ä¡¿ë Ä¸½¶
{
public:
	void Take() const { cout << "ÀçÃ¤±â°¡ ¸Ü½À´Ï´Ù." << endl; }

};
class SnuffleCap //ÄÚ¸·Èû Ã³Ä¡¿ë Ä¸½¶ 
{
public:
	void Take() const { cout << "ÄÚ°¡ ¶Õ¸³´Ï´Ù." << endl; }
};

class ColdPatient
{
public:
	void TakeSinivelCap(const SinivelCap& cap) const { cap.Take(); }
	void TakeSneezeCap(const SneezeCap& cap) const { cap.Take(); }
	void TakeSnuffleCap(const SnuffleCap& cap) const { cap.Take(); }
};

int main(void)
{
	SinivelCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;

	ColdPatient sufferer;
	sufferer.TakeSinivelCap(scap);
	sufferer.TakeSneezeCap(zcap);
	sufferer.TakeSnuffleCap(ncap);
	return 0;
}