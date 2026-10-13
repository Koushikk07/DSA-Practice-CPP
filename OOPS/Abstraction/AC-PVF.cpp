#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Shape
{
public:
    virtual void area() = 0; // pure virtual function

    void display()
    {
        cout << "This is a shape.\n";
    }
    // virtual destructor

    virtual ~Shape()
    {
        cout << "Shape destroyed" << endl;
    }
};

// DERIVED CLASS 1

class Circle : public Shape
{
public:
    void area() override
    {
        cout << "Area of circle: 22/7 * r * r" << endl;
    }
};

// DERIVED CLASS 2

class Rectangle : public Shape
{
public:
    void area() override
    {
        cout << "Area of Rectangle: L * B" << endl;
    }
};

int main()
{
    Shape *s1 = new Circle();
    s1->area();
    s1->display();
    s1->~Shape();

    Shape *s2 = new Rectangle();
    s2->area();
    s2->display();
    s2->~Shape();
}