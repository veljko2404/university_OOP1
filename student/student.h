#pragma once
#include "indeks.h"

class student {
	string ime;
	indeks indeks;
public:
	student(string);
	student(student&) = delete;
	student& operator=(student&) = delete;

	string opisi();
	float koji_ti_prosek();
	void polazi_ispit(string,unsigned short);
};