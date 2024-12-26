#include<iostream>
#include<string.h>
#include<conio.h>

class book
{
private:
    int id;
    char title[30];
    float price;
public:
    void set_id(int);
    void input()
    {
        std::cout<<"Enter Book Id : ";
        std::cin>>id;
        std::cout<<"Enter Book Title : ";
        std::cin>>title;
        fflush(stdin);
        std::cout<<"Enter Book Price : ";
        std::cin>>price;
    }
    void display()
    {
        std::cout<<"Book Id : "<<id<<std::endl;
        std::cout<<"Book title : "<<title<<std::endl;
        std::cout<<"Book Price : "<<price;
    }
};

void book::set_id(int x) // membership level
{
    id = x;
}

int main()
{
    book b1;
    //b1.input();
    b1.set_id(120);
    b1.display();
    getch();
    return 0;
}




