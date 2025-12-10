#include <iostream>

using namespace std;

int main() {
	int n;
	int arrayA[100];

	cout << "Introduceti numarul de elemente (n): ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "arrayA[" << i << "] = ";
		cin >> arrayA[i];
	}

	int minVal = arrayA[0];
	int maxVal = arrayA[0];

	for (int i = 1; i < n; i++) {
		if (arrayA[i] < minVal) {
			minVal = arrayA[i];
		}
		if (arrayA[i] > maxVal) {
			maxVal = arrayA[i];
		}
	}

	for (int i = 0; i < n; i++) {
		if (arrayA[i] == minVal) {
			arrayA[i] = maxVal;
		}
	}

	cout << "Vectorul modificat este:" << endl;
	for (int i = 0; i < n; i++) {
		cout << arrayA[i] << " ";
	}

	return 0;
}