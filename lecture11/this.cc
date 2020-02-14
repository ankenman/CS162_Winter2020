#include <iostream>
using namespace std;

class Test {
    private:
        double x;
    public:
        void setX(double x) {
            cout << "Inside setX.\n\tthis address: " << this << endl;
            this->x = x;
        }
        void print() {
            cout << "Inside print.\n\tthis address: " << this << "\n\tthis x: " << this->x << endl;
        }
};

int main() {
    Test t;
    cout << "Inside main. Address of t: " << &t << endl;
    t.setX(3.5);
    t.print();
    return 0;
}
