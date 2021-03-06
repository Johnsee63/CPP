// Lesson3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int FirstNumber = 0, SecondNumber = 0, MultiplicationResult = 0;	//Globális változó deklarálás kezdő értékkel.

void MultiplyNumbers()	//adatbekérés, számolás külön függvényben.
{
	cout << "Ez a szoftver két megadott számot szoroz össze." << endl;
	cout << endl;

	cout << "  Kérem az első számot: ";
	//int FirstNumber = 0;
	cin >> FirstNumber;
	cout << endl;

	cout << "Kérem a második számot: ";
	//int SecondNumber = 0;
	cin >> SecondNumber;
	cout << endl;

	//int MultiplicationResult = FirstNumber * SecondNumber;	//Két szám összeszorzása és az eredmény tárolása egy változóban.

	MultiplicationResult = FirstNumber * SecondNumber;	//Két szám összeszorzása és az eredmény tárolása egy globális változóban.

	cout << FirstNumber << " x " << SecondNumber << " = " << MultiplicationResult << endl;	//Az eredmény megjelenítése.
	cout << endl;
}

void StandardVariableTypes()
{
	cout << "Ez a szoftver a C++ néhány beépített változójának hosszát számítja ki." << endl;
	cout << endl;

	cout << "                             A logikai változó hossza: " << sizeof(bool) << endl;
	cout << "                            A karakter változó hossza: " << sizeof(char) << endl;
	cout << "       Az előjel nélküli rövid integer változó hossza: " << sizeof(unsigned short) << endl;
	cout << "             Az előjeles rövid integer változó hossza: " << sizeof(short) << endl;
	cout << "      Az előjel nélküli hosszú integer változó hossza: " << sizeof(unsigned long) << endl;
	cout << "            Az előjeles hosszú integer változó hossza: " << sizeof(long) << endl;
	cout << "Az előjel nélküli dupla hosszú integer változó hossza: " << sizeof(unsigned long long) << endl;
	cout << "      Az előjeles dupla hosszú integer változó hossza: " << sizeof(long long) << endl;
	cout << "             Az előjel nélküli integer változó hossza: " << sizeof(unsigned int) << endl;
	cout << "                   Az előjeles integer változó hossza: " << sizeof(int) << endl;
	cout << "                        A lebegőpontos változó hossza: " << sizeof(float) << endl;
	cout << "                  A dupla lebegőpontos változó hossza: " << sizeof(double) << endl;

	cout << endl;
	cout << "Az eredmény a fordító, a hardver és az operációs rendszer függvényében változhat." << endl;
	cout << endl;

}

void UseFlagKeyword()
{
	auto Flag = true;
	auto Number = 2500000000000;

	cout << "A jelző automatikusan beállítva " << Flag;
	cout << " , melynek hossza = " << sizeof(Flag) << endl;
	cout << "A szám = " << Number;
	cout << " , melynek hossza = " << sizeof(Number) << endl;
}

void ConstantPi()
{
	const double Pi = 22.0 / 7;	//Állandó megadása kezdő értékadással.
	cout << endl;
	cout << "A Pi állandó értéke: " << Pi << endl;
	cout << endl;
}

void WindDirections()
{
	enum CardinalDirections
	{
		North = 25,
		South,
		East,
		West
	};

	cout << "A lehetséges szélirányok a főbb égtájak alapján." << endl;
	cout << " Észak: " << North << endl;
	cout << "   Dél: " << South << endl;
	cout << " Kelet: " << East << endl;
	cout << "Nyugat: " << West << endl;
	cout << endl;

	CardinalDirections WindDirection = South;

	cout << "A szélirány változó tartalma: " << WindDirection << endl;
	cout << endl;
}

int main()
{
	//int FirstNumber = 0;		//Integer változó deklaráció kezdő értékadással.
	//int SecondNumber = 0;

	//int FirstNumber = 0, SecondNumber = 0;	// több azonos típusú változó létrehozása kezdő értékadással.

	setlocale(LC_ALL, "");		// ez beállítja az operációs rendszer által használt nyelvi környezetet.

	//cout << "Ez a szoftver két megadott számot szoroz össze." << endl;
	//cout << endl;

	//cout << "  Kérem az első számot: ";
	//cin >> FirstNumber;
	//cout << endl;

	//cout << "Kérem a második számot: ";
	//cin >> SecondNumber;
	//cout << endl;

	//int MultiplicationResult = FirstNumber * SecondNumber;	//Két szám összeszorzása és az eredmény tárolása egy változóban.

	//cout << FirstNumber << " x " << SecondNumber << " = " << MultiplicationResult << endl;	//az eredmény megjelenítése.
	//cout << endl;

	//MultiplyNumbers();		//A számoló függvény hívása.

	//StandardVariableTypes();	//a változó hosszakat számoló függvény hívása.

	//UseFlagKeyword();			//Az auto kulcsszó használatát bemutató függvény.

	//ConstantPi();				//Az állandók használatát bemutató függvény hívása.

	WindDirections();			//Tömb állandó kezelése olvasása.
	
	return 0;
}

