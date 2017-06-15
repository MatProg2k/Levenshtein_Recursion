#include "DistationLeven.h"
#include <vector>
#include <map>

int DistationLeven::GetDistationRecursion(std::string str_1, int size_1, std::string str_2, int size_2)
{
	int result = 0;

	if (size_1 == NULL)
	{
		result = size_2;
	}
	else if (size_2 == NULL)
	{
		result = size_1;
	}
	else if ((size_1 == 1) && (size_2 == 1) &&
		(str_1[0] == str_2[0]))
	{
		result = NULL;
	}
	else if ((size_1 == 1) && (size_2 == 1) &&
		(str_1[0] != str_2[0]))
	{
		result = 1;
	}
	else
	{
		result = this->Min(
			GetDistationRecursion(str_1.substr(0, size_1 - 1), str_1.substr(0, size_1 - 1).length(), str_2, str_2.length()) + 1,
			GetDistationRecursion(str_1, str_1.length(), str_2.substr(0, size_2 - 1), str_2.substr(0, size_2 - 1).length()) + 1,
			GetDistationRecursion(str_1.substr(0, size_1 - 1), str_1.substr(0, size_1 - 1).length(),
			str_2.substr(0, size_2 - 1), str_2.substr(0, size_2 - 1).length()) + this->ReplaceCoast(str_1[str_1.length() - 1], str_2[str_2.length() - 1]));
	}
	return result;
}

int DistationLeven::ReplaceCoast(char first, char second)
{
	if (first == second)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int DistationLeven::Min(int value_1, int value_2, int value_3)
{
	if ((value_1 <= value_2) && (value_1 <= value_3))
		return value_1;
	else if ((value_2 <= value_1) && (value_2 <= value_3))
		return value_2;
	else
		return value_3;
}
