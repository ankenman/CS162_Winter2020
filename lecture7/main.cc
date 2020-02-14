#include "rectangle.h"

int main() {
    cout << "getNumRectangles(): " << Rectangle::getNumRectangles() << endl;
    Rectangle rect = Rectangle(3, 4);
    //cout << "Area: " << rect.getArea() << endl;
    cout << "getNumRectangles(): " << Rectangle::getNumRectangles() << endl;
    if (true) {
        Rectangle rect2 = Rectangle(5, 6);
        cout << "getNumRectangles(): " << Rectangle::getNumRectangles() << endl;
    }
    cout << "getNumRectangles(): " << Rectangle::getNumRectangles() << endl;

    return 0;
}

