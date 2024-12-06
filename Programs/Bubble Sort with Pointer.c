#include<stdio.h>
#include<conio.h>

void input(int*);
void sort(int*);
void display(int*);

void main()
{
    int i,a[5];
    input(&a[0]);
    sort(&a[0]);
    display(&a[0]);
}

void input(int *p)
{
    int i;
    printf("Enter five numbers \n");
    for(i=0; i<5; i++)
    {
        printf("Enter %d number ",i+1);
        scanf("%d",p+i);
    }
}

void sort(int *q)
{
    int i,j,temp;
    for(i=0; i<4; i++)
    {
        for(j=0; j<(4-i); j++)
        {
            if(*(q+j) > *(q+j+1))
            {
                temp = *(q+j);
                *(q+j) = *(q+j+1);
                *(q+j+1) = temp;
            }
        }
    }
}

void display(int *r)
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("%d ",*(r+i));
    }
}
