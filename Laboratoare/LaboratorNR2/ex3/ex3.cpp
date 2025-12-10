#import <iostream>

using namespace std;

int main() {
    int X;

    cout << "Introduceti un numar din 3 cifre: ";
    cin >> X;

    if (X > 1000 || X < 100) {
        cout << "Numarul introdus nu este valid!" << endl;
    } else {
        int digit1 = X / 100;
        int digit2 = (X / 10) % 10;
        int digit3 = X % 10;

        int max1 = digit1;
        if (digit2 > max1) max1 = digit2;
        if (digit3 > max1) max1 = digit3;

        int min = digit1;
        if (digit2 < min) min = digit2;
        if (digit3 < min) min = digit3;

        int middle = digit1 + digit2 + digit3 - max1 - min;

        int max2 = middle;
        if (middle < min) max2 = min;

        int largestNumber = max1 * 100 + max2 * 10 + min;

        cout << "Cel mai mare numar posibil: " << largestNumber << endl;
    }

    return 0;
}