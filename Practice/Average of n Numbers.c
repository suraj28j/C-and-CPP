#include<stdio.h>
#include<conio.h>

int main()
{
    int i,size,sum=0;
    float avg;
    printf("How Many Numbers Do You Want to Input :- ");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        printf("Enter %d Numbers :- ",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=(float)sum/size; /// it call type cast,Now sum/size vale is float value
    printf("\nAverage of These Numbers are :- %f",avg);
    getch();
    return 0;
}
