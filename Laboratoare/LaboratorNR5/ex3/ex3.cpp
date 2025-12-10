#include <iostream>

using namespace std;

int cmmdc(int a, int b) {
	while (a != b) {
		if (a > b) {
			a = a - b;
		} else {
			b = b - a;
		}
	}
	return a;
}

int main() {
	int num1;
	int num2;

	cout << "Pentru a opri programul introduceti 0" << endl;

	do {
		cout << "Introduceti numarul 1: ";
		cin >> num1;

		if (num1 == 0) {
			cout << "Programul a fost terminat." << endl;
			break;
		}

		cout << "Introduceti numarul 2: ";
		cin >> num2;

		if (num2 == 0) {
			cout << "Programul a fost terminat." << endl;
			break;
		}

		cout << endl;

		if (cmmdc(num1, num2) == 1) {
			cout << "Numerele sunt prime intre ele." << endl;
		} else {
			cout << "Numerele nu sunt prime intre ele." << endl;
		}

		cout << "-----------" << endl;




	} while (num1 != 0 && num2 != 0);
}