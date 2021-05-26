#include<iostream>
#include"E:\complex\mycomplex.h"
using namespace std;
int main ()
{
    complex c1, c2,z;
    int p;
    cout<<"Enter real and imaginary parts of 2 complex number : \n";
    cin>>c1>>c2;
    cout<<"\nEnter the function you want to perform :";
    cout<<"\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit";
    cin>>p;
    switch (p)
    {
    case 01 :
        {z=c1+c2;
        cout<<"\nSum is "<<z<<endl;
        break;}
    case 02 :
        {z=c1-c2;
        cout<<"\nDifference is "<<z<<endl;
        break;}
    case 03 :
        {z=c1*c2;
        cout<<"\nProduct is "<<z<<endl;
        break;}
    case 04 :
        {z=c1/c2;
        cout<<"\nAfter dividing we get "<<z<<endl;
        break;}
    case 05 :
        break;
    default :
        cout<<"error : Enter correct value\n"<<endl;

    }
    return 0;
}
