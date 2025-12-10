#include <iostream>

using namespace std;

int main() {
	int n;
	int arrayA[100];
	bool allEven = true;

	cout << "Introduceti numarul de elemente (n): ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "arrayA[" << i << "] = ";
		cin >> arrayA[i];
	}

	for (int i = 0; i < n; i++) {

		if (arrayA[i] % 2 != 0) {
			allEven = false;
			break;
		}
	}

	if (allEven) {
		cout << "Toate elementele vectorului sunt numere pare." << endl;
	} else {
		cout << "NU toate elementele vectorului sunt numere pare." << endl;
	}

	return 0;
}