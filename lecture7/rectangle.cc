#include "rectangle.h"

int Rectangle::numRectangles = 0;

Rectangle::Rectangle(int w, int h) {
    width = w;
    height = h;
    numRectangles++;
}

Rectangle::~Rectangle() {
    numRectangles--;
    cout << "Entered destructor\n";
}

void Rectangle::setSides(int width, int height) {
    this->width = width;
    this->height = height;
}

int Rectangle::getArea() {
    return width * height;
}

#ifdef DEBUG
int main() {
    Rectangle rect;
    rect.setSides(3,4);
    assert(12 == rect.area());
    cout << "Passed\n";
    return 0;
}
#endif
