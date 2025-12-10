#include <iostream>

using namespace std;

int main() {
	int n, k;
	int arrayA[100];
	int position = -1;

	cout << "Introduceti valoarea k: ";
	cin >> k;

	cout << "Introduceti numarul de elemente (n): ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "arrayA[" << i << "] = ";
		cin >> arrayA[i];
	}

	for (int i = 0; i < n; i++) {
		if (arrayA[i] > k) {
			position = i;
			break;
		}
	}

	if (position != -1) {
		cout << "Pozitia (indexul) primului element mai mare decat " << k << " este: " << position << endl;
	} else {
		cout << "Nu exista elemente mai mari decat " << k << " in vector." << endl;
	}

	return 0;
}