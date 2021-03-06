// Lesson5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <bitset>
using namespace std;

void Operators()
{
	cout << endl;
	cout << "Kérek két egész számot: " << endl;
	int Num1 = 0, Num2 = 0;
	cin >> Num1;
	cin >> Num2;
	cout << endl;

	cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
	cout << Num1 << " - " << Num2 << " = " << Num1 - Num2 << endl;
	cout << Num1 << " * " << Num2 << " = " << Num1 * Num2 << endl;
	cout << Num1 << " / " << Num2 << " = " << Num1 / Num2 << endl;
	cout << Num1 << " % " << Num2 << " = " << Num1 % Num2 << endl;
	cout << endl;
}

void PostOrPreOperators()
{
	int MyInt = 101;

	cout << endl;
	cout << "Operátorok használata előtt az induló érték: " << MyInt << endl;
	cout << endl;

	int PostFixInc = MyInt++;
	cout << "     Az utólagos növelés értéke: " << PostFixInc << endl;
	cout << "Az utólagos növelés utáni érték: " << MyInt << endl;
	MyInt = 101;

	int PreFixInc = ++MyInt;
	cout << "     Az előzetes növelés értéke: " << PreFixInc << endl;
	cout << "Az előzetes növelés utáni érték: " << MyInt << endl;
	MyInt = 101;

	int PostFixDec = MyInt--;
	cout << "     Az utólagos csökkentés értéke: " << PostFixDec << endl;
	cout << "Az utólagos csökkentés utáni érték: " << MyInt << endl;
	MyInt = 101;

	int PreFixDec = --MyInt;
	cout << "     Az előzetes csökkentés értéke: " << PreFixDec << endl;
	cout << "Az előzetes csökkentés utáni érték: " << MyInt << endl;
	MyInt = 101;
	cout << endl;

}

void TestOverFlow()
{
	unsigned short UShortValue = 65535;
	cout << endl;
	cout << "Előjel nélkül inkrementálás előtt: " << UShortValue << ", majd utána: ";
	cout << ++UShortValue << endl;
	cout << endl;

	short SignedShort = 32767;
	cout << endl;
	cout << "Előjeles inkrementálás előtt: " << SignedShort << ", majd utána: ";
	cout << ++SignedShort << endl;
	cout << endl;
}

void RelationalOperators()
{
	cout << endl;
	cout << "Kérek két egész számot: " << endl;
	int Num1 = 0, Num2 = 0;
	cin >> Num1;
	cin >> Num2;
	cout << endl;

	bool Equality = (Num1 == Num2);
	cout << "Az egyenlőség ellenőrzés eredménye: " << Equality << endl;
	cout << endl;

	bool Inequality = (Num1 != Num2);
	cout << "Az egyenlőtlenség ellenőrzés eredménye: " << Inequality << endl;
	cout << endl;

	bool GreatherThan = (Num1 > Num2);
	cout << "A nagyobb mint ellenőrzés eredménye: " << GreatherThan << endl;
	cout << endl;

	bool LessThan = (Num1 < Num2);
	cout << "A kisebb mint ellenőrzés eredménye: " << LessThan << endl;
	cout << endl;

	bool GreatherThanEqual = (Num1 >= Num2);
	cout << "A nagyobb egyenlő ellenőrzés eredménye: " << GreatherThanEqual << endl;
	cout << endl;

	bool LessThanEqual = (Num1 <= Num2);
	cout << "A kisebb egyenő ellenőrzés eredménye: " << LessThanEqual << endl;
	cout << endl;
}

void LogicalOperators1()
{
	cout << endl;
	cout << "Kérek két logikai (igaz(1) vagy hamis(0)) értéket: " << endl;
	bool Op1 = false, Op2 = false;
	cin >> Op1;
	cin >> Op2;
	cout << endl;

	cout << Op1 << "  ÉS  " << Op2 << " = " << (Op1 && Op2) << endl;
	cout << Op1 << " VAGY " << Op2 << " = " << (Op1 || Op2) << endl;
	cout << endl;
}

void LogicalOperators2()
{
	cout << endl;
	cout << "Kérlek használj logikai (igaz(1) vagy hamis(0)) értéket a kérdések megválaszolására: " << endl;
	cout << endl;
	cout << "Esik? ";
	bool Raining = false;
	cin >> Raining;
	cout << "Látsz buszt az utcában? ";
	bool Buses = false;
	cin >> Buses;
	cout << endl;

	if (Raining && !Buses)
		cout << "Nem tudsz elmenni itthonról." << endl;
	else
		cout << "El tudsz menni itthonról." << endl;

	if (Raining && Buses)
		cout << "Ne felejtsd itthon az ernyődet." << endl;

	if ((!Raining) && Buses)
		cout << "Gyönyörű időnk van, legyen szép napod." << endl;
}

