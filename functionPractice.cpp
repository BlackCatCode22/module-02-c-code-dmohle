// functionPractice.cpp
// dH 8/28/24

#include <iostream>
using namespace std;

// Function prototypes go here.
// This is declaring a function.
string oddOrEven(int);

// create and use the following four functions
int sumTwoWholeNumbers(int, int);
int squareAnumber(int);
string sayHelloToTheUser(string);
int largestOfThreeWholeNumbers(int, int, int);

int main() {
    cout << "\n Welcome to my Functions Program!" << endl;

    string oddOrEvenString = "";


    int userInput = 0;
    // Get input from the user.
    cout << "\n Enter your number : ";
    cin >> userInput;

    // Call the oddOrEven function.
    oddOrEvenString = oddOrEven(userInput);

   // Call the largestOIfThree() function.
    int thelargestNumber = 0;
    thelargestNumber = largestOfThreeWholeNumbers(3, 4, 5);

    return 0;
}

string oddOrEven(int num1) {
    string myReturnStr = "";

    if (num1 % 2 == 0) {
        // this is the true side
        // num1 is even
        myReturnStr = "even";
    }
    else {
        // this is the false side
        // num1 is odd
        myReturnStr = "odd";
    }
    return myReturnStr;
}

int sumTwoWholeNumbers(int aNumOne, int aNumTwo) {
    int sum = 0;
    sum = aNumOne + aNumTwo;
    return sum;
}

// Function definition for the largestOfThree function.
int largestOfThreeWholeNumbers(int firstNum, int secNum, int third) {

    int largest = 0;

    if ((firstNum > secNum) && (firstNum > third)) {
        largest = firstNum;
    }
    if ((secNum > firstNum) && (secNum > third)) {
        largest = secNum;
    }
    if ((third > firstNum) && (third > secNum)) {
        largest = third;
    }

    cout  << "\n The largest of " << firstNum << " and " << secNum << " and " << third << " is " << largest;

    return largest;

}
