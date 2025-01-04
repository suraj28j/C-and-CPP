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
    friend std::iostream& operator << (std::iostream&,Complex);
    friend std::iostream& operator >> (std::iostream&,Complex&);
};

std::iostream& operator <<(std::iostream &dout,Complex C)
{
    std::cout<<"a = "<<C.a<<" and b = "<<C.b;
    return (dout);
}

std::iostream& operator >>(std::iostream &din,Complex &C)
{
    std::cin>>C.a>>C.b;
    return (din);
}

int main()
{
    Complex c1;
    std::cout<<"Enter Complex Number";
    std::cin>>c1;
    std::cout<<"You Enter : ";
    std::cout<<c1; // operator<<(cout,c1);
    return 0;
}
