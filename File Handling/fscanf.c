#include<stdio.h>
#include<conio.h>

void main()
{
    int num1,num2,sum;
    FILE *fp;
    fp = fopen("add.txt","r");
    if(fp==NULL)
    {
        printf("can't open the file");
    }
    fscanf(fp,"%d %d %d",&num1,&num2,&sum);
    printf("num1 = %d, num2 = %d and sum is %d",num1,num2,sum);
    fclose(fp);
    getch();
}
