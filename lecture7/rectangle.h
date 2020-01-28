#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

using namespace std;

class Rectangle {
    int width;
    int height;
    static int numRectangles;
  public:
    void setSides(int width, int height);
    int area();
};
// TODO: Add constructor and destructor
#endif
