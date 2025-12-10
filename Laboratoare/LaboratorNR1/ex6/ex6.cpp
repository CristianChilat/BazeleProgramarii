#import <iostream>

using namespace std;

int main() {
    int X;
    int Z;


    cout << "Introduceti varsta lui Nicolae si Mihai: ";
    cin >> X >> Z;

    cout << "Varsta medie este: " << (X + Z) / 2 << endl;

    if (X > Z) {
        cout << "Diferenta varstelor este: " << X - Z <<  endl;
    } else {
        cout << "Diferenta varstelor este: " << Z - X << endl;
    }
}