#include "dmatrix.h"

int dmatrix::id_counter = 0;

dmatrix::dmatrix():n(0), m(0), mat(nullptr), id(id_counter++) {}

dmatrix::dmatrix(int n,int m) : n(n), m(m) {
	if (n <= 0 || m <= 0)
		throw "dimenzije ne mogu bit nula i manje";

	mat = new int* [n];
	for (int i = 0; i < n; i++)
		mat[i] = new int[m];
}

dmatrix::dmatrix(int n) : dmatrix(n,n) {}


dmatrix::dmatrix(const dmatrix& druga){
	this->n = druga.n;
	this->m = druga.m;
	this->mat = new int* [n];
	for (int i = 0; i < n; i++) {
		this->mat[i] = new int[m];
		for (int j = 0; j < m; j++) {
			this->mat[i][j] = druga.mat[i][j];
		}
	}
}

dmatrix& dmatrix::operator=(const dmatrix& druga) {
	for (int i = 0; i < this->n; i++) {
		for (int j = 0; j < this->m; j++) {
			this->mat[i][j] = druga.mat[i][j];
		}
	}
	return *this;
}
istream& operator>>(istream& is, dmatrix& m) {
	cout << "Unesite: " << endl;
	is >> m.n >> m.m;
	for (int i = 0; i < m.n; i++) {
		for (int j = 0; j < m.m; j++) {
			is >> m.mat[i][j];
		}
	}
	return is;
}
ostream& operator<<(ostream& os, const dmatrix& m) {
	for (int i = 0; i < m.n; i++) {
		for (int j = 0; j < m.m; j++) {
			os << m.mat[i][j] << " ";
		}
		os << "\n";
	}
	return os;
}
bool operator==(const dmatrix& prva, const dmatrix& druga) {
	for (int i = 0; i < prva.n; i++) {
		for (int j = 0; j < prva.m; j++) {
			if (prva.mat[i][j] != druga.mat[i][j])
				return false;
		}
	}
	return true;
}
dmatrix& dmatrix::operator+=(const dmatrix& druga) {
	for (int i = 0; i < this->n; i++) {
		for (int j = 0; j < this->m; j++) {
			this->mat[i][j] += druga.mat[i][j];
		}
	}
	return *this;
}
int dmatrix::operator()(int a, int b) {
	return this->mat[a][b];
}
dmatrix& dmatrix::operator++() {
	for (int i = 0; i < this->n; i++) {
		for (int j = 0; j < this->m; j++) {
			this->mat[i][j]++;
		}
	}
	return *this;
}
dmatrix::~dmatrix() {
	for (int i = 0; i < this->n; i++)
		delete[] mat[i];
	delete[] mat;
}