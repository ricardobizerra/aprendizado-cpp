#include <iostream>
using namespace std;

int main(){

    // while loop

    int initialValue = 100;

    while(initialValue <= 500){

        // if condition is True, this code will be executed

        if(initialValue % 3 == 0 && initialValue % 7 == 0){
            cout << initialValue << " is divisible by 3 and by 7\n";
        }

        // updating the variable value for the next iteration
        initialValue++;

    }

    // do-while loop

    int usersPin = 1234, pin, errorCounter = 0;

    do {
        cout << "PIN: ";
        cin >> pin;

        if(pin != usersPin){
            errorCounter++;
        }

    } while (errorCounter < 4 && pin != usersPin);

    if(errorCounter < 4){
        cout << "Loading..." << endl;
    }
    else {
        cout << "Blocked!" << endl;
    }

    // for loop

    int fatorialOf;

    cout << "Number: ";
    cin >> fatorialOf;

    int factorial = 1;

    for(int i = 1; i <= fatorialOf; i++) {

        factorial *= i;

    }

    cout << factorial << endl;

    // nested loops are possible

    int grade, sum = 0;

    for (int i = 0; i < 2; i++){

        do{

            cout << "Enter grade " << i + 1 << ": ";
            cin >> grade;

        } while (grade < 1 || grade > 5);

        sum += grade;
    }

    cout << sum << endl;

    return 0;

}