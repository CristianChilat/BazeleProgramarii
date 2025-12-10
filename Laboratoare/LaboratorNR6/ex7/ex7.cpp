#import <iostream>

using namespace std;

int perfectNum(int n) {
	int x = 0;
	for (int i = 2; i <= sqrt(n); i++) {

		if (n % i == 0) {
			x++;
		}

		if (x > 0) {
			return 0;
		}
	}

	if (x == 0) {
		return 1;
	}
	return 0;
}

int main() {
	int num;

	cout << "Introduceti un numar pentru a afla daca acesta este perfect: ";
	cin >> num;

	if (perfectNum(num)) {
		cout << num << " is a perfect number.\n";
	} else {
		cout << num << " is not a perfect number.\n";
	}
}