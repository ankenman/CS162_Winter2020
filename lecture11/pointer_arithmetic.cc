# include <iostream>
using namespace std;

const int MAX = 10;
int main() {
    short shortArray[MAX];
    int  intArray[MAX];
    long longArray[MAX];

    short *shortPtr = shortArray;
    int  *intPtr  = intArray;
    long *longPtr = longArray;

    cout << "sizeof(short): " << sizeof(short) << endl;
    for (int i = 0; i < MAX; i++) {
        *shortPtr = i;
        cout << "i: " << i << endl;
        cout << "shortPtr:\t"   << shortPtr << "\nshort value:\t" << shortArray[i] << endl;
        ++shortPtr;
    }
    cout << "\n\nsizeof(int): " << sizeof(int) << endl;
    for (int i = 0; i < MAX; i++) {
        *intPtr = i;
        cout << "i: " << i << endl;
        cout << "intPtr:\t\t"   << intPtr   << "\nint value:\t"   << intArray[i]   << endl;
        ++intPtr;
    }
    cout << "\n\nsizeof(long): " << sizeof(long) << endl;
    for (int i = 0; i < MAX; i++) {
        *longPtr = i;
        cout << "i: " << i << endl;
        cout << "longPtr:\t"    << longPtr  << "\nlong value:\t"  << longArray[i] << endl;
        ++longPtr;
    }
}
