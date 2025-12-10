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

	int temp = arrayA[0];
	arrayA[0] = arrayA[n - 1];
	arrayA[n - 1] = temp;

	cout << "Vectorul modificat este:" << endl;

	for (int i = 0; i < n; i++) {
		cout << arrayA[i] << " ";
	}

	return 0;
}