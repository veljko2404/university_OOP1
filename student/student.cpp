#include "student.h"

student::student(string s) {
	ime = s;
}
string student::opisi() {
	return "ime: " + ime + ", indeks: " + indeks.opisi();
}
void student::polazi_ispit(string s, unsigned short a) {
	indeks.upisi_ocenu(s, a);
}
float student::koji_ti_prosek() {
	float pros = indeks.racunaj_prosek();
	return pros;
}