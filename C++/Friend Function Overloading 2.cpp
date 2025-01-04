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
    void showData()
    {
        std::cout<<"a = "<<a<<" and b = "<<b;
    }
    friend Complex operator -(Complex);
};

Complex operator -(Complex X)
{
    Complex temp;
    temp.a = -X.a;
    temp.b = -X.b;
    return temp;
}

int main()
{
    Complex c1,c2;
    c1.setData(2,3);
    //c2 = operator -(c1);
    c2 = -c1;
    c2.showData();
    return 0;
}
