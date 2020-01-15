#include <iostream>

using namespace std;

int main() {
    int age;
    cout << "Please input your age: ";
    cin >> age;
    while(!cin) {
        cout << "Invalid input. Please input numerals: ";
        cin.clear();
        cin.ignore(100, '\n');
        cin >> age;
    }
    cout << "You are " << age << " years old." << endl;
}
