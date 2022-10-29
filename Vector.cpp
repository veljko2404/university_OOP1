#include <iostream>
#include <vector>
using namespace std;

class klasa {
	int x,y;
public:
	int get() {
		return x * y;
	}
	klasa(int x, int y) {
		this->x = x;
		this->y = y;
	}
};

// slanje vektora u funkciju preko reference
void funkcija(vector<klasa>& v) {
	for (auto i = v.begin(); i != v.end(); i++) // drugi nacin za ispis vektora
		cout << (* i).get() << " ";
	cout << endl;
}

int main() {
	// vektor je sablonski wrapper za dinamicki niz
	vector<klasa> brojevi; // vektor se sastoji od clasa js
	brojevi.push_back(klasa(4, 3)); // funkcija za ubacivanje podataka
	brojevi.push_back(klasa(9, 5));
	brojevi.push_back(klasa(2, 8));
	brojevi.push_back(klasa(1, 9));
	brojevi.push_back(klasa(2, 7));

	for (auto i = 0; i < brojevi.size(); i++)
		cout << brojevi[i].get() << " ";

	cout << endl;
	for (auto i = brojevi.rbegin(); i != brojevi.rend(); i++) // ispis vektora u suprotnom smeru
		cout << (*i).get() << " ";

	cout << endl << endl;

	funkcija(brojevi);

	brojevi.erase(brojevi.begin() + 2); // brise 3. element u vektoru (nizu)

	cout << brojevi.size() << endl; // broj elemenata u nizu
	cout << brojevi.capacity() << endl; // broj alociranih mesta
	
	brojevi.shrink_to_fit(); // smanjuje capacity do size

	if (brojevi.empty() == false) cout << "prazan" << endl; // proverava da li je prazan

	cout << brojevi.at(1).get() << endl; // ispisuje 2 element

	cout << brojevi.front().get() << endl; // ispisuje 1 element

	cout << brojevi.back().get() << endl; // ispisuje zadnji el

	cout << brojevi.data()->get() << endl; // pokazivac na 1 element

	brojevi.assign(5, klasa(4, 3)); // ubaci 5 puta element klasa()

	brojevi.pop_back(); // brise poslednji element

	brojevi.insert(brojevi.begin() + 2, klasa(2, 1)); // ubaci element klasa() na 2 mesto

	brojevi.clear(); // brise elemente iz vektora

	vector<klasa> drugi;
	drugi.assign(4, klasa(3, 2));
	brojevi.assign(2, klasa(5, 6));

	drugi.swap(brojevi); // zamenjuje 2 vektora

	funkcija(brojevi);
	funkcija(drugi);

	return 0;
}