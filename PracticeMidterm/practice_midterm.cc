#include <iostream>
#include <cstring>

using namespace std;

// multByThree returns 3 * num.
// Do not use the * operator, the only operators you
// can use are +, ++, and =
int multByThree(int num) {
    // TODO: Create the body of this function
    return 0;
}

// This function prints out the array parameter in this form:
// 1 2 3 4
// It does not require a line break.
void printArrayElements(const int array[], int size) {
    // TODO: implement this function
}

// This function decrements the odd-positioned elements
// in the given array (e.g., elements 1, 3, 5, ...).
// For instance, if the input is {1, 2, 3, 4}
// array would be changed to {1, 1, 3, 3} after
// the function has finished.
void decrementOddElements(int array[], int size) {
    // TODO: implement this function
}

class Midterm {
    private:
        double score;
    public:
        // Constructor to set score to parameter s
        Midterm(double s) {
            // TODO: implement this function
        }
        // Returns the member score
        double getScore() {
            // TODO: implement this function
            return 0;
        }
};

// This function prints out the number of a's, b's, and c's
// int the given c-style string str. cstring library has
// been imported so you can use strlen() to check the length
// of the string.
// The output should be formatted like this for str = "aabccc":
// a: 2, b: 1, c:3
// You do not need a line break.
void print_abc_count(const char str[]) {
    // TODO: implement this function
}

//***********************************************
// Do NOT modify main
int main() {
    /*** Test multByThree ***/
    cout << "*******************\nTesting multByThree\n";
    int actual = multByThree(0);
    cout << "Expected 0 and got:\t" << actual << endl;
    actual = multByThree(5);
    cout << "Expected 15 and got:\t" << actual << endl;
    actual = multByThree(-8);
    cout << "Expected -24 and got:\t" << actual << endl;

    /*** Test printArrayElements ***/
    cout << "\n*******************\nTesting decrementOddElements and printArrayElements\n";
    int a[] = {1,2,3,4};
    cout << "Expected 1 2 3 4 and got:\t";
    printArrayElements(a, 4);
    cout << endl;

    /*** Test decrementOddElements and printArrayElements ***/
    int b[] = {54, 321, 900, -4, -60, 0};
    decrementOddElements(b, 6);
    cout << "Input array: {54, 321, 900, -4, -60, 0}\n";
    cout << "Expected 54 320 900 -5 -60 -1 and got: ";
    printArrayElements(b, 6);
    cout << endl;
    int c[] = {};
    decrementOddElements(c, 0);
    cout << "Input array: {}\n";
    cout << "Expected empty string and got: ";
    printArrayElements(c, 0);
    cout << endl;

    /*** Test creating Midterm class and getScore function ***/
    cout << "\n*******************\nTesting Midterm class and getScore\n";
    Midterm m = Midterm(112.43);
    cout << "Expected 112.43 and got: " << m.getScore() << endl;
    m = Midterm(465.89);
    cout << "Expected 465.89 and got: " << m.getScore() << endl;

    /*** Test printVowelCount ***/
    cout << "\n*******************\nTesting printVowelCount\n";
    cout << "input string: aabbbbbcccc\n";
    cout << "Expected a: 2, b: 5, c:4, got: ";
    print_abc_count("aabbbbbcccc");
    cout << endl;
    cout << "input string: accc\n";
    cout << "Expected a: 1, b: 0, c:3, got: ";
    print_abc_count("accc");
    cout << endl;
    cout << "input string: the brave cab bats last\n";
    cout << "Expected a: 4, b: 3, c:1, got: ";
    print_abc_count("the brave cab bats last");
    cout << endl;

    return 0;
}
