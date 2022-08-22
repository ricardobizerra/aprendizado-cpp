#include <iostream>
using namespace std;

int main(){

    // using auxiliar variable to switch values
    int a = 20;
    int b = 10;

    int aux = a;
    a = b;
    b = aux;

    // not using auxiliar variable
    int c = 20;
    int d = 10;

    c = c + d;
    d = c - d;
    c = c - d;
    // sum those three operations
    // 2c + d = 3c - d ... c = 2d

    return 0;

}