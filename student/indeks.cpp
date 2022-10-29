#include "indeks.h"

int indeks::counter = 67;

indeks::indeks(){
	br_ind = counter++;
	sl_slob = 0;
}
string indeks::opisi() {
	string ret = "{ ";
	for (int i = 0; i < sl_slob; i++)
		ret += ispiti[i].predmet + " , " + to_string(ispiti[i].ocena) + " \n ";
	return ret + " }";
}
void indeks::upisi_ocenu(string s, unsigned short o) {
	if (sl_slob == indeks::br_polja)
		throw nema_mesta();
	ispiti[sl_slob].predmet = s;
	ispiti[sl_slob++].ocena = o;
}
float indeks::racunaj_prosek() {
	if (sl_slob == 0)return 0;
	float sum = 0;
	for (int i = 0; i < sl_slob; i++) {
		sum += ispiti[i].ocena;
	}
	return sum / sl_slob;
}
const char* nema_mesta::what() const throw() {
	return "nema mesta!";
}