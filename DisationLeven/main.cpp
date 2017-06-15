#include <iostream>
#include <vector>
#include <locale>
#include <algorithm>
#include <fstream>

#include "DistationLeven.h"

int main()
{
	setlocale(LC_CTYPE, "Russian");
	
	DistationLeven distationLeven;
	clock_t startRec = clock();
	std::cout << "антимоноп->антикор = "
		<< distationLeven.GetDistationRecursion("антимоноп", strlen("антимоноп"), "антикор", strlen("антикор")) << std::endl;
	clock_t stopRec = clock();
	std::cout << "Время выполнения: " << stopRec - startRec << std::endl;

	system("pause");
}