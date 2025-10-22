#include <iostream>

using namespace std;

int main() {
    int X;

    cout << "Introduceti un numar din 3 cifre: ";
    cin >> X;

    int d1 = X / 100;
    int d2 = (X / 10) % 10;
    int d3 = X % 10;

    int mn = d1;
    if (d2 < mn) mn = d2;
    if (d3 < mn) mn = d3;

    int mx = d1;
    if (d2 > mx) mx = d2;
    if (d3 > mx) mx = d3;

    int mid = d1 + d2 + d3 - mn - mx;

    int smallestNumber;
    if (mn == 0) {
        if (mid == 0) {
            smallestNumber = mx * 100;
        } else {
            smallestNumber = mid * 100 + mn * 10 + mx;
        }
    } else {
        smallestNumber = mn * 100 + mid * 10 + mx;
    }

    cout << "Cel mai mic numar posibil: " << smallestNumber << endl;
    return 0;
}