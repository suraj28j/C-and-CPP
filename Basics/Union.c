#include<stdio.h>
#include<conio.h>

union item
{
    int x;
    float y;
    char z;
};

void main()
{
    union item i1;
    i1.x  = 2;
    printf("%d\n",i1.x);
    i1.y = 2.8; // y over write to x
    printf("%f\n",i1.y);
    i1.z = 'a'; // z over write to y
    printf("%c",i1.z);
    getch();
}
