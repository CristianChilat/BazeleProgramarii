#import <iostream>

using namespace std;

int main() {
    float a, b;
    int c;

    cout << "Ce doriți să calculați, media aritmetică sau geometrică?" << endl;
    cin >> c;

    if (c == 1 || c == 2) {
        cout << "Introduceti primul numar: ";
        cin >> a;
        cout << "Introduceti al doilea numar: ";
        cin >> b;

        if (c == 1) {
            cout << "Media aritmetica este: " << (a + b) /2 << endl;
        } else if (c == 2) {

            if (a * b > 0) {
                cout << "Media geometrica este: " << sqrt(a * b) << endl;
            } else {
                cout << "Una din valori este negativa!";
            }
        }
    } else {
        cout << "Nu exista asa o operatie";
    }



}