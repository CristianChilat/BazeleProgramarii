#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char text[256];

	cout << "Introduceti textul: ";
	cin.getline(text, 256);

	int length = strlen(text);

	for (int i = 0; i < length; i++) {
		char c = text[i];
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
			c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
			text[i] = '*';
			}
	}

	cout << "Textul modificat: " << text << endl;

	return 0;
}