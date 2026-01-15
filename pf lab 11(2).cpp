#include <iostream>
using namespace std;

int main() 
{
    int n;
    float arr[100], sum = 0, avg;

    do 
    {
        cout << "Enter number of values (1-100): ";
        cin >> n;

        if(n < 1 || n > 100)
            cout <<"Error! Please enter number between 1 and 100." << endl;

    } 
    while(n < 1 || n > 100);

    for(int i = 0; i < n; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    avg = sum / n;
    cout << "Average is: " << avg << endl;

    return 0;
}
