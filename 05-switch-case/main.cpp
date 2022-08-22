#include <iostream>
using namespace std;

int main(){

    // calculator
    int number1, number2;
    char operation;

    cin >> number1 >> operation >> number2;

    switch (operation) {
        case '+':cout << number1 << operation << number2 << " = " << number1 + number2; break;
        case '-':cout << number1 << operation << number2 << " = " << number1 - number2; break;
        case '*':cout << number1 << operation << number2 << " = " << number1 * number2; break;
        case '/':cout << number1 << operation << number2 << " = " << number1 / number2; break;
    }

    return 0;

}