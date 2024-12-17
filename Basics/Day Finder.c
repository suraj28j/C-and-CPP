#include<stdio.h>
#include<conio.h>


int setInitDay(int);
int countYears(int);
int countDays(int);

int setInitDay(int y)
{
    int initialDay;
    if(y>=2000)
        initialDay = 1;
    else
    {
        if(y>=1900 && y<2000)
            initialDay=2;
        else
        {
            if(y>=1800 && y<1900)
                initialDay = 4;
            else
                initialDay = 6;
        }
    }
    return initialDay;
}

int countYears(int y)
{
    int currentYear,leapYears,years;
    years = y%100-1;
    leapYears = years/4;
    currentYear = (y%100)%4 == 0 ? 1 : 0; // current year is leap year or not
    //printf("%d %d %d",years,leapYears,currentYear);
    return (years+leapYears+currentYear);
}

int countDays(int m)
{
    int i,sum=0,months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    for(i=0; i< m-1; i++)
    {
        sum = sum+months[i];
    }
    //printf("%d ",sum);
    return sum;
}
void main()
{
    int d,m,y,initDay,yearSum,monthSum,total,result;

    printf("Enter Day (1-30) : ");
    scanf("%d",&d);
    printf("Enter Month (1-12) : ");
    scanf("%d",&m);
    printf("Enter Year : ");
    scanf("%d",&y);

    initDay = setInitDay(y);
    yearSum = countYears(y);
    monthSum = countDays(m);
    total = (yearSum+monthSum+d)%7;
    result = total+initDay+1;
    if(result>7)
        result = result%7;
    //printf("%d ",initDay+yearSum+monthSum+d);

    switch(result)
    {
    case 1:
        printf("It's Sunday");
        break;
    case 2:
        printf("It's Monday");
        break;
    case 3:
        printf("It's Tuesday");
        break;
    case 4:
        printf("It's Wednesday");
        break;
    case 5:
        printf("It's Thursday");
        break;
    case 6:
        printf("It's Friday");
        break;
    case 7:
        printf("It's Saturday");
        break;
    default :
        printf("Something Wrong !");
    }

    getch();
}

