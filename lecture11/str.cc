#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[] = "a";
    char aa[] = "a";
    char b[] = "b";
    char A[] = "A";
    char Z[] = "Z";

    cout << "strcmp(a, b):" << strcmp(a, b) << endl;
    cout << "strcmp(a, A):" << strcmp(a, A) << endl;
    cout << "strcmp(a, Z):" << strcmp(a, Z) << endl;
    cout << "strcmp(b, a):" << strcmp(b, a) << endl;
    cout << "strcmp(a, aa):" << strcmp(a, aa) << endl;
    return 0;
}
