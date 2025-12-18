#include <iostream>
#include<math.h>
using namespace std;
int main()
{

   int n, Area, length, width, base, height,  radius, pi = 3;
   cout<<"\nEnter the value of radius ";
   cin>>radius;
   cout<<"\nEnter the value of length: ";
   cin>>length;
   cout<<"\nEnter the value of width: ";
   cin>>width;
   cout<<"\nEnter the value of base: ";
   cin>>base;
   cout<<"\nEnter the value of height: ";
   cin>>height;
   cout<<"\nEnter the value of n(1-3): ";
   cin>>n;
   switch(n)
     {
        case 1:
        Area = pi*(radius^2);
        cout<<"Area of circle is "<<Area;
        break;
        case 2:
        Area = length * width;
        cout<<"Area of rectangle is "<<Area;
        break;
        case 3:
        Area = 0.5*(base * height);
        cout<<"Area of triangle is "<<Area;
        break;
        default:
        cout<<"Invalid number";
     }
return 0;
     }




    
     
