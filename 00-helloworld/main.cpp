#include <iostream>

int main() {
    // first code :)
    std::cout << "Hello, World!" << std::endl;

    // no std::endl in the end of string
    std::cout << "Number1";
    std::cout << "Number2";

    std::cout << std::endl;

    // \n inside the str does the same as std::endl
    std::cout << "Number1\n";
    std::cout << "Number2";

    return 0;
}
