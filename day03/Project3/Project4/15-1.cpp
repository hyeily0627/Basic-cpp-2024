#include <iostream>
#include "15.h"



void human::humanlifo()
	{
		std::cout << "name: " << name << " age: " << age << " job: " << job << std::endl;
	}

	
human::human(const char* aName, int anAge, const char* aJob)
	{
		strcpy(name, aName);
		age = anAge;
		strcpy(job, aJob);
	}

