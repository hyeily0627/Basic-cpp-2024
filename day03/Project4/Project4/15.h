#pragma once

class human
{
private:
	char name[20];
	int age;
	char job[20];

public:
	human(const char* aName, int anAge, const char* aJob);
	void humanlifo();
};
