// Lesson6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void SimpleBranch()
{
	cout << endl;
	cout << "Kérek két egész számot: " << endl;
	int Num1 = 0, Num2 = 0;
	cin >> Num1;
	cin >> Num2;
	cout << endl;

	cout << "Nyomj egy 'm' betűt a szorzáshoz, vagy bármi mást az összeadáshoz: ";
	char UserSelection = '\0';
	cin >> UserSelection;

	int Result = 0;
	if (UserSelection == 'm')
		Result = Num1 * Num2;
	else
		Result = Num1 + Num2;

	cout << "Az eredmény: " << Result << endl;
	cout << endl;
}

void EmbeddedBranch()
{
	cout << endl;
	cout << "Kérek két egész számot: " << endl;
	int Num1 = 0, Num2 = 0;
	cin >> Num1;
	cin >> Num2;
	cout << endl;

	cout << "Nyomj egy 'd' betűt az osztáshoz, vagy bármi mást a szorzáshoz: ";
	char UserSelection = '\0';
	cin >> UserSelection;

	if (UserSelection == 'd')
	{
		cout << "Osztást választottál." << endl;
		cout << endl;
		if (Num2 != 0)
		{
			cout << "A második szám nem nulla, indulhat az osztás." << endl;
			cout << Num1 << " / " << Num2 << " = " << Num1 / Num2 << endl;
			cout << endl;
		}
		else
			cout << "Nullával nem lehet osztani." << endl;
		cout << endl;
	}
	else
	{
		cout << "Szorzást választottál." << endl;
		cout << Num1 << " * " << Num2 << " = " << Num1 * Num2 << endl;
		cout << endl;
	}
}

void CapacityPreCheck()
{
	char Buffer[20] = { '\0' };

	cout << endl;
	cout << "Kérek egy sornyi tetszőleges szöveget (ha rövidebb 20 karakternél, akkor elteszem): " << endl;
	string LineEntered;
	getline(cin, LineEntered);

	if (LineEntered.length() < 20)
	{
		strcpy(Buffer, LineEntered.c_str());
		cout << "Az eltett szöveg: " << Buffer << endl;
	}
}

void WeekDays1()
{
	enum DaysOfWeek
	{
		Monday = 0,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday,
		Sunday
	};

	cout << endl;
	cout << "Melyik bolygóról nevezték el a hét napjait?" << endl;
	cout << endl;
	cout << "Add meg a keresett nap számát (0-tól 6-ig, Hétfő -> 0): ";
	int Day = Monday;
	cin >> Day;
	cout << endl;

	if (Day == Monday)
		cout << "A hétfő a holdról kapta a nevét." << endl;
	else if (Day == Tuesday)
		cout << "A kedd a marsról kapta a nevét." << endl;
	else if (Day == Wednesday)
		cout << "A szerda a merkúrról kapta a nevét." << endl;
	else if (Day == Thursday)
		cout << "A csütörtök a jupiterről kapta a nevét." << endl;
	else if (Day == Friday)
		cout << "A péntek a vénuszról kapta a nevét." << endl;
	else if (Day == Saturday)
		cout << "A szombat a szaturnuszról kapta a nevét." << endl;
	else if (Day == Sunday)
		cout << "A vasárnap a napról kapta a nevét." << endl;
	else
		cout << "A megadott szám a tartományon kívül esik, indítsd újra." << endl;
	cout << endl;
}

void WeekDays2()
{
	enum DaysOfWeek
	{
		Monday = 0,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday,
		Sunday
	};

	cout << endl;
	cout << "Melyik bolygóról nevezték el a hét napjait?" << endl;
	cout << endl;
	cout << "Add meg a keresett nap számát (0-tól 6-ig, Hétfő -> 0): ";
	int Day = Monday;
	cin >> Day;
	cout << endl;

	switch (Day)
	{
	case Monday:
		cout << "A hétfő a holdról kapta a nevét." << endl;
		break;

	case Tuesday:
		cout << "A kedd a marsról kapta a nevét." << endl;
		break;

	case Wednesday:
		cout << "A szerda a merkúrról kapta a nevét." << endl;
		break;

	case Thursday:
		cout << "A csütörtök a jupiterről kapta a nevét." << endl;
		break;

	case Friday:
		cout << "A péntek a vénuszról kapta a nevét." << endl;
		break;

	case Saturday:
		cout << "A szombat a szaturnuszról kapta a nevét." << endl;
		break;

	case Sunday:
		cout << "A vasárnap a napról kapta a nevét." << endl;
		break;

	default:
		cout << "A megadott szám a tartományon kívül esik, indítsd újra." << endl;
		break;
	}
	cout << endl;
}

