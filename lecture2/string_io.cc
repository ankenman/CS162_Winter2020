#include <iostream>

using namespace std;

const int MAX_CHAR = 101;

int main() {
    char message[MAX_CHAR];
    cout << "Please input a message: ";
    cin.get(message, MAX_CHAR, '\n');
    cout << "Print the message: " << message << endl;
    cin.ignore(MAX_CHAR - 1, '\n');

    char reminder[MAX_CHAR];
    cout << "Please input a reminder: ";
    cin.get(reminder, MAX_CHAR, '\n');
    cout << "Print the reminder: " << reminder << endl;
    return 0;
}
