#include<iostream>
using namespace std;
float calculatePercentage(float m1, float m2, float m3, float m4, float m5) 
{
    float totalMarks = m1 + m2 + m3 + m4 + m5;
    return (totalMarks / 500) * 100;
}
void displayResult(float percentage) 
{
    cout << "Percentage: " << percentage << "%" << endl;
    if (percentage >= 90) {
        cout<< "Grade: A+" << endl;
    } 
    else if (percentage >= 80) {
        cout << "Grade: A" << endl;
    }
     else if (percentage >= 70) {
        cout << "Grade: B+" << endl;
    }
     else if (percentage >= 60) {
        cout << "Grade: B" << endl;
    }
    else {
        cout << "Grade: Fail" << endl;
    }
    
}

int main()
{
    float m1, m2, m3, m4, m5;
    cout << "Enter marks for 5 subjects (out of 100): "<<endl;
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    float percentage = calculatePercentage(m1, m2, m3, m4, m5);
    displayResult(percentage);
    return 0;
}