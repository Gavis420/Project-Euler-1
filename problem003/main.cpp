/*
* Gavin Sommers 11/19/24
* The prime factors of 13195 are 5, 7, 13, and 29.
* What is the largest prime factor of the number 600851475143?
*/

#include <iostream>
#include <cmath> // for sqrt

bool isPrime(int n) {
    // Handle edge cases
    if (n <= 1) return false; // Numbers <= 1 are not prime
    if (n <= 3) return true;  // 2 and 3 are prime numbers
    if (n % 2 == 0 || n % 3 == 0) return false; // Eliminate multiples of 2 and 3

    // Check divisors from 5 to sqrt(n), skipping even numbers
    for (int i = 5; i <= std::sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long int n = 600851475143; // number we want the factors of
    int largest = 0; // largest prime factor

    for (int i = 1; i <= std::sqrt(n); ++i) {
        if (n % i == 0) {
            if (isPrime(i)) {
                if (i > largest) {
                    largest = i;
                }
            }
        }
    }
    std::cout << "\nThe largest prime factor of the number " << n << " is " << largest << ".\n\n";

    return 0;
}
