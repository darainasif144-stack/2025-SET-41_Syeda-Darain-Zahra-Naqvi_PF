#include<iostream>
using namespace std;

int main() 
{
    int n, sum = 0;
    cout<<"Sum of first ten Natural Number"<<endl;
    n = 1;
    while(n <=10 )
    {
        sum += n;
        n++;
    }
    cout<<"\nSum of first ten natural numbers is: "<<sum<<endl;

    return 0;
}