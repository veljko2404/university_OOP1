#include <iostream>
#include <deque>
using namespace std;

void ispis(deque<int>* d) {
	for (int a : *d)
		cout << a << " ";
	cout << endl;
}

int main() {
	// elementi se mogu dodavati i skidati sa obe strane
	deque<int> de;
	de.push_back(4); // ubacuje na kraj
	de.push_front(5); // ubacuje na pocetak
	de.push_back(2);
	de.push_front(9);
	de.push_front(8);

	ispis(&de);

	de.pop_front(); // brise prvi
	de.pop_back(); // brise zadnji
	de.insert(de.begin() + 2, 9); // ubacuje na 3 mesto

	ispis(&de);



	return 0;
}