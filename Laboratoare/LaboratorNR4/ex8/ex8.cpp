#import <iostream>

using namespace std;

int main() {
	int Sum = 1;
	int S = 0;
	int n;
	cout << "Introduceti numarul limita sirului S=1+1*2+1*2*3+...+1*2* ...*n.: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		Sum = 1;
		for (int j = 1; j <= i; j++) {
			Sum *= j;
		}
		S += Sum;
	}

	cout << "Suma sirului S=1+1*2+1*2*3+...+1*2* ...*" << n <<" este: " << S << endl;
}