void ConditionalOperator()
{
	cout << endl;
	cout << "Melyik a nagyobb?" << endl;
	cout << endl;
	cout << "Kérek két egész számot: " << endl;
	int Num1 = 0, Num2 = 0;
	cin >> Num1;
	cin >> Num2;
	cout << endl;

	int Max = (Num1 > Num2) ? Num1 : Num2;
	cout << "A megadott " << Num1 << " és a " << Num2 << " közül a " << Max << " a nagyobb." << endl;
	cout << endl;
}

void GoToUse()
{
JumpToPoint:
	cout << endl;
	cout << "Szorzás és összeadás Ugrással ismételve." << endl;
	cout << endl;
	cout << "Kérek két egész számot: " << endl;
	int Num1 = 0, Num2 = 0;
	cin >> Num1;
	cin >> Num2;
	cout << endl;
	cout << Num1 << " x " << Num2 << " = " << Num1 * Num2 << endl;
	cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
	cout << endl;
	cout << "Szeretnéd új adatokkal megismételni (i/n)? ";
	char Repeat = 'y';
	cin >> Repeat;
	cout << endl;
	if (Repeat == 'i')
		goto JumpToPoint;

	cout << "Viszlát..." << endl;
	cout << endl;
}

void WhileUse1()
{
	char UserSelection = 'm';
	while (UserSelection != 'x')
	{
		cout << endl;
		cout << "Szorzás és összeadás elöl tesztelő ciklussal ismételve." << endl;
		cout << endl;
		cout << "Kérek két egész számot: " << endl;
		int Num1 = 0, Num2 = 0;
		cin >> Num1;
		cin >> Num2;
		cout << endl;
		cout << Num1 << " x " << Num2 << " = " << Num1 * Num2 << endl;
		cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
		cout << endl;
		cout << "Nyomd le az 'x' billentyűt ha be szeretnéd fejezni, bármelyik másikat a folytatáshoz. ";
		cin >> UserSelection;
		cout << endl;
	}
	cout << "Viszlát..." << endl;
	cout << endl;
}

void WhileUse2()
{
	char UserSelection = 'x';
	do
	{
		cout << endl;
		cout << "Szorzás és összeadás elöl tesztelő ciklussal ismételve." << endl;
		cout << endl;
		cout << "Kérek két egész számot: " << endl;
		int Num1 = 0, Num2 = 0;
		cin >> Num1;
		cin >> Num2;
		cout << endl;
		cout << Num1 << " x " << Num2 << " = " << Num1 * Num2 << endl;
		cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
		cout << endl;
		cout << "Nyomd le az 'x' billentyűt ha be szeretnéd fejezni, bármelyik másikat a folytatáshoz. ";
		cin >> UserSelection;
		cout << endl;
	} while (UserSelection != 'x');

	cout << "Viszlát..." << endl;
	cout << endl;
}

void ForUse1()
{
	cout << endl;
	cout << "Öt elemű tömb feltöltése egészszámokkal 'for' ciklus használatával." << endl;
	cout << endl;
	const int ARRAY_LENGHT = 5;
	int MyInts[ARRAY_LENGHT] = { 0 };
	for (int ArrayIndex = 0; ArrayIndex < ARRAY_LENGHT; ++ArrayIndex)
	{
		cout << "Kérek egy egész számot a tömb " << ArrayIndex << ". elemébe: ";
		cin >> MyInts[ArrayIndex];
	}

	cout << endl;
	cout << "A tömb tartalma." << endl;
	cout << endl;
	for (int ArrayIndex = 0; ArrayIndex < ARRAY_LENGHT; ++ArrayIndex)
		cout << "A tömb" << ArrayIndex << ". elemének értéke: " << MyInts[ArrayIndex] << endl;
	cout << endl;
}

void ForUse2()
{
	for (char UserSelection = 'm'; (UserSelection != 'x');)
	{
		cout << endl;
		cout << "Szorzás és összeadás elöl tesztelő ciklussal ismételve." << endl;
		cout << endl;
		cout << "Kérek két egész számot: " << endl;
		int Num1 = 0, Num2 = 0;
		cin >> Num1;
		cin >> Num2;
		cout << endl;
		cout << Num1 << " x " << Num2 << " = " << Num1 * Num2 << endl;
		cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
		cout << endl;
		cout << "Nyomd le az 'x' billentyűt ha be szeretnéd fejezni, bármelyik másikat a folytatáshoz. ";
		cin >> UserSelection;
		cout << endl;
	}

	cout << "Viszlát..." << endl;
	cout << endl;
}

