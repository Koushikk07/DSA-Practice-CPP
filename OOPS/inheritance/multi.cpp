#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class cse
{
public:
    void dept()
    {
        cout << "CSE Dept." << endl;
    }
};

class ece
{
public:
    void branch()
    {
        cout << "ECE Core Branch" << endl;
    }
};

class A : public cse, public ece
{
public:
    string name = "Sattu Ram Charan";
    int age = 21;
    int roll = 21;
};
class B : public cse
{
public:
    string name = "Gudapur Koushik";
    int age = 21;
    int roll = 52;
};
class C : public cse
{
public:
    string name = "Butharaju Aditya";
    int age = 21;
    int roll = 58;
};

int main()
{
    A s1;
    B s2;
    C s3;
    cout << "Student1  Name: " << s1.name << endl;
    cout << "Student1  Dept: ";
    s1.dept();
    cout << "Extra:";
    s1.branch();
    cout << "Student2  Name: " << s2.name << endl;
    cout << "Student2  Dept: ";
    s2.dept();
    cout << "Student3  Name: " << s3.name << endl;
    cout << "Student3  Dept: ";
    s3.dept();
}