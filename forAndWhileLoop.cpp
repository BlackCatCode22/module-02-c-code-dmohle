// dH 9/4/24
/*
 * forAndWhileLoop.cpp
 *
 * This program will demonstrate the repetition control structure
 * using the for and while loops.
 *
*/

#include <iostream>
using namespace std;

// declare a function named sumARange.
int sumARange(int, int);

int main() {
    cout << "\n Welcome to my while and For Loop Program!" << endl;

    // Create a while loop that says hello 100 times.
    // A loop must have a loop control variable that
    // is initialized, checked, and changed.

    // Create the loop control variable.
    int myLoopContolVar = 0;

    // create a while loop

    // initialize our Loop control variable.
    myLoopContolVar = 1;
    // The while loop has a test condition inside its ()
    // this test condition is checked.
    while (myLoopContolVar <= 10) {
        cout << "\n Hello " << myLoopContolVar << endl;

        // Change the loop control variable.
        myLoopContolVar++;

    }

    // Code up the sample while loop from today's video
    // write out all the numbers between 100-500 that are
    // divisible by 3 and 5
    int counter = 100;

    while (counter <= 500) {
        if (counter % 3 == 0  && counter % 5 == 0) {
            cout << counter << " is divisible by 3 and 5 (no remainder after dividing by 3 AND 5) " << endl;
        }

        // change our loop control variable.
        counter++;
    }

    // create a for loop
    // what is the loop control vaiable?
    // where is the loop control variable initialized, checked, and changed?

    for (int i = 1; i <= 10; i++) {
        cout << "\nin the for loop and i is: " << i << endl;
    }

    // Call my function
    int theRetValue = 0;
    int num1 = 3;
    int num2 = 6;
    theRetValue = sumARange(num1, num2);

    cout << "\n The sum of the range between " << num1 << " and " << num2 << " is: " << theRetValue << endl;


    return 0;
}

// define my function named sumArange.
int sumARange(int startRange, int endRange) {
    // this function will sum the range of numbers
    // between startRange and endRange

    // We need an accumulator
    int theSumOftheRange = 0;

    for (int i = startRange; i <= endRange; i++) {
        cout << "\n inside sumARange and theSumOfTheRange = " << theSumOftheRange << endl;
        theSumOftheRange = theSumOftheRange + i;
        return theSumOftheRange;
    }

}