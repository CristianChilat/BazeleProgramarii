#include <iostream>

using namespace std;

struct Student {
	char name[50];
	int year;
	char group[20];
	float average;
};

int main() {
	int n;
	Student students[100];

	cout << "Introduceti numarul de studenti: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Studentul " << i + 1 << endl;
		cout << "Nume: ";
		cin >> students[i].name;
		cout << "Anul: ";
		cin >> students[i].year;
		cout << "Grupa: ";
		cin >> students[i].group;
		cout << "Media: ";
		cin >> students[i].average;
		cout << endl;
	}

	cout << "--- Studenti din anul 3 cu media peste 8.50 ---" << endl;
	bool found = false;
	for (int i = 0; i < n; i++) {
		if (students[i].year == 3 && students[i].average > 8.50) {
			cout << students[i].name << " (Grupa: " << students[i].group << ", Media: " << students[i].average << ")" << endl;
			found = true;
		}
	}
	if (!found) {
		cout << "Nu exista studenti care sa indeplineasca conditiile." << endl;
	}

	int maxIndex = 0;
	for (int i = 1; i < n; i++) {
		if (students[i].average > students[maxIndex].average) {
			maxIndex = i;
		}
	}

	cout << endl << "--- Studentul cu cea mai mare medie ---" << endl;
	cout << "Nume: " << students[maxIndex].name << endl;
	cout << "Media: " << students[maxIndex].average << endl;

	return 0;
}