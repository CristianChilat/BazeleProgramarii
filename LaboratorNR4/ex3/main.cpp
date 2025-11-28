#include <iostream>

using namespace std;

int main() {
	int n;
	int evenNumberSum = 0;
	int oddNumberSum = 0;
	cout << "Introduceti numarul limita: ";
	cin >> n;


	int i = 0;
	do {
		if (i % 2 == 0) {
			evenNumberSum += i;
		} else {
			oddNumberSum += i;
		}
		i++;
	} while (i < n);

	cout << "Suma numerele impare este: " << oddNumberSum << endl;
	cout << "Suma numerele pare este: " << evenNumberSum << endl;
}