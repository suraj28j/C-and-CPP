#include<iostream>
#include<conio.h>

class Complex
{
private:
    int a,b;
public:
    ~Complex()
    {
        std::cout<<"Destructor Function";
    }
};

void fun()
{
    Complex c1;
}

int main()
{
    fun();
    getch();
    return 0;
}
