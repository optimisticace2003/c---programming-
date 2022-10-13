#include<stdio.h>
float sim(float p,float t,char r)
{
    float si ;
    si = p*r*t/100;
    return si;
}
int main()
{
    float a,b,d,e;/
    char c[10];
    float answer;
    printf("enter the principal amount ");
    scanf("%f",&a);
    printf("enter the time period");
    scanf("%f",&b);
    printf("are you an senior citizen(yes/no)");
    scanf("%s",&c);
    if (c=="yes")
    {
        d=12;
    }
    else
    {
        d =10;
    }
    answer = sim(a,b,d);
    printf("%f",answer);


}   