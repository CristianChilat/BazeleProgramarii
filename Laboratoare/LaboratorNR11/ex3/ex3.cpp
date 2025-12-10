#include <iostream>

using namespace std;

int main() {
	int n;
	int matrix[30][30];
	int sumAboveMain = 0;
	int sumBelowSecondary = 0;

	cout << "Introduceti dimensiunea matricei patrate (n): ";
	cin >> n;

	cout << "Introduceti elementele matricei:" << endl;
	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {
			cout << "matrix[" << i << "][" << j << "] = ";
			cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {

			if (i < j) {
				sumAboveMain += matrix[i][j];
			}

			if (i + j > n - 1) {
				sumBelowSecondary += matrix[i][j];
			}
		}
	}

	cout << "Suma elementelor de deasupra diagonalei principale: " << sumAboveMain << endl;
	cout << "Suma elementelor de sub diagonala secundara: " << sumBelowSecondary << endl;

	return 0;
}