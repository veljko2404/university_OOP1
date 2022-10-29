#include <iostream>
#include <string>
using namespace std;
// +, -, *, /, ++, --, +=, -=, ==
class br {
	int a;
	float b;
public:
	br() : a(0), b(0) {}
	br(int aa, float bb) : a(aa), b(bb) {}
	friend ostream& operator<<(ostream& cout, br& v) {
		cout << to_string(v.a) + " " << to_string(v.b) << endl;
		return cout;
	}
	br operator+(br drugi) {
		br c(this->a + drugi.a, this->b + drugi.b);
		return c;
	}
	void operator++() {
		this->a++;
		this->b++;
	}
	void operator+=(br drugi) {
		this->a = this->a + drugi.a;
		this->b = this->b + drugi.b;
	}
	bool operator==(br drugi) {
		return this->a == drugi.a && this->b == drugi.b;
	}
	friend istream& operator>>(istream& is, br &br) {
		is >> br.a >> br.b;
		return is;
	}
};

int main() {

	br a(1,1), b(2,1), c, d;
	c += a;
	cout << c;
	if (c == b) cout << "isti";
	else cout << "razliciti";

	cin >> d;
	cout << d;

	return 0;
}