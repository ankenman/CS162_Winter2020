#include "rectangle.h"

void Rectangle::setSides(int width, int height) {
    this->width = width;
    this->height = height;
}

int Rectangle::area() {
    return width * height;
}

#ifdef DEBUG
int main() {
    Rectangle rect;
    rect.setSides(3,4);
    assert(11 == rect.area());
    cout << "Passed\n";
    return 0;
}
#endif
