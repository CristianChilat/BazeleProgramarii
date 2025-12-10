#import <iostream>

using namespace std;

int main() {
    float x;
    string measuringUnit;

    cout << "Introduceti unitatea de masurare dorita(mm, cm, dm, m, km): ";
    cin >> measuringUnit;

    if (
        measuringUnit == "mm" || measuringUnit == "cm" || measuringUnit == "dm"
        || measuringUnit == "km" || measuringUnit == "m"
    ) {
        cout << "Introduceti valoarea: ";
        cin >> x;

        if (measuringUnit == "mm") {
            cout << "Lungimea in metri este: " << x / 1000 << "m" << endl;
        } else if (measuringUnit == "cm") {
            cout << "Lungimea in metri este: " << x / 100 << "m" << endl;
        } else if (measuringUnit == "dm") {
            cout << "Lungimea in metri este: " << x << "m" << endl;
        } else if (measuringUnit == "km") {
            cout << "Lungimea in metri este: " << x * 1000 << "m" << endl;
        }
    } else {
        cout << "Valoare incorecta!";
    }
}
