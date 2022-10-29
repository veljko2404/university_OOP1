#pragma once
#include "ispit.h"

class indeks {
private:
	static const unsigned short br_polja = 36;
	static int counter;

	int br_ind;
	unsigned short sl_slob;
	ispit ispiti[br_polja];
public:
	indeks();
	indeks(const indeks&) = delete;
	indeks operator=(const indeks) = delete;

	string opisi();
	void upisi_ocenu(string, unsigned short);
	float racunaj_prosek();
};

class nema_mesta : public exception {
public:
	virtual const char* what() const throw();
};