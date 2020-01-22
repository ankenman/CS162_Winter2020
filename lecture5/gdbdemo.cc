#include <iostream>

using namespace std;

int foo(char *a, char *b) {
    if (strcmp(a, b) == 0) {
        return 100;
    } else {
        return 200;
    }
}

int main(int argc, char *argv[]) {
    int x;
    x = foo(argv[1], argv[2]);
    cout << x << endl;
    return 0;
}
