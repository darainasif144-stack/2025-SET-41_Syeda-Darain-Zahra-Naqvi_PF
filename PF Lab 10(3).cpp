#include<iostream>
using namespace std;

int main() 
{
    int n, i;
    cout<<"Multiplication Table"<<endl;
    cout<<"Enter a number: ";
    cin>>n;
    i = 1;
    while(i <=10 )
    {
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
        i++;
    }
    
    return 0;
}