#import <iostream>

using namespace std;

int main() {
    int X;

    cin >> X;

    int sum;

    sum = X % 1000 + X % 100 + X % 10;

    cout << sum << endl;
}