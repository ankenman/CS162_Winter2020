#include <iostream>

using namespace std;

class BlackSabbath {
    public:
        BlackSabbath() {
            cout << "Inside BlackSabbath constructor\n";
        }
        ~BlackSabbath() {
            cout << "Inside BlackSabbath destructor\n";
        }
        virtual void printSetList() {
            cout << "<Paranoid>";
        }
};

class Ozzy : public BlackSabbath {
    public:
        Ozzy() {
            cout << "Inside Ozzy constructor\n";
        }
        ~Ozzy() {
            cout << "Inside Ozzy destructor\n";
        }
        void printSetList() {
            BlackSabbath::printSetList();
            cout << "<Crazy Train>";
        }
};

int main() {
    //BlackSabbath bs = BlackSabbath();
    //bs.printSetList();
    cout << endl << "*******" << endl;
    Ozzy o;
    o.printSetList();
    cout << endl;
    cout << endl << "*******" << endl;
    return 0;
}
