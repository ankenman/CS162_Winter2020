#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

using namespace std;

class Rectangle {
    int width;
    int height;
    static int numRectangles;
  public:
    Rectangle(int w, int h);
    ~Rectangle();
    void setSides(int width, int height);
    int getArea();
    static int getNumRectangles();
};
// TODO: Make numRectangles private and add public accessor function
#endif
