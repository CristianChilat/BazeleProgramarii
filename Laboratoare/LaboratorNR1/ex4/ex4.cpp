#import <iostream>

using namespace std;

int main() {
    int X;

    cin >> X;

    int a, x, y, z, j, i;

    x = X / 1000;
    y = X % 10;
    z = (X / 10) % 100;
    j = z / 10;
    i = z % 10;

    a = y * 1000 + z * 10 + x;

    cout << a << endl;

    a = y * 1000 + i * 100 + j * 10 + x;

    cout << a << endl;

    a = y * 1000 + x;

    cout << a << endl;
}