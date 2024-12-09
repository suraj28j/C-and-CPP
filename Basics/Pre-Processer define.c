#include<stdio.h>
#include<conio.h>
#define PI 3.14 
//[ define is command , PI is macros, 3.14 is character-sequence ]

void main()
{
    int radius;
    float area;
    printf("Enter radius of circle : ");
    scanf("%d",&radius);
    area = PI*radius*radius;
    printf("Area of the circle is %0.2f",area);
    getch();
}
