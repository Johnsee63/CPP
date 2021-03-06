// Lesson7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void AreaAndGirth()	//Paraméter és visszatérési érték nélküli függvény deklaráció.
{
	double Area(double IputRadius);				//Függvény prototípus deklaráció egy paraméterrel.
	double Circumference(double InputRadius);	//Függvény prototípus deklaráció egy paraméterrel.

	cout << endl;
	cout << "Kör területének és kerületének számítása függvények használatával." << endl;
	cout << endl;
	cout << "Kérem a kör sugarát: ";
	double Radius = 0;
	cin >> Radius;
	cout << endl;
	cout << "A megadott sugarú kör területe: " << Area(Radius) << endl;
	cout << "A megadott sugarú kör kerülete: " << Circumference(Radius) << endl;
	cout << endl;
}

void SurfaceArea()
{
	double SurfaceArea(double Radius, double Height);	//Függvény prototípus deklaráció két paraméterrel.

	cout << endl;
	cout << "Henger felületének számítása két paraméteres függvény használatával." << endl;
	cout << endl;
	cout << "Kérem a henger alapkörének sugarát: ";
	double InRadius = 0;
	cin >> InRadius;
	cout << "Kérem a henger magasságát: ";
	double InHeight = 0;
	cin >> InHeight;
	cout << endl;

	cout << "A megadott henger felülete: " << SurfaceArea(InRadius, InHeight) << endl;
	cout << endl;
}

void NewHelloWorld()
{
	cout << endl;
	cout << "Üdvözöllek ebben a szép, új világban." << endl;
	cout << endl;
}

void CircleArea()
{
	double Area2(double InputRadius, double Pi = 3.14);				//Függvény prototípus deklaráció két paraméterrel, értékadással.

	cout << endl;
	cout << "Kör területének számítása függvény használatával, paraméter (Pi) megadással." << endl;
	cout << endl;
	cout << "Kérem a kör sugarát: ";
	double Radius = 0;
	cin >> Radius;
	cout << endl;
	cout << "A 'Pi' értéke 3,14, szeretnéd pontosítani?: ";
	char ChangePi = 'n';
	cin >> ChangePi;
	cout << endl;

	double ComputedCircleArea = 0;

	if (ChangePi == 'y')
	{
		cout << "Kérem a pontosított 'Pi' értéket: ";
		double NewPi = 3.14;
		cin >> NewPi;
		cout << endl;
		ComputedCircleArea = Area2(Radius, NewPi);
	}
	else
		ComputedCircleArea = Area2(Radius);		//A második paraméter törlése, a default értékkel számol a függvény.

	cout << "A megadott sugarú kör területe: " << ComputedCircleArea << endl;
	cout << endl;
}

void ComputedFibNumber()
{
	int GetFibNumber(int FibIndex);		//Függvény prototípus deklaráció.

	cout << endl;
	cout << "Adott pozíción lévő Fibonacci sor beli szám értékének kiszámítása rekurzív függvényhívás használatával." << endl;
	cout << endl;
	cout << "Kérem a pozíciót (az első pozíció a '0'): ";
	int Index = 0;
	cin >> Index;
	cout << endl;
	cout << "A megadott pozíción lévő szám értéke: " << GetFibNumber(Index) << endl;
	cout << endl;
}

void QueryAndCalculate()
{
	const double Pi = 3.14159;

	cout << endl;
	cout << "Kör területésenk és kerületének számítása többszörös visszatérési értékes függvény használatával." << endl;
	cout << endl;
	cout << "Kérem a kör sugarát: ";
	double Radius = 0;
	cin >> Radius;
	cout << endl;
	cout << "A megadott sugarú kör területe: " << Pi * Radius * Radius << endl;
	cout << endl;
	cout << "Számítsuk ki a megadott sugarú kör kerületét is (i/n)? ";
	char CalcCircum = 'n';
	cin >> CalcCircum;
	cout << endl;

	if (CalcCircum == 'i')
	{
		cout << "A megadott sugarú kör kerülete: " << 2 * Pi * Radius << endl;
		cout << endl;
		return;
	}
}

void OverloadFunction()
{
	double Area3(double Radius);	//Függvény prototípus deklaráció kör terület számításhoz.
	double Area3(double Radius, double Height);	//Függvény prototípus deklaráció henger felszín számításhoz, túltöltéssel.

	cout << endl;
	cout << "Kör és henger felületének számítása ugyanazon függvény túltöltésével." << endl;
	cout << endl;
	cout << "Kérem nyomja meg a 'h' betűt, ha henger felületét vagy a 'k' betűt, ha kör területét számoljuk: ";
	char Choice = 'h';
	cin >> Choice;
	cout << endl;
	cout << "Kérem a kör sugarát: ";
	double Radius = 0;
	cin >> Radius;
	cout << endl;

	if (Choice == 'h')
	{
		cout << "Kérem a henger magasságát: ";
		double Height = 0;
		cin >> Height;
		cout << endl;
		cout << "A megadott henger felülete: " << Area3(Radius, Height) << endl;
	}
	else
		cout << "A megadott kör területe: " << Area3(Radius) << endl;

	cout << endl;
}

