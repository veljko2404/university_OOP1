#include <iostream>
#include <vector>
using namespace std;
int vector1() {
	vector<int> g1;
	for (int i = 0; i < 5; i++) {
		g1.push_back(i);
	}
	for (auto i = g1.begin(); i != g1.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
	for (auto i = g1.cbegin(); i != g1.cend(); i++) {
		cout << *i << " ";
	}
	cout << endl;
	for (auto i = g1.rbegin(); i != g1.rend(); i++) {
		cout << *i << " ";
	}
	cout << endl;
	for (auto i = g1.crbegin(); i != g1.crend(); i++) {
		cout << *i << " ";
	}
	cout << endl;
	return 0;
}
int vector2() {
	vector<int> g1;
	for (int i = 0; i < 5; i++) {
		g1.push_back(i);
	}
	cout << g1.size() << endl;
	cout << g1.capacity() << endl;
	cout << g1.max_size() << endl;

	g1.resize(4);

	cout << g1.size() << endl;
	cout << g1.capacity() << endl;
	cout << g1.max_size() << endl;

	if (g1.empty() == true) {
		cout << "g1 je prazan" << endl;
	}

	g1.shrink_to_fit(); //smanji kapacitet da bude jednak size

	cout << g1.size() << endl; //broj elemenate u vectoru
	cout << g1.capacity() << endl; //broj alociranih
	cout << g1.max_size() << endl; //
	return 0;

}
int vector3() {
	vector<int> g1;
	for (int i = 1; i <= 10; i++)
		g1.push_back(i * 10);
	cout << g1[5] << endl;
	cout << g1.at(2) << endl;
	cout << g1.front() << endl;
	cout << g1.back() << endl;
	cout << *(g1.data()+2) << endl; //pokazivac na nulti el niza

	for (int i = 0; i < g1.size(); i++) { //moze da se iterira
		cout << g1[i] << " ";
	}
	return 0;
}
int vector4() {
	vector<int>g1;
	g1.assign(5, 10); //ubaci 5 puta el 10

	for (int i = 0; i < g1.size(); i++) {
		cout << g1[i] << " ";
	}
	cout << endl;

	g1.push_back(3);
	for (int i = 0; i < g1.size(); i++) {
		cout << g1[i] << " ";
	}
	cout << endl;

	g1.pop_back(); //brise zadnji

	for (int i = 0; i < g1.size(); i++) {
		cout << g1[i] << " ";
	}
	cout << endl;

	g1.insert(g1.begin() + 2, 5);
	g1.insert(g1.begin(), 9); //ubacije

	for (int i = 0; i < g1.size(); i++) {
		cout << g1[i] << " ";
	}
	cout << endl;

	g1.erase(g1.begin() + 3);

	for (int i = 0; i < g1.size(); i++) {
		cout << g1[i] << " ";
	}
	cout << endl;

	g1.clear(); //brise vector

	for (int i = 0; i < g1.size(); i++) {
		cout << g1[i] << " ";
	}
	cout << endl;
	cout << g1.size() << endl; //broj elemenate u vectoru
	cout << g1.capacity() << endl; //broj alociranih

	vector<int> g2;
	g2.assign(5, 1);
	g1.assign(7, 2);

	for (int i = 0; i < g2.size(); i++) {
		cout << g2[i] << " ";
	}
	cout << endl;

	g1.swap(g2);
	cout << "SWAP: " << endl << "g1: ";

	for (int i = 0; i < g1.size(); i++) {
		cout << g1[i] << " ";
	}
	cout << endl << "g2: ";

	for (int i = 0; i < g2.size(); i++) {
		cout << g2[i] << " ";
	}
	cout << endl;
	return 0;
}
#include <deque>
int deque1() {

	deque<int> gq;
	gq.push_back(5);
	gq.push_front(6);
	gq.push_back(8);

	for (auto i = gq.begin(); i != gq.end(); i++)
		cout << *i << " ";
	cout << endl;

	cout << gq.size() << endl;
	cout << gq.max_size() << endl;

	cout << gq.at(2) << endl;
	cout << gq[1] << endl;
	cout << gq.front() << endl;
	cout << gq.back() << endl;

	gq.pop_back();

	for (auto i = gq.begin(); i != gq.end(); i++)
		cout << *i << " ";
	cout << endl;

	gq.pop_front();

	for (auto i = gq.begin(); i != gq.end(); i++)
		cout << *i << " ";
	cout << endl;

	return 0;

}
#include <stack>
int stack1() {

	stack<int> st;
	st.push(5);
	st.push(4);
	st.push(2);
	st.push(8);
	st.push(1);
	st.pop();
	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
	cout << endl;

	return 0;
}
#include <queue>
int queue1() {
	queue<int> q;
	q.push(5);
	q.push(4);
	q.push(2);
	q.push(0);
	q.push(7);
	q.push(2);
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	return 0;

}
#include <unordered_set>
int unordered_set1() {
	
	unordered_set<string> stringset; //skup razlicitih elementa
	stringset.insert("milan");
	stringset.insert("ana");
	stringset.insert("milan");
	stringset.insert("ivana");
	stringset.erase("ana");
	for (auto i = stringset.begin(); i != stringset.end(); i++)
		cout << *i << " ";
	cout << endl;

	string k = "ana";
	if (stringset.find(k) == stringset.end())
		cout << "string se ne sadrzi" << endl;
	else
		cout << "sadrzi" << endl;
	return 0;
}
#include <set> //elementi su uredjeni <=
int set1() {
	set<int> s;
	set<string> stringset;
	s.insert(6);
	s.insert(7);
	s.insert(1);
	s.insert(3);
	for (auto i = s.begin(); i != s.end(); i++) {
		cout << *i << endl;
	}
	stringset.insert("milan");
	stringset.insert("ana");
	stringset.insert("milan");
	stringset.insert("ivana");
	stringset.insert("luka");
	stringset.insert("velja");
	stringset.insert("mika");
	stringset.erase("ana");
	for (auto i = stringset.begin(); i != stringset.end(); i++)
		cout << *i << " ";
	cout << endl;

	string k = "velja";
	if (stringset.count(k) == 1)
		cout << "u setu" << endl;
	else
		cout << "nije u setu" << endl;
	return 0;
}
//#include <pair> vec ima
#include <map>
int map1() {
	//2 nacina da se napravi
	pair<int, string> p = make_pair(3,"velja"); //f-ja
	pair<int, int> p2(5,4); // konstruktor

	cout << p.first << endl;
	cout << p.second << endl;

	//mape:
	//mapa kao kolekcija key,value parova
	map<string,int> m; //string je tip za key a int je tip za value

	m["velja"] = 4;
	m["kola"] = 6;
	m["cop"] = 1;
	m["cop"] += 6;

	cout << m["velja"] << endl;
	cout << m["nema"] << endl; // kljuc 'nema' ne postoji i dobio je vrednost 0
	cout << m["cop"] << endl;
	cout << endl;

	for (auto i = m.begin(); i != m.end(); i++) {
		cout << i->first << " " << i->second << endl;
	}

	return 0;
}
void printstack(stack<int>& s)
{
	if (s.empty())
	{
		cout << endl;
		return;
	}
	int x = s.top();
	s.pop();
	printstack(s);
	s.push(x);
	cout << x << " ";
}
int main() {

	stack<int>prvi;
	stack<int>drugi;
	stack<int>treci;
	prvi.push(6);
	prvi.push(5);
	prvi.push(4);
	prvi.push(3);
	prvi.push(2);
	prvi.push(1);
	string komanda;
	cout << "Prvi: ";
	printstack(prvi); cout << endl;
	cout << "Drugi: ";
	printstack(drugi); cout << endl;
	cout << "Treci: ";
	printstack(treci); cout << endl;
	while (true) {
		cin >> komanda;
		if (komanda == "stop") {
			cout << "rezultat:" << endl;
			break;
		} 
		else if (komanda == "1na2") {
			if (drugi.empty()) {
				drugi.push(prvi.top());
				prvi.pop();
			} else if (drugi.top() > prvi.top()) {
				drugi.push(prvi.top());
				prvi.pop();
			} else {
				cout << "Nije moguce!" << endl;
			}
		} 
		else if (komanda == "1na3") {
			if (treci.empty()) {
				treci.push(prvi.top());
				prvi.pop();
			}
			else if (treci.top() > prvi.top()) {
				treci.push(prvi.top());
				prvi.pop();
			}
			else {
				cout << "Nije moguce!" << endl;
			}
		} 
		else if (komanda == "2na3") {
			if (treci.empty()) {
				treci.push(drugi.top());
				drugi.pop();
			}
			else if (treci.top() > drugi.top()) {
				treci.push(drugi.top());
				drugi.pop();
			}
			else {
				cout << "Nije moguce!" << endl;
			}
		}
		else if (komanda == "3na2") {
			if (drugi.empty()) {
				drugi.push(treci.top());
				treci.pop();
			}
			else if (drugi.top() > treci.top()) {
				drugi.push(treci.top());
				treci.pop();
			}
			else {
				cout << "Nije moguce!" << endl;
			}
		} 
		else if (komanda == "3na1") {
			if (prvi.empty()) {
				prvi.push(treci.top());
				treci.pop();
			}
			else if (prvi.top() > treci.top()) {
				prvi.push(treci.top());
				treci.pop();
			}
			else {
				cout << "Nije moguce!" << endl;
			}
		} 
		else if (komanda == "2na1") {
			if (prvi.empty()) {
				prvi.push(drugi.top());
				drugi.pop();
			}
			else if (prvi.top() > drugi.top()) {
				prvi.push(drugi.top());
				drugi.pop();
			}
			else {
				cout << "Nije moguce!" << endl;
			}
		}
		else {
			cout << "Nepoznata komanda!" << endl;
		}
		cout << "Prvi: ";
		printstack(prvi); cout << endl;
		cout << "Drugi: ";
		printstack(drugi); cout << endl;
		cout << "Treci: ";
		printstack(treci); cout << endl;
	}
	cout << "Prvi: ";
	printstack(prvi); cout << endl;
	cout << "Drugi: ";
	printstack(drugi); cout << endl;
	cout << "Treci: ";
	printstack(treci); cout << endl;

	return 0;
}
