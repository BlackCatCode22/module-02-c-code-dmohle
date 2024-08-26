// dH 8/26/24
// funWithStrings.cpp


#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "\nWelcome to my String Program!" << endl;

    // Create a string object
    string myStringObject;

    // assign a value to our new string object
    myStringObject = "This is an abcdefg string";

    // Output our string.
    cout << "\n" << myStringObject << endl;

    // Get the size of my string
    cout << "\nThe size of " << myStringObject << " is: " << myStringObject.size() << "\n";

    // Output the chars at subscripts (or position numbers) 2 and 14.
    // Create two char variables.
    char myChar01;
    char myChar02;

    // Assigning subscripts to char variables.
    myChar01 = myStringObject[2];
    myChar02 = myStringObject[14];

    // Output the chars we extracted from our string object
    cout << "\n At position 2 is " << myChar01 << "\n";
    cout << "\n myStringObject[14] is: " << myStringObject[14] << "\n";

    // Use the at() function to get the char at subscript 16
    cout << "\n At subscript 16 is " << myStringObject.at(16) << "\n";

    char anotherChar;
    anotherChar = myStringObject.at(16);
    cout << "\n anotherChar is " << anotherChar << "\n";

    // concatenate two strings
    string anotherString = "xyz";

    string twoStrings = "";

    // join (concatenate) two strings and output the result.
    twoStrings = anotherString + myStringObject;
    cout << "\n twoStrings is " << twoStrings << "\n";

    // substr() is very important and useful
    string mySubString = "";
    mySubString = myStringObject.substr(5, 2);
    cout << "\n mySubString is:  " << mySubString << "\n";















    return 0;
}
