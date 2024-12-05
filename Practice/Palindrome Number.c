#include<stdio.h>
#include<conio.h>

void main()
{
    int num,temp=0,cpy_num;
    printf("Enter a number : ");
    scanf("%d",&num);
    cpy_num=num;
    while(cpy_num!=0)
    {
        temp = 10*temp+cpy_num%10;
        cpy_num = cpy_num/10;
    }
   if(num==temp)
    printf("%d is palindrome number",num);
   else
    printf("%d is not palindrome number",num);

   getch();
}
