#import <iostream>

using namespace std;

int main() {
    int Ion;

    cout << "Ion spune: ";
    cin >> Ion;

    int Vasile = Ion - 2;

    cout << "Vasile spune: ";

    for (int i = 0; i < 5; i++) {
        cout << Vasile << " ";
        Vasile++;
    }
}