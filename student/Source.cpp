#include "student.h"
#include <fstream>

int main() {
	
	ifstream citaj("studenti.txt");
	string s; bool ok = true; string p;
	student pera("pera");
	while (citaj >> s) {
		if (ok) {
			p = s; ok = false;
		}
		else {
			pera.polazi_ispit(p, stoul(s));
			ok = true;
		}
			
	}
	try {
		for (int i = 0; i < 100; i++) {
			pera.polazi_ispit("oop" + to_string(i), 10);
		}
	}
	catch (const nema_mesta& e) {
		cout << "izuzetak " << e.what() << endl;
	}
	catch (...) {
		cout << "nepoznati" << endl;
	}
	cout << pera.koji_ti_prosek();
	citaj.close();

}