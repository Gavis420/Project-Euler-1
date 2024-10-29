/*
* If we list all the natural numbers below 10 that are multiples
* of 3 or 5, we get 3, 5, 6, and 9. The sum of these multiples is 23. 
* Find the sum of all the multiples of 3 or 5 below 1000.
*/

//ideas for solution:
// use loop for multiplication method. meaning:
// multiply 3 x i until it is >= 1000 and do the same with 5 x i until >= 1000. 
    // as you go continually add the number to a growing total
// using the looping method, each time you get a new product of 5, check if it is divisible by 3 also
// if it is, don't include it, as it will be accounted for in the loop for the 3

#include <iostream>
using namespace std;

int main()
{
    // Prints hello world
    cout << "Hello World";

    return 0;
}
