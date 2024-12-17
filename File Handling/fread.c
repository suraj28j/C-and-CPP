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
    fp = fopen("book.dat","rb");

    //fread(&b1,sizeof(b1),1,fp); // read only 1st value & fread return a number

    while(fread(&b1,sizeof(b1),1,fp)>0)
    {
        printf("Book Id : %d\nBook Name : %s\nBook Price : %f\n\n",b1.id,b1.name,b1.price);
    }
    fclose(fp);
    getch();
}
