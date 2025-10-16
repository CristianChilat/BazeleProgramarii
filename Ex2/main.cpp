#include <iostream>

using namespace std;

int main() {
    int a, b;
    char opperand;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "opperand = ";
    cin >> opperand;

    switch (opperand) {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            if (b == 0) {
                cout << "Division by zero";
            } else {
                cout << a / b;
            }
            break;
        default:
            cout << "Invalid opperand";
            break;
    }
}