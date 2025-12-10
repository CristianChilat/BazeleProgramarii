#include <iostream>

using namespace std;

int main() {
	int n;
	int arrayA[100];
	int countNeighbors = 0;

	cout << "Introduceti numarul de elemente (n): ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "arrayA[" << i << "] = ";
		cin >> arrayA[i];
	}

	for (int i = 0; i < n - 1; i++) {
		if ((arrayA[i] > 0 && arrayA[i + 1] < 0) || (arrayA[i] < 0 && arrayA[i + 1] > 0)) {
			countNeighbors++;
		}
	}

	cout << "Numarul de elemente vecine cu semn opus este: " << countNeighbors << endl;

	return 0;
}