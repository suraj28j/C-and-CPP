#include<iostream>

class Complex
{
    private:
    int a,b;
    public:
    void set_data(int x,int y)
    {
        a=x;
        b=y;
    }
    void show_data(Complex c)
    {
        std::cout<<"a = "<<a<<" b = "<<b;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.a = a+c.a;
        temp.b = b+c.b;
        return temp;
    }
};

int main()
{
    Complex c1,c2,c3;
    c1.set_data(2,3);
    c2.set_data(4,5);
    c3 = c1.add(c2);
    c3.show_data(c3);
}
