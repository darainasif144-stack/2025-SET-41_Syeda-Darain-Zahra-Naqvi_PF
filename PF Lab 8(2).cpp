#include <iostream>
using namespace std;

int main() {
    int choice;
    double usd, converted;

    cout << "Currency Converter\n";
    cout << "1. USD to PKR\n2. USD to Pound\n3. USD to Euro\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter amount in USD: ";
    cin >> usd;

    switch(choice) {
        case 1: converted = usd * 278; break;
        case 2: converted = usd * 0.78; break;
        case 3: converted = usd * 0.92; break;
        default:
            cout << "Invalid choice!";
            return 0;
    }

    cout << "Converted Amount = " << converted;
    return 0;
}
