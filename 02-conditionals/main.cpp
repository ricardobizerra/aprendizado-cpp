#include <iostream>
using namespace std;

int main(){

    int number;
    cout << "DIGITE UM INTEIRO: ";
    cin >> number;

    // conditional
    if(number % 2 == 0){
        cout << "Numero par." << endl;
    }

    else{
        cout << "Numero impar." << endl;
    }

    // nested if-else statement

    float a, b, c; // 3-variable declaration
    cin >> a >> b >> c; // 3 inputs will be given

    if (a == b && b == c) {
        cout << "Triangulo equilatero" << endl;
    }

    else{

        // brackets can be deleted
        if (a != b && a != c && b != c)
            cout << "Triangulo escaleno" << endl;
        else
            cout << "Triangulo isosceles" << endl;

    }

    return 0;
}
