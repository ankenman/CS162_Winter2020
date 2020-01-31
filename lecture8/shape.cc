#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

// Abstract base class
class Shape {
    public:
        virtual double getArea() = 0;
        virtual double getPerimeter() = 0;
};

class Circle: public Shape {
    private:
        double radius;
    public:
        Circle(double radius) {
            this->radius = radius;
        }
        double getArea() {
            return radius * radius * M_PI;
        }
        double getPerimeter() {
            return 2 * radius * M_PI;
        }
        void setRadius(double radius) {
            this->radius = radius;
        }
};

class Rectangle: public Shape {
    protected:
    public:
        double length, width; // Moved these to public for demo purposes, move back to protected or private
        Rectangle(double length, double width) {
            this->length = length;
            this->width = width;
        }
        double getArea() {
            return length * width;
        }
        double getPerimeter() {
            return 2 * (length + width);;
        }
        virtual void setLength(double length) {
            this->length = length;
        }
        virtual void setWidth(double width) {
            this->width = width;
        }
};

// Inheritance that violates the Liskov Substitution Principle
// Suggestion: Square should inherit from Shape. In terms of
// Geometry Square does extend from Rectangle, but not 
// necessarily true in programming.
class Square: public Rectangle {
    public:
        Square(double sideLength) : Rectangle(sideLength, sideLength) {
        }
        void setLength(double sideLength) {
            this->length = sideLength;
            this->width = sideLength;
        }
        void setWidth(double sideLength) {
            this->setLength(sideLength);
        }
};

int main() {
    Shape *s = new Circle(1.0);
    cout << "s->getPerimeter(): " << s->getPerimeter() << endl;
    cout << "s->getArea(): " << s->getArea() << endl;
    
    Rectangle *r = new Square(2.0);
    cout << "r->getPerimeter(): " << r->getPerimeter() << endl;
    cout << "r->getArea(): " << r->getArea() << endl;
    
    // Contrived example. Pretend this is code that depends on width not changing 
    // when we change length. 
    double length = r->length;
    double width = r ->width;
    r->setLength(4);
    assert(width == r->width);

    return 0;
}
