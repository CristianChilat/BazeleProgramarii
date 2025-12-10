#include <iostream>

using namespace std;

int main() {
	int n;
	int arrayA[100];
	bool isSorted = true;

	cout << "Introduceti numarul de elemente (n): ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "arrayA[" << i << "] = ";
		cin >> arrayA[i];
	}

	for (int i = 0; i < n - 1; i++) {
		if (arrayA[i] >= arrayA[i + 1]) {
			isSorted = false;
			break;
		}
	}

	if (isSorted) {
		cout << "Vectorul este ordonat strict crescator." << endl;
	} else {
		cout << "Vectorul NU este ordonat strict crescator." << endl;
	}

	return 0;
}