void ForUse3()
{
	for (;;)	//végtelen ciklus, break kell a kilépéshez.
	{
		cout << endl;
		cout << "Szorzás és összeadás végtelen ciklussal ismételve, kilépéssel." << endl;
		cout << endl;
		cout << "Kérek két egész számot: " << endl;
		int Num1 = 0, Num2 = 0;
		cin >> Num1;
		cin >> Num2;
		cout << endl;

		cout << "Megfelelők a számok (i/n)? ";
		char ChangeNumbers = '\0';
		cin >> ChangeNumbers;
		cout << endl;

		if (ChangeNumbers == 'n')
			continue;	//Újra kezdi a ciklust.

		cout << Num1 << " x " << Num2 << " = " << Num1 * Num2 << endl;
		cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
		cout << endl;
		cout << "Nyomd le az 'x' billentyűt ha be szeretnéd fejezni, bármelyik másikat a folytatáshoz. ";
		char UserSelection = '\0';
		cin >> UserSelection;
		cout << endl;

		if (UserSelection == 'x')
			break;	//Kilépés a ciklusból.
	}

	cout << "Viszlát..." << endl;
	cout << endl;
}

void ForUse4()
{
	const int ARRAY1_LEN = 3;
	const int ARRAY2_LEN = 2;

	int MyInts1[ARRAY1_LEN] = { 35, -3, 0 };
	int MyInts2[ARRAY2_LEN] = { 20, -1 };

	cout << endl;
	cout << "Két tömb elemeinek összeszorzása beágyazott ciklus használatával." << endl;
	cout << endl;

	for (int Array1Index = 0; Array1Index < ARRAY1_LEN; ++Array1Index)			//Az első tömb indexének inkrementálása.
		for (int Array2Index = 0; Array2Index < ARRAY2_LEN; ++Array2Index)		//A második tönb indexének inkrementálása.
			cout << MyInts1[Array1Index] << " x " << MyInts2[Array2Index] \
			<< " = " << MyInts1[Array1Index] + MyInts2[Array2Index] << endl;	//Szorzások elvégzése és megjelenítése.

	cout << endl;
}

void ForUse5()
{
	const int MAX_ROWS = 3;
	const int MAX_COLS = 4;

	int MyInts[MAX_ROWS][MAX_COLS] = { { 34, -1, 879, 22 },
	{ 24, 365, -101, -1 },
	{ -20, 40, 90, 97 } };	//Kétdimenziós tömb inicializálás és értékadás.

	cout << endl;
	cout << "Kétdimenziós tömb bejárása beágyazott ciklus használatával." << endl;
	cout << endl;

	for (int Row = 0; Row < MAX_ROWS; ++Row)
	{
		for (int Column = 0; Column < MAX_COLS; ++Column)
		{
			cout << "Érték[" << Row << "][" << Column << "] = " \
				<< MyInts[Row][Column] << endl;
		}
	}

	cout << endl;
}

void FibonacciSeries()
{
	const int NumsToCall = 5;

	cout << endl;
	cout << "A Fibonacci sorozat " << NumsToCall << " elemét számítjuk ki egyszerre a '0' és az '1' kezdő értéket követően." << endl;
	cout << endl;

	int Num1 = 0, Num2 = 1;
	char WantMore = '\0';

	cout << Num1 << ", " << Num2 << ", " << endl;

	do
	{
		for (int Index = 0; Index < NumsToCall; ++Index)
		{
			cout << Num1 + Num2 << ", ";
			int Num2Temp = Num2;
			Num2 = Num1 + Num2;
			Num1 = Num2Temp;
		}
		cout << endl << "Számoljuk ki a következő öt elemet is (i/n)?";
		cin >> WantMore;
	} while (WantMore == 'i');

	cout << endl;
	cout << "Viszlát..." << endl;
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "");		//Beállítja az operációs rendszer által használt nyelvi környezetet.

	//SimpleBranch();

	//CapacityPreCheck();

	//EmbeddedBranch();

	//WeekDays1();

	//WeekDays2();

	//ConditionalOperator();

	//GoToUse();

	//WhileUse1();

	//WhileUse2();

	//ForUse1();

	//ForUse2();

	//ForUse3();

	//ForUse4();

	//ForUse5();

	FibonacciSeries();
	
	return 0;
}

