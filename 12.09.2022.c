#include<stdio.h>

int main()
{
    int x;
    printf("enter the number  ");
    scanf("i",&x);
    if(x==0)
    {
        printf("entered number neither even or odd");
    }
    else if(x%2==0)
        {
        printf("the number is  divisible by 2 /n");
        printf("the number is even /n");
        }
    else if(x%2 != 0)
        {
        printf("the number is not divisible by 2 /n");
        printf("the number is odd /n");
        }
    
    
}