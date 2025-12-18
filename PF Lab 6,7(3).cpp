#include <iostream>
using namespace std;

int main() {
    float salary, bonus = 0;
    int years;

    cout << "Enter current salary: ";
    cin >> salary;

    cout << "Enter years of service: ";
    cin >> years;

    if (years >= 5) {   // qualifies for bonus
        if (years >= 15)
            bonus = salary * 0.25;
        else if (years >= 10)
            bonus = salary * 0.15;
        else
            bonus = salary * 0.10;
    } 
    else {
        bonus = 0; // no bonus
    }

    float newSalary = salary + bonus;

    cout << "Bonus Amount = " << bonus << endl;
    cout << "Updated Salary = " << newSalary << endl;

    return 0;
}
