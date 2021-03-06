// Lesson8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <locale>
#include <iostream>
using namespace std;

void UsingReferenceOperator()
{
	int Age = 30;
	const double Pi = 3.1416;

	cout << endl;
	cout << "Referencia operátor használata memória címek kereséséhez." << endl;
	cout << endl;
	cout << "Az 'Age' integer változó memóriacíme: 0x" << hex << &Age << endl;
	cout << "   A 'Pi' dupla állandó memória címe: 0x" << hex << &Pi << endl;
	cout << endl;
}

void UsingPointer()
{
	int Age = 30;
	int* pInteger = &Age;	//A pointer változó deklarálása és az operátor inicializálása.

	cout << endl;
	cout << "Memóriacím tárolása mutatóban." << endl;
	cout << endl;

	//A pointer értékének megjelenítése.
	cout << "Az 'Age' integer változó értékére mutató pointer értéke: 0x" << hex << pInteger << endl;
	cout << endl;
}

void UsingNowPointer()
{
	cout << endl;
	cout << "Memóriacímek tárolása mutatóban." << endl;
	cout << endl;

	int Age = 30;
	int* pInteger = &Age;

	cout << "Az 'pInteger' mutató aktuális értéke (Age változó memóriacíme): 0x" << hex << pInteger << endl;
	cout << endl;

	int DogsAge = 9;
	pInteger = &DogsAge;

	cout << "Az 'pInteger' mutató aktuális értéke (DogsAge változó memóriacíme): 0x" << hex << pInteger << endl;
	cout << endl;
}

void UsingDereferenceOperator()
{
	cout << endl;
	cout << "Adatok beolvasása a dereference operátor használatával." << endl;
	cout << endl;

	int Age = 30;
	int DogsAge = 9;

	cout << "   Az 'Age' változó értéke: " << Age << endl;
	cout << "A 'DogsAge' változó értéke: " << DogsAge << endl;
	cout << endl;

	int* pInteger = &Age;
	cout << "Az 'Age' változó memóriacíme: 0x" << hex << pInteger << endl;
	cout << "Az 'Age' változó értéke a memóriacímből (*pInteger): " << dec << *pInteger << endl;
	cout << endl;

	pInteger = &DogsAge;
	cout << "A 'DogsAge' változó memóriacíme: 0x" << hex << pInteger << endl;
	cout << "A 'DogsAge' változó értéke a memóriacímből (*pInteger): " << dec << *pInteger << endl;
	cout << endl;
}

void ManipulatingWithDRefOperator()
{
	cout << endl;
	cout << "Adatok beolvasása utáni memóriacímek." << endl;
	cout << endl;

	int DogsAge = 30;
	cout << "A 'DogsAge' változó értéke induláskor: " << DogsAge << endl;
	cout << endl;

	int* pAge = &DogsAge;
	cout << "A 'pAge' mutató értéke (&DogsAge): 0x" << hex << DogsAge << endl;
	cout << endl;
	cout << "Mennyi idős a kutyád? ";
	cin >> *pAge;
	cout << "A 'pAge' mutató értéke (az eltárolt szám): 0x" << hex << pAge << endl;
	cout << "A 'pAge' mutató értéke (az eltárolt szám): " << dec << DogsAge << endl;
	cout << endl;
}

void UsingPointersize()
{
	int Age = 30;
	double Pi = 3.1416;
	char SayYes = 'i';

	//A mutatók inicializálása a változók memóriacímeivel.
	int* pInt = &Age;
	double* pDouble = &Pi;
	char* pChar = &SayYes;

	cout << endl;
	cout << "Változók és memóriatartalmak hosszának lekérdezése." << endl;
	cout << endl;
	cout << "Az 'Age' (integer) változó hossza: " << sizeof(int) << endl;
	cout << "   A 'Pi' (double) változó hossza: " << sizeof(double) << endl;
	cout << " A 'SayYes' (char) változó hossza: " << sizeof(char) << endl;
	cout << endl;
	cout << "  A 'pAge' (integer) pointer hossza: " << sizeof(pInt) << endl;
	cout << "A 'pDouble' (double) pointer hossza: " << sizeof(pDouble) << endl;
	cout << "    A 'pChar' (char) pointer hossza: " << sizeof(pChar) << endl;
	cout << endl;
}

void UsingMemoryAllocation1()
{
	cout << endl;
	cout << "Memóriakezelés a 'new' és a 'delete' utasításokkal." << endl;
	cout << endl;

	int* pAge = new int;	//Memória foglalás.
	cout << "Kérem a kutyád nevét: ";
	cin >> *pAge;	//A kapott adat eltárolása a foglalt memória területre.
	cout << endl;
	cout << "A megadott név eltárolva a 0x" << hex << pAge << " memóriacímen." << endl;
	cout << endl;
	delete pAge;	//Memória felszabadítás.
}

void UsingMemoryAllocation2()
{
	cout << endl;
	cout << "Dinamikus memóriakezelés a 'new' és a 'delete' utasításokkal." << endl;
	cout << endl;

	string Name;

	cout << "Kérem a nevedet: ";
	cin >> Name;
	cout << endl;

	int CharsToAllocate = Name.length() + 1;	//A szükséges memóriaméret számítása a megadott név hosszából.
	char* CopyOfName = new char[CharsToAllocate];	//A szükséges memória lefoglalása.
	strcpy(CopyOfName, Name.c_str());	//Name változó tartalmának betöltése a memóriaterületre.

	cout << "A lefoglalt memóriaterület tartalma :" << CopyOfName << endl;
	cout << endl;

	delete[] CopyOfName;	//A lefoglalt memóriaterület felszabadítása.
}

void UsingMemoryAllocation3()
{
	cout << endl;
	cout << "Dinamikus memóriakezelés a 'new' és a 'delete' utasításokkal és a méret növelése a '++' operátorral." << endl;
	cout << endl;
	cout << "Hány egéz számot szeretnél megadni? ";
	int InputNums = 0;
	cin >> InputNums;
	cout << endl;

	int Index = 0;
	int* pNumbers = new int[InputNums];	//A szükséges memóriaterület foglalása.
	int* pCopy = pNumbers;

	cout << "A memória terület foglalás " << InputNums << " szám részére megtörtént, indulhat a feltöltés." << endl;

	for (int Index = 0; Index < InputNums; ++Index)
	{
		cout << "Kérem a " << Index << ". számot: ";
		cin >> *(pNumbers + Index);
	}

	cout << endl;
	cout << "A megadott számok: ";

	for (Index = 0, pCopy = pNumbers; Index < InputNums; ++Index)
		cout << *(pCopy++) << ", ";

	cout << endl;

	delete[] pNumbers;	//A lefoglalt memóriaterület felszabadítása.
}

int main()
{
	setlocale(LC_ALL, "");		//Beállítja az operációs rendszer által használt nyelvi környezetet.

	//UsingReferenceOperator();

	//UsingPointer();

	//UsingNowPointer();

	//UsingDereferenceOperator();

	//ManipulatingWithDRefOperator();

	//UsingPointersize();

	//UsingMemoryAllocation1();

	//UsingMemoryAllocation2();

	UsingMemoryAllocation3();
	
	return 0;
}

