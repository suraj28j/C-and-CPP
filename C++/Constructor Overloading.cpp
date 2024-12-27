#include<iostream>
#include<conio.h>

class Complex
{
private:
    int a,b;
public:
    Complex(int x,int y) // Parameterized Constructor
    {
        a=x;
        b=y;
    }
    Complex(int x) // Parameterized Constructor
    {
        a=x;
    }

    Complex() // default Constructor
    {}

    Complex(Complex &c) // copy Constructor
    {
        a=c.a;
        b=c.b;
    }
};

int main()
{
    Complex c1(5,4),c2(9),c3;
    //Complex c1 = Complex(5,4);
    //Complex c2 = 9;
    Complex c4(c1);
    getch();
    return 0;
}

