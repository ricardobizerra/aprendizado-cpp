#include <iostream>

// by including that, you don't need to repeat std when printing a string
using namespace std;

int main(){

    float annualSalary = 50000.99;
    float monthlySalary = annualSalary / 12;

    cout << "Your monthly salary is " << monthlySalary;

    cout << endl;

    // asking for input
    float annualSalaryInput;
    cout << "Please enter your annual salary: " << endl;
    cin >> annualSalaryInput;
    float monthlySalaryInput = annualSalaryInput / 12;
    cout << "Your monthly salary is " << monthlySalaryInput << endl;

    cout << "In 10 years you will earn " << annualSalaryInput * 10;

    // characters
    char character = 'a';

    // types of variables
    int year = 1995;
    char gender = 'm';
    bool isOlderThan18 = true;
    float averageGrade = 10.3;
    double anotherAverage = 151542131; // also receives floats, but with more precision

    return 0;

}