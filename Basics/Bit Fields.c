#include<stdio.h>
#include<conio.h>

// with bit fields //
struct date
{
    unsigned short int d:5;
    unsigned short int m:4;
    unsigned short int y;
};

struct DATE
{
    unsigned int d:5;
    unsigned int m:4;
    unsigned int y;
};


// without bit fields //
struct _DATE
{
    unsigned int d;
    unsigned int m;
    unsigned int y;
};

void main()
{
    struct date d1;
    struct DATE D1;
    struct _DATE _D1;
    printf("%d\n",sizeof(d1)); // 4 bytes
    printf("%d\n",sizeof(D1)); // 8 bytes
    printf("%d",sizeof(_D1)); // 12 bytes
}
