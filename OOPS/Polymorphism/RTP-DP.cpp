#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << " Animal speaks...!" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak() override
    {
        cout << "Dog Barks..!" << endl;
    }
};

int main()
{

    Animal *a = new Dog();
    a->speak();
    delete a;
}

/*
The virtual keyword enables DB, allowing the correct overriden method to be called at runtime when using base class pointers or references. without it, the base class method is always called.

*/