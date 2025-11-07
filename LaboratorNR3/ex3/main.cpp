#include <iostream>

using namespace std;

int main() {
    char caracter;

    cout << "Introduceti un caracter: ";
    cin >> caracter;

    if (caracter >= 'a' && caracter <= 'z' || caracter >= 'A' && caracter <= 'Z') {
        if (
        (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u')
        || (caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U')
        ) {
            cout << "Caracterul este o vocala" << endl;
        } else {
            cout << "Caracterul este o consoana" << endl;
        }
    } else {
        cout << "Invalid input";
    }
}