#include<stdio.h>
#include<conio.h>

struct book input(void);
void display(struct book);

struct book
{
    int id;
    char title[20];
    float price;
};

struct book input()
{
    struct book b;
    printf("Enter Book Id : ");
    scanf("%d",&b.id);
    printf("Enter Book Title : ");
    fflush(stdin);
    gets(b.title);
    printf("Enter Book Price : ");
    scanf("%f",&b.price);
    return (b);
};
void display(struct book b)
{
    printf("Book Id : %d\n",b.id);
    printf("Book Title : ");
    puts(b.title);
    printf("Book Price : %0.2f",b.price);
}
void main()
{
    struct book b1;
    b1 = input();
    display(b1);
    getch();
}
