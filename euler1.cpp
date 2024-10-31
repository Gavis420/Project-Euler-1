/*
* Gavin Sommers 10/29/24
* If we list all the natural numbers below 10 that are multiples
* of 3 or 5, we get 3, 5, 6, and 9. The sum of these multiples is 23. 
* Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>


long long int sumn(long long int n, long long int d) {
    n /= d;
    return d * n * (n + 1) / 2;
}

void functionA(long long int L, long long int &a)  // Pass total by reference
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

void functionB(long long int L, long long int &b)  // Pass total by reference
{
    for (long long int i = 0; i < L; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            b += i;
        }
    }
}

void functionC(long long int L, long long int &s) {
    int a = 3, b = 5;
    s = sumn(L - 1, a) + sumn(L - 1, b) - sumn(L - 1, a * b);
}

int main() {
    long long int bound = 0;
    long long int total = 0;

    std::cout << "Enter an upper bound? " << std::endl;
    std::cin >> bound;

    functionA(bound, total);
    functionB(bound, total);
    functionC(bound, total);

    std::cout << "\nThe sum of multiples of 3 or 5 up to " << bound << " is " << total << ".\n\n";

    return 0;
}