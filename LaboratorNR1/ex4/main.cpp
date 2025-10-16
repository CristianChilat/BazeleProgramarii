#import <iostream>

using namespace std;

int main() {
    int X;

    cin >> X;

    int a, x, y, z;

    x = X / 1000;
    y = X % 10;
    z = (X / 10) % 100;

    a = y * 1000 + z * 10 + x;

    cout << a;
}