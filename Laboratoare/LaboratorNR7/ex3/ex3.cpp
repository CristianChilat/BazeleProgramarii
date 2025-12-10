#include <iostream>

using namespace std;

int calculateMax(int val1, int val2) {
	if (val1 > val2) {
		return val1;
	} else {
		return val2;
	}
}

int main() {
	int numberA, numberB;

	cout << "Introduceti numarul a: ";
	cin >> numberA;
	cout << "Introduceti numarul b: ";
	cin >> numberB;

	int sumResult = numberA + numberB;
	int prodResult = numberA * numberB;

	int maxResult = calculateMax(sumResult, prodResult);

	cout << "Suma este: " << sumResult << endl;
	cout << "Produsul este: " << prodResult << endl;
	cout << "Maximul dintre (a+b) si (a*b) este: " << maxResult << endl;

	return 0;
}