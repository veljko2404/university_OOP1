#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void prikazi(int *a, int n) {
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

int main() {

	int i; const int n = 10; int niz[n];
	vector<int> vec;
	for (i = 0; i < n; i++) {
		niz[i] = i;
		vec.push_back(niz[i]);
	}

	prikazi(niz, n);
	prikazi(vec.data(), n); // mora da vrati pokazivac

	sort(niz, niz + n); // sortira niz

	sort(vec.data(), vec.data() + n); // sortiranje vektora

	prikazi(niz, n);
	prikazi(vec.data(), n);

	//for (int i : vec) // jos jedan vid iteracije
	//	cout << i << " ";

	int el = 6;
	if (binary_search(niz, niz + n, el)) // binarna pretraga, vraca 0 ili 1
		cout << "Postoji el: " << el << endl;
	else
		cout << "Ne postoji el " << el << endl;

	if (binary_search(vec.data(), vec.data() + n, el))
		cout << "Postoji el: " << el << endl;
	else
		cout << "Ne postoji el " << el << endl;

	return 0;
}