#import <iostream>

using namespace std;

int main() {
	cout << "Numerele cu 3 cifre a caror suma e divizibila la 5: " << endl;
	for (int i = 100; i <= 999; i++) {

		int num = i;
		int threeDigitsSum = 0;
		for (int j = 0; j < 3; j++) {
			threeDigitsSum += num % 10;
			num /= 10;
		}

		if (threeDigitsSum % 5 == 0) cout << i << endl;
	}
}