#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Complex
{
public:
    int real, img;

    Complex(int r, int i)
    {
        real = r;
        img = i;
    }

    // overload + operator

    Complex operator*(const Complex &obj)
    {
        return Complex(real * obj.real, img * obj.img);
    }

    void show()
    {
        cout << real << "+" << img << "i" << endl;
    }
};

int main()
{
    Complex c1(2, 3), c2(1, 4);
    Complex c3 = c1 * c2;
    c3.show();
}