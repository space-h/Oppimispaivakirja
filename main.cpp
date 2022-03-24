#include <iostream>
#include <string>
#include "Paivaus.h"

using std::cout;
using std::endl;
using std::string;

int main() {
	setlocale(LC_ALL, "fi_FI");

	PVM tanaan;
	tanaan.setPaiva(17);
	tanaan.setKuukausi(3);
	tanaan.setVuosi(2022);
	cout << endl;
	tanaan.tulostaPaivays();

	PVM huomenna;
	huomenna.setPaiva(18);
	huomenna.setKuukausi(3);
	huomenna.setVuosi(2022);
	cout << endl;
	
	huomenna.getPaiva();
	huomenna.getKuukausi();
	huomenna.getVuosi();
	huomenna.tulostaPaivays();

	cout << endl;

	cout << endl << "Kayttaen PVM asettamista\n" << endl;
	PVM asetaPaiva;
	asetaPaiva.syotaPaiva();
	asetaPaiva.syotaKuukausi();
	asetaPaiva.syotaVuosi();
	asetaPaiva.tulostaPaivays();
	cout << endl << "Kayttaen lisaa paiva ominaisuutta\n" << endl;

	PVM lisaa1Paiva;
	lisaa1Paiva.syotaPaiva();
	lisaa1Paiva.syotaKuukausi();
	lisaa1Paiva.syotaVuosi();
	lisaa1Paiva.lisaaPaiva();
	
	


	return 0;
}
