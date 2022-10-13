#include<stdio.h>

struct students
{
    
    int sub1[20];
    int sub2[20];
    int sub3[20];
    int sub4[20];
};struct students st[10];

int main()
{
    int i;
    int x;
    int z[20];
    printf("enter the number of students ");
    scanf("%d",&x);
    
    for(i=0;i<x;i++)
    {
        printf("enter marks of python");
        scanf("%d",&st->sub1[i]);
        printf("enter the marks of c-prog");
        scanf("%d",&st->sub2[i]);
        printf("enter the marks of maths ");
        scanf("%d",&st->sub3[i]);
        printf("enter the marks of phy ");
        scanf("%d",&st->sub4[i]);

    }
   
    
   
    for(i=1;i<=x;i++){
       z[i]=st->sub1[i]+st->sub2[i]+st->sub3[i]+st->sub4[i];
        
    }
   for(i=1;i<=x;i++)
   {
    printf("%d the total marks is %d \n",i,z[i]);
  
   }


}