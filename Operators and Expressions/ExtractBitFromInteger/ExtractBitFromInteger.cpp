#include "stdafx.h"
#include <iostream>

using namespace std;

//Write an expression that extracts from given integer n the value of given bit at index p.

int main()
{
	unsigned int numberToCheck = 62241;
	short bitToExtract = 11;

	int bitMask = 1 << bitToExtract;
	int result = (numberToCheck & bitMask) >> bitToExtract;

	cout << "Bit at:" << bitToExtract << " is: " << result << std::endl;

    return 0;
}

