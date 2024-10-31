/*
* Gavin Sommers 10/29/24
* If we list all the natural numbers below 10 that are multiples
* of 3 or 5, we get 3, 5, 6, and 9. The sum of these multiples is 23. 
* Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>

// The sumn function calculates the sum of all natural numbers less than or equal
// to a given number n that are divisible by another number d. It does so by using
// the formula for the sum of the first k natural numbers, where k is the largest
// integer less than or equal to nn divided by d.
long long int sumn(long long int n, long long int d) {
    n /= d;
    return d * n * (n + 1) / 2;
}

// Function A uses two statements and modulus to iterate by 3 or 5 up to
// the given bound. Numbers divisible by 3 or 5 are added to the total.
// Numbers that are divisible by both are only counted once.
void functionA(long long int L, long long int &a)  
{
    for (int i = 5; i < L; i += 5) {
        if (i % 3 != 0) {
            a += i;
        }
    }

    for (int i = 3; i < L; i += 3) {
        a += i;
    }
}

// Function B is similar to function A. This one uses the for loop to iterate through
// every number up to the bound instead of just by 3's and 5's. This uses modulus  
// to check for either and will add if either or both pass.
void functionB(long long int L, long long int &b)
{
    for (long long int i = 0; i < L; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            b += i;
        }
    }
}

// Function C uses a completely different approach designed from math formulas.
// This uses the sumn function with Gauss's summation formula.
void functionC(long long int L, long long int &s) {
    int a = 3, b = 5;
    s = sumn(L - 1, a) + sumn(L - 1, b) - sumn(L - 1, a * b);
}

// Main Function
int main() {
    long long int bound = 0;
    long long int total = 0;

    std::cout << "Enter an upper bound? " << std::endl;
    std::cin >> bound;

    // using functionC as it should scale the best with larger bounds
    functionC(bound, total);

    std::cout << "\nThe sum of multiples of 3 or 5 up to " << bound << " is " << total << ".\n\n";

    return 0;
}