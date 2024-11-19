/*
* Gavin Sommers 11/13/24
* A palindromic number reads the same both ways. 
* The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 \times 99.
* Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
#include <cmath>

bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}

// Main Function
int main() {
    int testnum = 0;
    int palindrome = 0;

    // Iterate through all products of two 3-digit numbers
    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) { // j starts at i to avoid duplicate products
            int testnum = i * j;
            if (testnum <= palindrome) {
                break; // No need to continue if product is smaller than the largest palindrome
            }
            if (isPalindrome(testnum)) {
                palindrome = testnum; // Update largest palindrome
            }
        }
    }
    std::cout << "\nThe largest palindrome made from the product of two 3-digit numbers is " << palindrome << ".\n\n";

    return 0;
}