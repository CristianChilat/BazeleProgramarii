#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char text[256];
	bool isPalindrome = true;

	cout << "Introduceti textul: ";
	cin.getline(text, 256);

	int length = strlen(text);

	for (int i = 0; i < length / 2; i++) {
		if (text[i] != text[length - 1 - i]) {
			isPalindrome = false;
			break;
		}
	}

	if (isPalindrome) {
		cout << "Sirul este palindrom." << endl;
	} else {
		cout << "Sirul NU este palindrom." << endl;
	}

	return 0;
}