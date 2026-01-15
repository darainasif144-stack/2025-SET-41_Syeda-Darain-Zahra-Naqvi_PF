#include<iostream>
using namespace std;
float calculateBonus(float salary, int rating)
{
    float bonus = 0;
    if (rating == 5)
    {
        bonus = salary * 0.20; // 20% bonus for rating of 5
    }
    else if (rating == 4) 
    {
        bonus = salary * 0.10; // 10% bonus for rating of 4
    }    
    else if (rating == 3)
    {
        bonus = salary * 0.05; // 5% bonus for rating of 3  
    } // 5% bonus for rating of 3
    else
        bonus = 0; // No bonus for rating below 3
    return bonus;
}
void DisplayBonus(float salary, float bonus)
{
    cout<<"The calculated bonus is: "<<bonus<<endl;
    cout<<"Total Salary including bonus: "<<salary + bonus<<endl;
}
int main()
{
    float salary, bonus;
    int rating;
    cout<<"Enter employee salary: ";
    cin>>salary;
    cout<<"Enter performance rating (1-5): ";
    cin>>rating;

    bonus = calculateBonus(salary, rating);
    DisplayBonus(salary, bonus);
    return 0;
}