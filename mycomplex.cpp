#include<iostream>
#include"E:\complex\mycomplex.h"
complex complex::operator+(complex C)                   // overloading binary +
    {
        complex temp;
        temp.a=a+C.a;
        temp.b=b+C.b;
        return (temp);
    }
complex complex::operator-(complex C)                   // overloading binary -
    {
        complex temp;
        temp.a=a-C.a;
        temp.b=b-C.b;
        return (temp);
    }
complex complex::operator*(complex C)                   // overloading binary *
    {
        complex temp;
        temp.a=(a*C.a)-(b*C.b);
        temp.b=(b*C.a)+(a*C.b);
        return (temp);
    }
complex con (complex C)                   // conjugate of a complex number
    {
        complex temp;
        temp.a=C.a;
        temp.b=-C.b;
        return (temp);
    }
complex complex::operator/(complex C)
    {
        complex temp,temp1;
        complex pro;
        temp1= con(C);
        pro= (C*(temp1));
        temp.a= ((a*C.a) + (b*C.b))/pro.a;
        temp.b= ((b*C.a)-(a*C.b))/pro.a;
        return (temp);
    }
istream& operator>>(istream& din, complex& C)
{
    din>>C.a>>C.b;
    return (din);
}
ostream& operator<<(ostream& dout, complex C)
{
    dout<<"\na = "<<C.a<<" b = "<<C.b<<endl;
    return (dout);
}
