#include <iostream>
#include <map>
using namespace std;

int main() {
	// mapa je kolekcija key value parova
	map<string, float> m;  // string je key, a float je value

	m["veljko"] = 180.5;
	m["marija"] = 178.4;
	m["pera"] = 193.1;
	m["mika"] = 206.7;

	cout << m["veljko"] << endl;

	m["pera"] += 4.5;

	cout << m["pera"] << endl;

	for (auto i : m)
		cout << i.first << " je visok: " << i.second << endl;


	return 0;
}