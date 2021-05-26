#ifndef COMPLEX_HEADER_H_INCLUDED
#define COMPLEX_HEADER_H_INCLUDED
#include<iostream>
using namespace std;
class complex
{
private :
    float a,b;
public :
    complex (int x, int y)                  // constructor for 2 arguments
    { a=x; b=y;}
    complex (int x)                         // constructor for 1 argument
    { a=x; b=0;}
    complex ()                              // constructor without any argument
    { }
    complex (complex &c)                    // copy constructor
    {
        a=c.a;
        b=c.b;
    }
    complex operator+(complex);                   // overloading binary +
    complex operator-(complex);                   // overloading binary -
    complex operator*(complex);                   // overloading binary *
    friend complex con (complex);                               // conjugate of a complex number
    complex operator/(complex);
    friend istream& operator>>(istream&, complex&);      // overloading >> as a friend of ISTREAM and complex
    friend ostream& operator<<(ostream&, complex);       // overloading << as a friend of OSTREAM and complex

};

#endif // COMPLEX_HEADER_H_INCLUDED
