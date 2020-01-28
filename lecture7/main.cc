#include "rectangle.h"

int main() {
    Rectangle rect;
    rect.setSides(3,4);
    cout << "area: " << rect.area() << endl;
    return 0;
}

