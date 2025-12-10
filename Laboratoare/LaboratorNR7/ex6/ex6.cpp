#include <iostream>
#include <cmath>

using namespace std;

int calculateQuadraticFunction(int x) {
	return 3 * x * x + x + 2;
}

int main() {
	int startInterval = -2;
	int endInterval = 5;

	cout << "Valorile functiei pe intervalul [-2, 5]:" << endl;

	for (int i = startInterval; i <= endInterval; i++) {
		int result = calculateQuadraticFunction(i);
		cout << "f(" << i << ") = " << result << endl;
	}

	return 0;
}