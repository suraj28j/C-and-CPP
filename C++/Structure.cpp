#include<iostream>
#include<string.h>
#include<conio.h>

struct book
{
private:
    int id;
    char title[30];
    float price;
public:
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

int main()
{
    book b1;
    //b1.id = 4; // error
    b1.input();
    b1.display();
    getch();
    return 0;
}




