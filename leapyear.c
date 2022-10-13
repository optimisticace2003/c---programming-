#include<stdio.h>
int leap_year(int a,int count)
{
    if (a%400== 0)
    {
        count++;
    }
    else if(a%100)
    {
        count++;
    }
    else if(a%4)
    {
        count++;
    }

}

int main ()
{
    int d,e;
    printf("enter the year :");
    scanf("%d",&d);
    leap_year(d,e);

    if(e==3)
    {
        printf("yes it is a leap year");
    }
    else
    {
        printf("no it is not a leap year");
    }

}