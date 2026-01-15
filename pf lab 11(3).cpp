#include<iostream>
using namespace std;

int main() 
{
    int A[5], largest;
    cout<<"Enter 5 numbers: " <<endl;
    for(int i = 0; i < 5; i++) 
    {
        cout<<"Number "<<i + 1<<": ";
        cin>>A[i];
    }
    largest = A[0];
    for(int i = 1; i < 5; i++) 
    {
        if(A[i] > largest) 
        {
            largest = A[i];
        }
    }

    cout<<"Largest number is: "<<largest<<endl;

    return 0;
}