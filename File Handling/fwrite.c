#include<stdio.h>
#include<conio.h>

struct book
{
    int id;
    char name[20];
    float price;
};

void main()
{
    struct book b1;
    FILE *fp;
    fp = fopen("book.dat","ab");
    printf("Enter Book Id : ");
    scanf("%d",&b1.id);
    printf("Enter Book Name : ");
    fflush(stdin);
    gets(b1.name);
    printf("Enter Book Price : ");
    scanf("%f",&b1.price);

    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);
    getch();
}
