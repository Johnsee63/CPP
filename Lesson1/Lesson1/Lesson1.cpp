// Lesson1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	setlocale(LC_ALL, "");		// ez beállítja az operációs rendszer által használt nyelvi környezetet.

	int x = 8;
	int y = 6;

	std::cout << std::endl;
	std::cout << x - y << " " << x * y << " " << x + y;
	std::cout << std::endl;

	//std::cout << "Helló világ!" << std::endl;

    return 0;
}

