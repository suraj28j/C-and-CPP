#include<iostream>

class Complex
{
private:
    int a,b;
public:
    void set_data(int,int); // member function define outside;
    void setData(int x,int y) // member function define inside (by default inline);
    {
        a = x;
        b = y;
    }
    void showData()
    {
        std::cout<<"a = "<<a<<" and b = "<<b;
    }
};
void Complex::set_data(int x,int y)
{
    a=x;
    b=y;
}
int main()
{
    Complex c1; // c1 is a object
    //c1.setData(4,8);
    c1.set_data(2,3);
    c1.showData();
    return 0;
}
