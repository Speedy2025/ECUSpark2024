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


int* fillTemp(const char fileContents[], int question)
{
	int fillers[8], fcount = 0;

	for (int x = 0; x < 8; x++)
	{
		if (x == 1 || x == 3 || x == 5)
		{
			fillers[x-1] = rnd();
		}
		else if (x == 2 || x == 4)
		{
			fillers[x-1] = rndw();
		}
		else if (x == 6)
		{
			fillers[x-1] = rndr(5);
		}
		else if (x == 7)
		{
			fillers[x-1] = fillers[5] * fillers[1];
		}
		else if (x == 8)
		{
			fillers[x - 1] = (fillers[4] - fillers[5]) * fillers[3];
		}
	}

	return fillers;
}

void displayQuestion(const char fileContents[], const int filler[])
{
	for (int character = 0; character != '\0'; character++)
	{
		if (fileContents[character - 1] == '#')
		{
			continue;
		}
		if (fileContents[character] == '#')
		{
			switch (fileContents[character])
			{
			case 1:
				std::cout << filler[0];
				break;
			case 2:
				std::cout << filler[1];
				break;
			case 3:
				std::cout << filler[2];
				break;
			case 4:
				std::cout << filler[3];
				break;
			case 5:
				std::cout << filler[4];
				break;
			case 6:
				std::cout << filler[5];
				break;
			case 7:
				std::cout << filler[6];
				break;
			case 8:
				std::cout << filler[7];
				break;
			}
		}

		std::cout << fileContents[character];

	}
}


