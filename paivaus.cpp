#include"Paivaus.h"
#include <iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void PVM::setVuosi(int aVuosi)
{
	vuosi = aVuosi;
}

void PVM::setKuukausi(int aKuukausi) {

	kuukausi = aKuukausi;
}
void PVM::setPaiva(int aPaiva)
{
	paiva = aPaiva;
}
void PVM::syotaVuosi()
{
	int bVuosi;
	cout << "Syota Vuosi\n";
	cin >> bVuosi;
	vuosi = bVuosi;
}

void PVM::syotaKuukausi() {
	int bKuukausi;
	cout << "Syota kuukausi\n";
	cin >> bKuukausi;
	kuukausi = bKuukausi;
}

void PVM::syotaPaiva()
{
	int bPaiva;
	cout << "Syota paiva\n";
	cin >> bPaiva;
	paiva = bPaiva;
}

int PVM::getVuosi() {
	return vuosi;
}

int PVM::getKuukausi() {
	return kuukausi;
}

int PVM::getPaiva() {
	return paiva;
}

void PVM::lisaaPaiva()
{
	bool OK = false;
	cout << "Paivamaaraan " << paiva << ":" << kuukausi << ":" << vuosi << " Lisataan 1 paiva jos mahdollista\n";

	if (kuukausi == 1 || kuukausi == 3 || kuukausi == 5 || kuukausi == 7 || kuukausi == 8 || kuukausi == 10)
	{
		OK = true;
		if (paiva == 31)
		{
			kuukausi++;
			paiva = 1;
		}
		else
			paiva++;

	}
	else if (kuukausi == 4 || kuukausi == 6 || kuukausi == 9 || kuukausi == 11)
	{
		OK = true;
		if (paiva == 30)
		{
			kuukausi++;
			paiva = 1;
		}
		else
			paiva++;
	}
	else if (kuukausi == 2)
	{
		OK = true;
		if (paiva == 28)
		{
			kuukausi++;
			paiva = 1;
		}
		else
			paiva++;
	}
	if (kuukausi == 12)
	{
		OK = true;
		if (paiva == 31)
		{
			paiva = 1;
			kuukausi = 1;
			vuosi++;
		}
		else
			paiva++;
	}
	if (kuukausi == 2 && paiva > 28)
	{
		cout << "error, virheellinen pvm";
		paiva = 0;
		kuukausi = 0;
		vuosi = 0;
		OK = false;
	}
	if (paiva > 30) {
		if (kuukausi == 4 || kuukausi == 6 || kuukausi == 9 || kuukausi == 11 && paiva > 30)
		{
			cout << "Error, Virheellinen pvm";
			paiva = 0;
			kuukausi = 0;
			vuosi = 0;
			OK = false;
		}
	}
	if (paiva > 31)
	{
		if (kuukausi == 1 || kuukausi == 3 || kuukausi == 5 || kuukausi == 7 || kuukausi == 8 || kuukausi == 10 || kuukausi == 12)
		{
			cout << "Error, virheellinen Pvm";
			paiva = 0;
			kuukausi = 0;
			vuosi = 0;
			OK = false;

		}
	}

	if (OK == true)
	{
		cout << "\nUusi paivamaara on " << paiva << ":" << kuukausi << ":" << vuosi;
	}
}

void PVM::tulostaPaivays()
{
	cout << "\n" << paiva <<":" << kuukausi << ":" << vuosi;
}
