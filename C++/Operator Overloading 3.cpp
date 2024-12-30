#include<iostream>

class Integer
{
private:
    int a;
public:
    void setData(int x)
    {
        a = x;
    }
    void showData()
    {
        std::cout<<"a = "<<a<<std::endl;
    }
    Integer operator++() // pre-increment //
    {
        Integer i;
        i.a = ++a;
        return i;
    }
    Integer operator++(int) // post-increment //
    {
        Integer i;
        i.a = a++;
        return i;
    }
};

int main()
{
    Integer i1,i2;
    i1.setData(4);
    i2 = ++i1; //i2 = i1.operator++();
    //i2 = i1++;
    i2.showData();
    i1.showData();
    return 0;
}
