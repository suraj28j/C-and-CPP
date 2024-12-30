#include<iostream>

class Complex
{
private:
    int a,b;
public:
    void setData(int x,int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        std::cout<<"a = "<<a<<" b = "<<b;
    }
    Complex operator -()
    {
        Complex t;
        t.a = -a;
        t.b = -b;
        return t;
    }
};

int main()
{
    Complex c1,c2;
    c1.setData(3,4);
    c2 = c1.operator -();
    //c2=-c1;
    c2.display();
    return 0;
}

