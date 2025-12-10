#include <iostream>


using namespace std;

struct Product {
	char name[50];
	float price;
	int code;
};

int main() {
	int n;
	Product products[100];

	cout << "Introduceti numarul de produse: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Produsul " << i + 1 << endl;
		cout << "Denumire: ";
		cin >> products[i].name;
		cout << "Pret: ";
		cin >> products[i].price;
		cout << "Cod numeric: ";
		cin >> products[i].code;
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		if (products[i].code <= 200) {
			products[i].price = products[i].price * 1.05;
		} else {
			products[i].price = products[i].price * 1.13;
		}
	}

	cout << "--- Lista produselor cu preturi actualizate ---" << endl;
	for (int i = 0; i < n; i++) {
		cout << products[i].name << " - Pret nou: " << products[i].price << endl;
	}

	float maxPrice = products[0].price;
	for (int i = 1; i < n; i++) {
		if (products[i].price > maxPrice) {
			maxPrice = products[i].price;
		}
	}

	cout << endl << "--- Produsele cu cel mai mare pret (" << maxPrice << ") ---" << endl;
	for (int i = 0; i < n; i++) {
		if (products[i].price == maxPrice) {
			cout << products[i].name << endl;
		}
	}

	return 0;
}