void LogicalOperators3()
{
	cout << endl;
	cout << "Kérlek használj logikai (igaz(1) vagy hamis(0)) értéket a kérdések megválaszolására: " << endl;
	cout << endl;
	cout << "Van valamilyen kedvezmény álmaid autójára? ";
	bool Discount = false;
	cin >> Discount;
	cout << "Kaptál kiemelkedő prémiumot a napokban? ";
	bool Bonus = false;
	cin >> Bonus;
	cout << endl;

	if (Discount || Bonus)
		cout << "Gratulálok, indulhatsz megvenni álmaid autóját." << endl;
	else
		cout << "Sajnálom, de egynelőre el kell halasztanod a vásárlást." << endl;
}

void BitsOperators()
{
	cout << endl;
	cout << "Kérek egy számot (0 - 255): ";
	unsigned short InputNum = 0;
	cin >> InputNum;
	cout << endl;

	bitset<8> InputBits(InputNum);
	cout << InputNum << " binárisan " << InputBits << endl;
	cout << endl;

	bitset<8> BitwiseNOT = (~InputNum);
	cout << "Logikai NEM |" << endl;
	cout << "-" << InputBits << " = " << BitwiseNOT << endl;
	cout << endl;

	cout << "Logikai ÉS & 00001111" << endl;
	bitset<8> BitwiseAND = (0x0F & InputNum);	//Hexa 0x0F egyenlő bináris 00001111
	cout << "00001111 & " << InputBits << " = " << BitwiseAND << endl;
	cout << endl;

	cout << "Logikai VAGY | 00001111" << endl;
	bitset<8> BitwiseOR = (0x0F | InputNum);	//Hexa 0x0F egyenlő bináris 00001111
	cout << "00001111 | " << InputBits << " = " << BitwiseOR << endl;
	cout << endl;

	cout << "Logikai kizáró VAGY ^ 00001111" << endl;
	bitset<8> BitwiseXOR = (0x0F ^ InputNum);	//Hexa 0x0F egyenlő bináris 00001111
	cout << "00001111 ^ " << InputBits << " = " << BitwiseXOR << endl;
	cout << endl;
}

void ShiftOperators()
{
	cout << endl;
	cout << "Kérek egy számot: ";
	int InputNum = 0;
	cin >> InputNum;
	cout << endl;

	int Half = InputNum >> 1;
	int Quarter = InputNum >> 2;
	int Double = InputNum << 1;
	int Quadruple = InputNum << 2;

	cout << "    Negyed: " << Quarter << endl;
	cout << "       Fél: " << Half << endl;
	cout << "     Dupla: " << Double << endl;
	cout << "Négyszeres: " << Quadruple << endl;
	cout << endl;
}

void CompAssOperators()
{
	cout << "Kérek egy számot: ";
	int Value = 0;
	cin >> Value;
	cout << endl;

	Value += 8;
	cout << "Az érték += 8 után: " << Value << endl;
	Value -= 2;
	cout << "Az érték -= 2 után: " << Value << endl;
	Value /= 4;
	cout << "Az érték /= 4 után: " << Value << endl;
	Value *= 4;
	cout << "Az érték *= 4 után: " << Value << endl;
	Value %= 1000;
	cout << "Az érték %= 1000 után: " << Value << endl;
	cout << endl;
	cout << "Az érték <<= 1 után: " << (Value <<= 1) << endl;
	cout << "Az érték >>= 2 után: " << (Value >>= 2) << endl;
	cout << endl;
	cout << "Az érték |= 0x55 után: " << (Value |= 0x55) << endl;
	cout << "Az érték ^= 0x55 után: " << (Value ^= 0x55) << endl;
	cout << "Az érték &= 0x0F után: " << (Value |= 0x0F) << endl;
}

void MemoOccupied()
{
	cout << "Tömbméret memória foglalás lekérdezése a sizeof() tulajdonsággal." << endl;
	int MyNumbers[100] = { 0 };
	cout << endl;

	cout << "                     Integer típus által foglalt méret byte-ban: " << sizeof(int) << endl;
	cout << "Az integer típusú száz elemű tönmb által foglalt méret byte-ban: " << sizeof(MyNumbers) << endl;
	cout << "                      Egy tömbelem által foglalt méret byte-ban: " << sizeof(MyNumbers[0]) << endl;
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "");		//Beállítja az operációs rendszer által használt nyelvi környezetet.

	//Operators();

	//PostOrPreOperators();

	//TestOverFlow();

	//RelationalOperators();

	//LogicalOperators1();

	//LogicalOperators2();

	//LogicalOperators3();

	//BitsOperators();

	//ShiftOperators();

	//CompAssOperators();

	MemoOccupied();

	return 0;
}

