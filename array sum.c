#include<stdio.h>

int main()
{
    int a[100];
    int i,n,count=0;

    printf("enter the num of elements");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        printf("enter the elements");
        scanf("%i",&a[i]);
        count = count+a[i];
    }
    printf("%i", count);
}