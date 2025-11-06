#import <iostream>

using namespace std;

int main() {
    int zi, luna, an;

    cout << "Introduceti ziua actuala: ";
    cin >> zi;

    cout << "Introduceti luna actuala: ";
    cin >> luna;

    cout << "Introduceti anul actual: ";
    cin >> an;

    if (luna < 1 || luna > 12) {
        cout << "Luna introdusa nu este valida! Luna trebuie sa fie intre 1 si 12." << endl;
        return 1;
    }

    if (zi < 1 || zi > 31) {
        cout << "Ziua introdusa nu este valida! Ziua trebuie sa fie intre 1 si 31." << endl;
        return 1;
    }

    if ((luna == 4 || luna == 6 || luna == 9 || luna == 11) && zi > 30) {
        cout << "Ziua introdusa nu este valida! Luna " << luna << " are maxim 30 de zile." << endl;
        return 1;
    }

    bool esteBisect = (an % 4 == 0 && an % 100 != 0) || an % 400 == 0;
    int zileFeb = esteBisect ? 29 : 28;
    
    if (luna == 2 && zi > zileFeb) {
        cout << "Ziua introdusa nu este valida! Februarie in anul " << an 
             << " are maxim " << zileFeb << " zile." << endl;
        return 1;
    }

    zi++;

    if ((luna == 4 || luna == 6 || luna == 9 || luna == 11) && zi > 30) {
        zi = 1;
        luna++;
    } else if (luna == 2) {
        if (zi > zileFeb) {
            zi = 1;
            luna++;
        }
    }

    if (luna > 12) {
        luna = 1;
        an++;
    }

    cout << "Ziua urmatoare este: " << zi << "." << luna << "." << an << endl;

    return 0;
}
