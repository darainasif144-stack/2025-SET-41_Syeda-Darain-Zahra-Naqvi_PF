#include<iostream>
using namespace std;

int main()
{
    int n, fact;
    cout << "Factorial Calculation" << endl;
    cout << "Enter a number: ";
    cin >> n;
    fact = 1;
    while(n > 1)
    {
        fact *= n;
        n--;
    }

    cout << "Factorial of the number is: " << fact << endl;
    return 0;
}