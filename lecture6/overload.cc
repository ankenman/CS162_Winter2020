#include "overload.h"

using namespace std;

int main() {
    cout << absoluteValue(-3) << endl;
    cout << absoluteValue(14) << endl;
    cout << absoluteValue(-3.5) << endl;
    return 0;
}

int absoluteValue(int input) {
    if (input < 0) {
        input = -input;
    }
    return input;
}

double absoluteValue(double input) {
    if (input < 0) {
        input = -input;
    }
    return input;
}

