#include <iostream>

using namespace std;

int main() {
	int num;
	int x = 0;
	int y = 0;

	cout << "Introduceti un numar pentru a afla cate cifre pare si imapare sunt: " << endl;
	cin >> num;

	do {
		int n = num % 10;
		if (n % 2 == 0) {
			x ++;
		} else {
			y++;
		}

		num /= 10;
	} while (num != 0);

	cout << "Numarul de cifre imapare este: " << y << endl;
	cout << "Numarul de cifre pare sunt: " << x << endl;
}