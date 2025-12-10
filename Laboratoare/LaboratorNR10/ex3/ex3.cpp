#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char text[256];
	char subString[256];
	int count = 0;

	cout << "Introduceti textul (sfarsit cu .): ";
	cin.getline(text, 256);

	cout << "Introduceti sirul cautat (sc): ";
	cin.getline(subString, 256);

	int textLen = strlen(text);
	int subLen = strlen(subString);

	for (int i = 0; i <= textLen - subLen; i++) {

		bool match = true;
		for (int j = 0; j < subLen; j++) {

			if (text[i + j] != subString[j]) {
				match = false;
				break;
			}
		}

		if (match) {
			count++;
		}
	}

	cout << "Numarul de aparitii al sirului cautat este: " << count << endl;

	return 0;
}