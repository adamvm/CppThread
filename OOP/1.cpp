#include <iostream>
#include <math.h>

class Point
{
private:
    float x;
    float y;
    std::string name;

public:
    void show()
    {
        std::cout << "Name: " << name << ", X = " << x << ", Y = " << y << std::endl;
    }
    Point(float x = 0, float y = 0, std::string name = "S") : x(x), y(y), name(name)
    { }
};

class Circle : public Point
{
private:
    float r;
    std::string name;

public:
    void show()
    {
        std::cout << "A circle named " << name << std::endl;
        std::cout << "Center of the circle: ";
        Point::show();
        std::cout << "Radius: " << r << std::endl;
        std::cout << "Area of the circle: " << M_PI *r*r << std::endl;
    }
    Circle(float r = 0, std::string name = "Default", float x = 0, float y = 0, std::string name2 = "Default") :
    r(r), name(name), Point(x, y, name2)
    { }
};


int main()
{
    Point point1;

    point1.show();

    Point point2(1.02, 3.21, "Bob");

    point2.show();

    Circle circle1(1.23, "Papa", 2.23, 2.99, "Bob");
    circle1.show();

    Circle circle2;
    circle2.show();

    return 0;
}