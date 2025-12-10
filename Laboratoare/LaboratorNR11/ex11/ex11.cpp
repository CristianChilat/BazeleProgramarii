#include <iostream>

using namespace std;

int main() {
	int n;
	int matrix[30][30];
	int currentEven = 2;

	cout << "Introduceti dimensiunea n: ";
	cin >> n;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {
			matrix[i][j] = currentEven;
			currentEven += 2;
		}
	}

	cout << "Matricea generata este:" << endl;
	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}