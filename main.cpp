#include <iostream>

int main() {

    LOOP:for (int i = 0; i <= 100; i++) {
    if (i % 3 == 0) {
        std::cout << "Fizz\n";

    }
    else if (i % 3 == 0 || i % 5 == 0) {
            std::cout << "Buzz\n";
        }
        else if (i % 15 == 0) {
            std::cout << "FizzBuzz\n";
        }
        else {
            std::cout << i << std::endl; 
        }
    }


}
