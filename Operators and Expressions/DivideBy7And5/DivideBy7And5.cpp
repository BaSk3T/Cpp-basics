#include "stdafx.h"
#include <iostream>

using namespace std;

//Write a Boolean expression that checks for given integer if it can be divided(without remainder) by 7 and 5 at the same time.

int main()
{
	int numberToCheck = 140;

	cout << "Number: " << numberToCheck << " is dividable by 7 and 5 without remainder: " << std::endl;

	if (numberToCheck % 5 == 0 && numberToCheck % 7 == 0)
	{
		cout << "true" << std::endl;
	}
	else
	{
		cout << "false" << std::endl;
	}

    return 0;
}
