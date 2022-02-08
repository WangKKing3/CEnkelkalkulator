#include <iostream>
using namespace std;

int main() {

    char valg = '+';
    double num1, num2 = 0.0;

    cout << "skriv in num dine her start men tallene dine her, så velg en:  +, -, *, /:" << endl;
    cout << "Number_1: ";
    cin >> num1;
    cout << "velg op";
    cin >> valg;
    cout << "Number_2: ";
    cin >> num2;

    switch (valg) {
    case '+':
        cout << num1 + num2;
        break;

    case '-':
        cout << num1 - num2;
        break;

    case '*':
        cout << num1 * num2;
        break;

    case '/': 
        cout << num1 / num2;
        break;

    default:
        cout << "hva er det du gjør egt? !! ";
    }
    return 0;
}