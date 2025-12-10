#include <iostream>
#include <cstring>

using namespace std;

struct Car {
	char name[50];
	float price;
	int year;
};

int main() {
	int n;
	Car cars[100];

	cout << "Introduceti numarul de automobile: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Automobilul " << i + 1 << endl;
		cout << "Marca (Nume): ";
		cin >> cars[i].name;
		cout << "Pret: ";
		cin >> cars[i].price;
		cout << "Anul fabricatiei: ";
		cin >> cars[i].year;
		cout << endl;
	}

	int daciaCount = 0;
	for (int i = 0; i < n; i++) {
		if (strcmp(cars[i].name, "Dacia") == 0) {
			if (cars[i].year >= 1990 && cars[i].year <= 1995) {
				daciaCount++;
			}
		}
	}

	cout << "Numarul de automobile Dacia intre 1990 si 1995: " << daciaCount << endl << endl;

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (cars[j].price > cars[j + 1].price) {
				Car temp = cars[j];
				cars[j] = cars[j + 1];
				cars[j + 1] = temp;
			}
		}
	}

	cout << "--- Lista automobilelor ordonate crescator dupa pret ---" << endl;
	for (int i = 0; i < n; i++) {
		cout << cars[i].name << " - Pret: " << cars[i].price << ", An: " << cars[i].year << endl;
	}

	return 0;
}