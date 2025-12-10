#include <iostream>

using namespace std;

int calculateGreatestCommonDivisor(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main() {
	int num1, num2, num3;

	cout << "Introduceti 3 numere naturale: ";
	cin >> num1 >> num2 >> num3;

	int gcdTemp = calculateGreatestCommonDivisor(num1, num2);
	int gcdFinal = calculateGreatestCommonDivisor(gcdTemp, num3);

	cout << "Cel mai mare divizor comun este: " << gcdFinal << endl;

	return 0;
}