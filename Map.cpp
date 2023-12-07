#include <iostream>
#include <map>
using namespace std;

int main() {
	// mapa je kolekcija key value parova
	map<string, float> m;  // string je key, a float je value

	m["a"] = 180.5;
	m["b"] = 178.4;
	m["c"] = 193.1;
	m["d"] = 206.7;

	cout << m["a"] << endl;

	m["c"] += 4.5;

	cout << m["d"] << endl;

	for (auto i : m)
		cout << i.first << " je visok: " << i.second << endl;


	return 0;
}
