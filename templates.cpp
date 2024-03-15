#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

int rnd()
{
	return rand() % 20 + 1;
}
int rndn()
{
	if (rand() % 2 == 0)
	{
		return (rand() % 20 + 1) * -1;
	}
	return rand() % 20 + 1;
}
int rndw()
{
	if (rand() % 4 == 0)
	{
		return (rand() % 20 + 1);
	}
	return 1;
}
int rndr(int num) 
{
	return rand() % num;
}
double rndd()
{
	return (rand() % 2000)/100.0;
}