void DisplayArray(int Numbers[], int Lenght)
{
	cout << "Az első tömb elemei: ";
	for (int Index = 0; Index < Lenght; ++Index)
		cout << Numbers[Index] << ", ";
	cout << endl;
}

void DisplayArray(char Characters[], int Lenght)
{
	cout << "A második tömb elemei: ";
	for (int Index = 0; Index < Lenght; ++Index)
		cout << Characters[Index] << " ";
	cout << endl;
}

void UseDisplayArray()
{
	int MyNumbers[4] = { 24, 58, -1, 245 };
	char MyStatement[12] = { 'Ü', 'd', 'v', 'ö', 'z', 'ö', 'l', 'l', 'e', 'k', '!', '\0' };

	cout << endl;
	cout << "Tömb elemeinek megjelenítése függvényben hívott ciklussal." << endl;
	cout << endl;

	DisplayArray(MyNumbers, 4);
	DisplayArray(MyStatement, 12);
}

void Area4(double Radius, double& Result)
{
	const double Pi = 3.14159;
	Result = Pi * Radius * Radius;
}

void CircleArea2()
{
	cout << endl;
	cout << "Kör területének számítása függvény használatával, referencia értékkel." << endl;
	cout << endl;
	cout << "Kérem a kör sugarát: ";
	double Radius = 0;
	cin >> Radius;
	cout << endl;
	double AreaFetched = 0;
	Area4(Radius, AreaFetched);
	cout << "A megadott sugarú kör területe: " << AreaFetched << endl;
	cout << endl;
}

inline long DoubleNum(int InputNum)	//Inline függvény a Multiple függvény használatához.
{
	return InputNum * 2;
}

void Multiple()
{
	cout << endl;
	cout << "Adott szám duplázása inline függvény használatával." << endl;
	cout << endl;
	cout << "Kérem a duplázandó számot: ";
	int InputNum = 0;
	cin >> InputNum;
	cout << "A megadott szám duplája: " << DoubleNum(InputNum) << endl;
	cout << endl;
}

void DisplayNums(vector<int>& DynArray)	//Lamdba függvény a tömb elemeinek megjelenítéséhez.
{
	for_each(DynArray.begin(), DynArray.end(), [](int Element) {cout << Element << ", "; });	//Lambda függvény.
	cout << endl;
}

void UseLambdaFunction()
{
	cout << endl;
	cout << "Tömb elemeinek sorbaendezése lambda függvény használatával." << endl;
	cout << endl;

	vector<int> MyNumbers;
	MyNumbers.push_back(501);
	MyNumbers.push_back(-1);
	MyNumbers.push_back(25);
	MyNumbers.push_back(-35);

	cout << "A tömb elemei: ";
	DisplayNums(MyNumbers);

	cout << "A tömb elemei csökkenő sorrendbe rendezve: ";
	sort(MyNumbers.begin(), MyNumbers.end(), [](int Num1, int Num2) {return (Num2 < Num1); });	//Lambda függvény.
	DisplayNums(MyNumbers);
}

int main()
{
	setlocale(LC_ALL, "");		//Beállítja az operációs rendszer által használt nyelvi környezetet.

	//AreaAndGirth();

	//SurfaceArea();

	//NewHelloWorld();

	//CircleArea();

	//ComputedFibNumber();

	//QueryAndCalculate();

	//OverloadFunction();

	//UseDisplayArray();

	//CircleArea2();

	//Multiple();

	UseLambdaFunction();

	return 0;
}

double Area(double InputRadius)
{
	const double Pi = 3.14159;
	return (InputRadius * InputRadius) * Pi;
}

double Circumference(double InputRadius)
{
	const double Pi = 3.14159;
	return (InputRadius + InputRadius) * Pi;
}

double SurfaceArea(double Radius, double Height)
{
	const double Pi = 3.14159;
	double Area = 2 * Pi * Radius * Radius + 2 * Pi * Radius * Height;
	return Area;
}

double Area2(double InputRadius, double Pi)
{
	return Pi * InputRadius * InputRadius;
}

int GetFibNumber(int FibIndex)
{
	if (FibIndex < 2)
		return FibIndex;
	else //Rekurzív hívás, ha a FibIndex nagyobb vagy egyenlő kettővel.
		return GetFibNumber(FibIndex - 1) + GetFibNumber(FibIndex - 2);
}

double Area3(double Radius)	//A kör terület számításhoz.
{
	const double Pi = 3.14159;
	return Pi * Radius * Radius;
}

double Area3(double Radius, double Height)	//A henger felület számításhoz.
{
	const double Pi = 3.14159;
	return 2 * Area(Radius) + 2 * Pi * Radius * Height;
}

