#include "ispit.h"

ispit::ispit() {
	predmet = "";
	ocena = 0;
}
string ispit::opisi() {
	return "{ " + predmet + " , ocena: " + to_string(ocena) + " }";
}