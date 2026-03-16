#include <iostream>

int main()
{
	int chis1 = 0, chis2 = 0;
	std::cout << "VVEDI CHISLA" << std::endl;
	std::cin >> chis1 >> chis2;
	if ((chis1 > chis2) && (chis1 < 100 && chis2 < 100) && (chis1 > -100 && chis2 > -100))
	{
		std::cout << "Chislo1>Chisla2 " << std::endl;
	}
	else if (chis2 > chis1 && (chis1 < 100 && chis2 < 100) && (chis1 > -100 && chis2 > -100))
	{
		std::cout << "Chislo1<Chisla2 " << std::endl;
	}
	else if ((chis1 < 100 && chis2 < 100) && (chis1 == chis2) && (chis1 > -100 && chis2 > -100))
	{
		std::cout << "Chislo1=Chislu2" << std::endl;
	}
	else
	{
		std::cout << "Ochibka Chislo vne diapozona " << std::endl;
	}
}
