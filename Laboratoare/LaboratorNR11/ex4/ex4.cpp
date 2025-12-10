#include <iostream>

using namespace std;

int main() {
	int n, m;
	int matrix[30][30];

	cout << "Introduceti numarul de linii (n): ";
	cin >> n;
	cout << "Introduceti numarul de coloane (m): ";
	cin >> m;

	cout << "Introduceti elementele matricei:" << endl;
	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {
			cout << "matrix[" << i << "][" << j << "] = ";
			cin >> matrix[i][j];
		}
	}



	cout << "Minimul de pe fiecare linie:" << endl;
	for (int i = 0; i < n; i++) {

		int minVal = matrix[i][0];
		for (int j = 1; j < m; j++) {

			if (matrix[i][j] < minVal) {
				minVal = matrix[i][j];
			}
		}
		cout << "Linia " << i + 1 << ": " << minVal << endl;
	}


	cout << "Maximul de pe fiecare coloana:" << endl;
	for (int j = 0; j < m; j++) {

		int maxVal = matrix[0][j];
		for (int i = 1; i < n; i++) {

			if (matrix[i][j] > maxVal) {
				maxVal = matrix[i][j];
			}
		}
		cout << "Coloana " << j + 1 << ": " << maxVal << endl;
	}

	return 0;
}