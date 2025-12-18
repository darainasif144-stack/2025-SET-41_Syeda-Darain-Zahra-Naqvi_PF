#include <iostream>
using namespace std;

int main() {
    int level, years;
    char remote;
    float basic, expBonus = 0, remoteBonus = 0, gross, tax = 0, finalSalary;

    cout << "Enter Job Level (1-4): ";
    cin >> level;

    cout << "Enter Years of Experience: ";
    cin >> years;

    cout << "Working in Remote Area? (y/n): ";
    cin >> remote;

    // Basic Salary
    if (level == 1) basic = 120000;
    else if (level == 2) basic = 85000;
    else if (level == 3) basic = 60000;
    else if (level == 4) basic = 40000;
    else {
        cout << "Invalid Job Level!";
        return 0;
    }

    // Experience Bonus
    if (years >= 15)
        expBonus = basic * 0.25;
    else if (years >= 10)
        expBonus = basic * 0.15;
    else if (years >= 5)
        expBonus = basic * 0.10;

    // Remote Bonus
    if (remote == 'y' || remote == 'Y')
        remoteBonus = basic * 0.08;

    // Gross Salary
    gross = basic + expBonus + remoteBonus;

    // Tax Rules
    if (gross >= 150000)
        tax = gross * 0.30;
    else if (gross >= 100000)
        tax = gross * 0.20;
    else if (gross >= 60000)
        tax = gross * 0.10;

    finalSalary = gross - tax;

    // Output
    cout << "\n--- Salary Slip ---\n";
    cout << "Basic Salary: " << basic << endl;
    cout << "Experience Bonus: " << expBonus << endl;
    cout << "Remote Bonus: " << remoteBonus << endl;
    cout << "Gross Salary: " << gross << endl;
    cout << "Tax Deduction: " << tax << endl;
    cout << "Final Salary: " << finalSalary << endl;

    return 0;
}
