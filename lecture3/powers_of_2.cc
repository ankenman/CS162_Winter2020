#include <iostream>

using namespace std;

void print(int number) {
    cout << number << " ";
}

/*
 * prints out non-negative powers of two up to max_power
 * e.g., 2 4 8 16 ...
 */
void printPowersOfTwo(int max_power) {
    int current_result = 1;
    while(max_power >= 0) {
        print(current_result);
        --max_power;
        current_result *= 2;
    }
}

int main() {
    printPowersOfTwo(1);
    cout << endl;
    printPowersOfTwo(2);
    cout << endl;
    printPowersOfTwo(3);
    cout << endl;
    printPowersOfTwo(8);
    cout << endl;
    printPowersOfTwo(0);
    cout << endl;
    return 0;
}
