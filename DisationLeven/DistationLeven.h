#pragma once
#include <iostream>
#include <string>

//DistationLeven.h
class DistationLeven
{
public:
	int GetDistationRecursion(std::string str_1, int size_1, std::string str_2, int size_2);

private:
	int ReplaceCoast(char first, char second);
	int Min(int value_1, int value_2, int value_3);
};
 