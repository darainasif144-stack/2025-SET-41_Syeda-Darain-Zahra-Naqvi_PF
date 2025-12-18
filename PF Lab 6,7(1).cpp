#include<iostream>
using namespace std;

int main() {
    float temperature;

    cout << "Enter current temperature: ";
    cin >> temperature;

    if (temperature > 45) {
        cout << "ALERT! Temperature exceeded safe limit!" << endl;
    }

    return 0;
}
