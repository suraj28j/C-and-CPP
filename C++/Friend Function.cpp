#include<iostream>

class B;

class A
{
private:
    int a;
public:
    void setData(int x)
    {
        a = x;
    }
    friend void fun(A,B);
};

class B
{
private:
    int b;
public:
    void setData(int x)
    {
        b = x;
    }
    friend void fun(A,B);
};

void fun(A o1,B o2)
{
    std::cout<<"Sum is "<<o1.a+o2.b;
}

int main()
{
    A obj1;
    B obj2;
    obj1.setData(3);
    obj2.setData(4);
    fun(obj1,obj2);
    return 0;
}
