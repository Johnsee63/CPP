// Lesson2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>			//Az input - output kezeléshez kell.
#include <string>			//A string kezeléshez kell.
using namespace std;		//Megmondja a fordítónak, hogy melyik névtérben keressen.

int DemoConsoleOutput()		//integer visszatérési értékű függvény deklaráció
{
	cout << "Ez egy egyszerű szöveges literál" << endl;
	cout << "    Most kiírom azt, hogy öt: " << 5 << endl;
	cout << "      Elosztom a 10-et 5-tel: " << 10 / 5 << endl;
	cout << "  A Pí értéke nagyjából 22/7: " << 22 / 7 << endl;
	cout << "A Pí értéke pontosabban 22/7: " << 22.0 / 7 << endl;

	return 0;
}

//A főprogram kezdete
int main()
{
	setlocale(LC_ALL, "");			//Beállítja az operációs rendszer által használt nyelvi környezetet.
	//using namespace std;			//Megmondja a fordítónak, hogy melyik névtérben keressen.

	//using std::cout;				//Másik megoldás kulcsszó használatra.
	//using std::endl;

	//cout << "Helló világ!" << endl;	/*Kiír a konzolra, mint az std::cout*/

	//DemoConsoleOutput();			//Egyszerű függvényhívás (invoke).
	
	//return DemoConsoleOutput();	//Függvényhívás a visszatérési érték a kilépéshez használva.

	int InputNumber;				//Integer típusú változó létrehozás.
	string InputName;				//String típusú változó létrehozás. 

	cout << "Írj be egy egész számot: ";
	cin >> InputNumber;
	cout << "Mi a neved: ";
	cin >> InputName;				//A beírt szövegben hibásak az ékezetek!!!!

	cout << InputName << " által megadott szám a " << InputNumber << endl;

	return 0; /*Visszaad egy értéket az operációs rendszernek és leáll a futás.*/
}

