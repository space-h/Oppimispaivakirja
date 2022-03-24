#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class PVM {
public:


	void setKuukausi(int aKuukausi);
	void setPaiva(int aPaiva);
	void setVuosi(int aVuosi);

	void syotaKuukausi();
	void syotaPaiva();
	void syotaVuosi();

	int getKuukausi();
	int getPaiva();
	int getVuosi();
	void tulostaPaivays();

	void lisaaPaiva();


private:
	int paiva;
	int kuukausi;
	int vuosi;
};
