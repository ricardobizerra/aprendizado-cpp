#include <iostream>
using namespace std;

int main(){

    // arithmetic operations
    cout << "Soma: " << 5 + 2 << endl;
    cout << "Subtracao: " << 5 - 2 << endl;
    cout << "Multiplicacao: " << 5 * 2 << endl;
    cout << "Divisao, resultado em int: " << 5 / 2 << endl; // int result
    cout << "Divisao, resultado em float: " << 5 / 2.0 << endl; // float result
    cout << "Resto da divisao: " << 5 % 2 << endl;

    // relational opeations
    int counterPlus = 7;
    counterPlus++; // counterPlus = counterPlus + 1
    cout << counterPlus << endl;

    int counterMinus = 7;
    counterMinus--; // counterMinus = counterMinus - 1
    cout << counterMinus << endl;

    // logical operations

    // these return 1 when true and 0 when false
    int a = 5, b = 4;
    cout << "Maior que: " << (a > b) << endl;
    cout << "Maior ou igual que: " << (a >= b) << endl;
    cout << "Menor que: " << (a < b) << endl;
    cout << "Menor ou igual que: " << (a <= b) << endl;
    cout << "Igual a: " << (a == b) << endl;
    cout << "Diferente de: " << (a != b) << endl;

    // && stands for and; || stands for or; ! stands for not
    cout << (a == 5 && b == 8) << endl;
    cout << (a == 5 || b == 8) << endl;
    cout << !(a == 5) << endl;

    // assignment operations
    int x = 2;
    x = 3; // attributing new value to x
    x += 7; // same as x = x + 7
    cout << x << endl;
    x = 3;
    x -= 7; // same as x = x - 7
    cout << x << endl;
    x = 3;
    x *= 7; // same as x = x * 7
    cout << x << endl;
    x = 3;
    x /= 7; // same as x = x / 7
    cout << x << endl;
    x = 3;
    x %= 7; // same as x = x % 7
    cout << x << endl;

    return 0;
}