#pragma once
#include <iostream>
#include <string>
using namespace std;

class dmatrix {
private:
	static int id_counter;
	int id;
	int n, m;
	int** mat;
public:
	dmatrix();
	dmatrix(int);
	dmatrix(int, int);
	dmatrix(const dmatrix&);
	dmatrix& operator=(const dmatrix&);

	dmatrix& operator+=(const dmatrix&);
	int operator()(int, int);
	dmatrix& operator++();

	friend bool operator==(const dmatrix&, const dmatrix&);

	friend istream& operator>>(istream&, dmatrix&);
	friend ostream& operator<<(ostream&, const dmatrix&);

	~dmatrix();

};