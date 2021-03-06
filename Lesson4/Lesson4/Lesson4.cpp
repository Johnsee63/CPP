// Lesson4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void ValuesToArray()
{
	const int ArrayLenght = 5;
	int myNumbers[ArrayLenght] = { 0 };	//Ötelemű tömb létrehozása és feltöltése "0"-kal.

	cout << endl;
	cout << "Kérem a módosítandó tömbelem indexét (0..4): ";
	int nElementIndex = 0;
	cin >> nElementIndex;
	cout << endl;
	cout << "Kérem a módosítandó elem értékét: ";
	cin >> myNumbers[nElementIndex];

	cout << endl;
	cout << "   Az első elem (hivatkozási index 0) értéke: " << myNumbers[0] << endl;
	cout << "Az második elem (hivatkozási index 1) értéke: " << myNumbers[1] << endl;
	cout << "A harmadik elem (hivatkozási index 2) értéke: " << myNumbers[2] << endl;
	cout << "A negyedik elem (hivatkozási index 3) értéke: " << myNumbers[3] << endl;
	cout << " Az ötödik elem (hivatkozási index 4) értéke: " << myNumbers[4] << endl;
	cout << endl;
}

void MultiDimensionalArray()
{
	int ThreeRowsThreeColumns[3][3] = \
	{ {-501, 206, 2011}, { 989, 101, 206 }, { 303, 456, 596 }};
	cout << endl;
	cout << "0. sor: " << ThreeRowsThreeColumns[0][0] << " " \
		<< ThreeRowsThreeColumns[0][1] << " " \
		<< ThreeRowsThreeColumns[0][2] << " " << endl;
	cout << "1. sor: " << ThreeRowsThreeColumns[1][0] << " " \
		<< ThreeRowsThreeColumns[1][1] << " " \
		<< ThreeRowsThreeColumns[1][2] << " " << endl;
	cout << "2. sor: " << ThreeRowsThreeColumns[2][0] << " " \
		<< ThreeRowsThreeColumns[2][1] << " " \
		<< ThreeRowsThreeColumns[2][2] << " " << endl;
}

void CStyleString()
{
	char SayHello[] = { 'H', 'e', 'l', 'l', 'ó', ' ', 'V', 'i', 'l', 'á', 'g', '!', '\0' };

	cout << endl;
	cout << SayHello << endl;
	cout << endl;
	cout << "A tömb mérete: " << sizeof(SayHello) << endl;
	cout << endl;
	SayHello[5] = '\0';
	cout << SayHello << endl;
	cout << endl;
	cout << "A tömb mérete: " << sizeof(SayHello) << endl;
	cout << endl;
}

void CStyleStringRisk()
{
	cout << "Kérem a szöveget, de ne legyen 20 karaternél hosszabb: " << endl;

	char UserInput[21] = { '\0' };
	cin >> UserInput;

	cout << endl;
	cout << "A megadott szöveg hossza: " << strlen(UserInput) << endl;
}

void StringManipulate()
{
	string Greetings("Szia std::string!");
	cout << endl;
	cout << Greetings << endl;
	cout << endl;
	cout << "Kérek egy tetszőleges szövegsort: " << endl;
	string FirstLine;
	getline(cin, FirstLine);
	cout << endl;
	cout << "Kérek egy másik szövegsort: " << endl;
	string SecondLine;
	getline(cin, SecondLine);
	cout << endl;
	cout << "A két megadott szövegsor összefűzve: " << endl;
	string Concat = FirstLine + " " + SecondLine;
	cout << Concat << endl;
	cout << endl;
	cout << "Az összefűzött szöveg lemásolva: " << endl;
	cout << endl;
	string Copy;
	Copy = Concat;
	cout << Copy << endl;
	cout << endl;
	cout << "Az összefűzött szöveg hossza: " << Concat.length() << endl;
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "");		//Beállítja az operációs rendszer által használt nyelvi környezetet.

	//int myNumbers[5] = { 34, 56, -21, 5002, 365 };	//Öt elemű tömb állandó létrehozása és feltöltése értékekkel.

	//cout << endl;
	//cout << "   Az első elem (hivatkozási index 0) értéke: " << myNumbers[0] << endl;
	//cout << "Az második elem (hivatkozási index 1) értéke: " << myNumbers[1] << endl;
	//cout << "A harmadik elem (hivatkozási index 2) értéke: " << myNumbers[2] << endl;
	//cout << "A negyedik elem (hivatkozási index 3) értéke: " << myNumbers[3] << endl;
	//cout << " Az ötödik elem (hivatkozási index 4) értéke: " << myNumbers[4] << endl;
	//cout << endl;

	//ValuesToArray();

	//MultiDimensionalArray();

	//CStyleString();

	//CStyleStringRisk();

	StringManipulate();

	return 0;
}

