#pragma once
#include <iostream>
#include <string>
using namespace std;

template<class T>
class matrix {
	int n, m;
	T*** mat;
public:
	matrix(int, int);
	matrix(const matrix<T>&);
	matrix<T>& operator=(const matrix<T>&);

	T& operator()(int, int);
	const matrix<T>& operator++(int);
	operator T() const;

	friend const matrix<T> operator+<T>(const matrix<T>&, const matrix<T>&);
	friend istream& operator>>(istream&, matrix<T>&);
	friend ostream& operator<<(ostream&, const matrix<T>&);

	~matrix();
};

template<class T>
matrix<T>::matrix(int n, int m) : n(n), m(m) {
	mat = new T * *[n];
	for (int i = 0; i < n; i++) {
		mat[i] = new T * [m];
		for (int j = 0; j < m; j++)
			mat[i][j] = new T();
	}
}
template<class T>
matrix<T>::matrix(const matrix<T>& druga):n(druga.n),m(druga.m) {
	mat = new T * *[n];
	for (int i = 0; i < n; i++) {
		mat[i] = new T * [m];
		for (int j = 0; j < m; j++) {
			mat[i][j] = new T();
			mat[i][j] = druga.mat[i][j];
		}	
	}
}
template<class T>
matrix<T>& matrix<T>::operator=(const matrix<T>& druga) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mat[i][j] = druga.mat[i][j];
		}
	}
}
template<class T>
T& matrix<T>::operator()(int a, int b) {
	return this->mat[a][b];
}
template<class T>
const matrix<T>& matrix<T>::operator++(int) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			this->mat[i][j]++;
		}
	}
	return *this;
}
template<class T>
matrix<T>::operator T()const{
	T ret = mat[0][0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (ret < mat[i][j])
				ret = mat[i][j];
		}
	}
	return ret;
}
template<class T>
const matrix<T> operator+(const matrix<T>& prva, const matrix<T>& druga){
	matrix<T> zbr(prva.n, prva.m);
	for (int i = 0; i < prva.n; i++) {
		for (int j = 0; j < prva.m; j++) {
			zbr.mat[i][j] = prva[i][j] + druga[i][j];
		}
	}
	return zbr;
}
template<class T>
istream& operator>>(istream& is, matrix<T>& mat) {
	cout << "Unesite matricu";
	for (int i = 0; i < mat.n; i++) {
		for (int j = 0; j < mat.m; j++) {
			is >> *mat.mat[i][j];
		}
	}
	return is;
}
template<class T>
ostream& operator<<(ostream& os, const matrix<T>& m) {
	for (int i = 0; i < m.n; i++) {
		for (int j = 0; j < m.m; j++) {
			os << *m.mat[i][j] << " ";
		}
		os << endl;
	}
	return os;
}
template<class T>
matrix<T>::~matrix(){
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			delete mat[i][j];
		}
		delete[] mat[i];
	}
	delete[] mat;
}


