#include <iostream>
using namespace std;

void leak0() {
    int *x = new int(5);
    cout << "Address: " << x << "\nData: " << *x << endl;
    //delete(x); // Uncomment to fix leak
}

void leak1() {
    const int size = 5;
    long *array = new long[size];
    for (int i = 0; i < size; i++) {
        array[i] = i * i;
        cout << array[i] << ", ";
    }
    cout << endl;
    delete[](array);
    array[0] = 0; // Move this up one line to fix bad access
}

double* leak2a(int size) {
    double *d = new double[size];
    for (int i = 0; i < size; i++) {
        *(d + i) = i / 10.0;
    }
    return d;
}

void leak2b(double *d, int size) {
    for (int i = 0; i < size; i++) {
        cout << d[i] << ", ";
    }
    cout << endl;
    //delete[](d); //Uncomment to fix leak
}

int main() {
    leak0();
    leak1();
    double *d = leak2a(10);
    leak2b(d, 10);
    return 0;
}
