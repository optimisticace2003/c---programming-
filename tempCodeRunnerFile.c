#include<stdio.h>
int main()
{
printf("enter the number of elements going to enter \n");
int n;
scanf(“%d”,&n);
printf("enter the array elements");
int arr[n];
int i;
for(i = 0; i < n; i++)
{
scanf(“%d”,&arr[i]);
}
printf("reversed array is :");
for(i = n-1; i >= 0; i--)
{
printf(arr[i]);
}
return 0;
}