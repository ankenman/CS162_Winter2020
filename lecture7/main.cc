#include "rectangle.h"

int main() {
    cout << "numRectangles: " << Rectangle::numRectangles << endl;
    Rectangle rect = Rectangle(3, 4);
    //cout << "Area: " << rect.getArea() << endl;
    cout << "numRectangles: " << Rectangle::numRectangles << endl;
    if (true) {
        Rectangle rect2 = Rectangle(5, 6);
        cout << "numRectangles: " << Rectangle::numRectangles << endl;
    }
    cout << "numRectangles: " << Rectangle::numRectangles << endl;

    return 0;
}

