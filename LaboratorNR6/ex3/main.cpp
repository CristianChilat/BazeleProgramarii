#import <iostream>

using namespace std;

int CMMDC(int a, int b) {
	if (a == 0 && b == 0) {
		return 0;
	}

	if (a == b) {

		return a;
	}

	if (a > b) {

		for (int i = b; i > 0; i--) {

			if (a % i == 0 && b % i == 0) {

				return i;
			}
		}
	} else if (a < b) {

		for (int i = a; i > 0; i--) {

			if (a % i == 0 && b % i == 0) {

				return i;
			}
		}
	}
}

long long CMMMC(int a, int b) {
	long long abs_a = abs(a);
	long long abs_b = abs(b);

	if (abs_a == 0 || abs_b == 0) {
		return 0;
	}

	long long multiplu_a = abs_a;
	long long multiplu_b = abs_b;

	while (multiplu_a != multiplu_b) {

		if (multiplu_a < multiplu_b) {
			multiplu_a += abs_a;
		} else {
			multiplu_b += abs_b;
		}
	}

	return multiplu_a;
}

int main() {
	int num1;
	int num2;

	cout << "Introduceti doua numere pentru a afla CMMDC și CMMMC a acestor doua numere: ";
	cin >> num1;
	cin >> num2;

	cout << "Cel mai mare divizor comun este: " << CMMDC(num1, num2) << endl;
	cout << "Cel mai mic multiplu comun este: " << CMMMC(num1, num2) << endl;
}