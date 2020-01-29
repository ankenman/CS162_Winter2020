#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

using namespace std;

class Rectangle {
    int width;
    int height;
  public:
    static int numRectangles;
    Rectangle(int w, int h);
    ~Rectangle();
    void setSides(int width, int height);
    int getArea();
};
// TODO: Make numRectangles private and add public accessor function
#endif
