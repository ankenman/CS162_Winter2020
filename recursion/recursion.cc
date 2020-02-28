#include <iostream>

using namespace std;

// TODO: print one character at a time using a loop
void printStringLoop(char *str) {
}

// TODO: print one character at a time using a recursion
// What is the right base case or end condition?
void printStringRecursion(char *str) {
}

// TODO: print one character at a time using a recursion
// What is the right base case or end condition?
void printStringReverseRecursion(char *str) {
}

// TODO: print one character at a time using a loop
void printStringReverseLoop(char *str) {
}

// TODO: return factorial of val (val!) calculated using a loop
long factorialLoop(long val) {
	return 0;
}

// TODO: return factorial of val (val!) calculated using recursion
// What is the right base case or end condition?
long factorialRecursion(long val) {
	return 0;
}

int main() {
    char testString[] = "The quick brown fox jumped over the lazy dog.";
    // Print String Forwards
    cout << "Testing printString functions\n";
    cout << "Expecting \"" << testString << "\"\n"
         << "\tLoop:\t\t";
    printStringLoop(testString);
    cout << "\n\tRecursion:\t";
    printStringRecursion(testString);
    cout << endl;

    // Print String in Reverse
    cout << "\nTesting printStringReverse functions\n";
    cout << "Expecting \".god yzal eht revo depmuj xof nworb kciuq ehT\"";
    cout << "\n\tRecursion:\t";
    printStringReverseRecursion(testString);
    cout << "\n\tLoop:\t\t";
    printStringReverseLoop(testString);
    cout << endl;

    // Factorial
    cout << "\nTesting factorial\nExpecting 1\n";
    cout << "\tLoop:\t\t" << factorialLoop(0) << endl;
    cout << "\tRecursion:\t" << factorialRecursion(0) << endl;
    cout << "\nExpecting 479001600\n";
    cout << "\tLoop:\t\t" << factorialLoop(12) << endl;
    cout << "\tRecursion:\t" << factorialRecursion(12) << endl;
}
