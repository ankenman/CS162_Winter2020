#include <iostream>

int main() {
    char name[10];
    std::cout << "Please enter your name: ";
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl;
    return 0;
}
