/*
* Gavin Sommers 11/21/24
* 2520 is the smallest number that can be divided by
* each of the numbers from 1 to 10 without any remainder.
* What is the smallest positive number that is evenly divisible
* with no remainder by all of the numbers from 1 to 20?
*/

#include <iostream>
#include <cmath>

// Main Function
int main() {
    int n = 20;             // range of numbers to check divisibility
    int number = n;         // start checking from 'n'
    bool divisible = false; // flag to determine if number is valid

    while (!divisible) {
        divisible = true; // assume the number is divisible at the start
        for (int i = 1; i <= n; i++) {
            if (number % i != 0) {
                divisible = false; // found a number that doesn't divide evenly
                break;             // exit the loop early
            }
        }
        // if not, try the next number
        if (!divisible) {
            number += n;
        }
    }

    std::cout << "\nThe smallest positive number evenly divisible with no remainder by all of the numbers from 1 to 20 is ";
    std::cout << number << ".\n\n";

    return 0;
}