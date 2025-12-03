#include <iostream>

using namespace std;

int main() {
	int num;
	int n;
	int maxDigit = INT_MIN;
	int minDigit = INT_MAX;

	cout << "Introduceti un numar pentru a afla cifra maxima si minima: ";
	cin >> num;

	do {
		n = num % 10;

		if (n < minDigit) {
			minDigit = n;
		}
		if (n > maxDigit) {
			maxDigit = n;
		}

		num /= 10;
	} while (num != 0);

	cout << "Cifra minima este: " << minDigit << endl;
	cout << "Cifra maxima este: " << maxDigit << endl;
}