#include<iostream>
using namespace std;

int main() 
{
    int a[5], sum = 0;
    cout<<"Enter 5 numbers: " << endl;
    for(int i = 0; i < 5; i++) 
    {
        cout<<"Number " << i + 1 << ": ";
        cin >> a[i];
        sum += a[i];
    }

    cout << "Sum of 5 numbers is: " << sum << endl;

    return 0;
}