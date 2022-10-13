#include<stdio.h>

struct students
{
    int roll[20];
    char name[20];
    int marks[20];
};struct students st[10];
int main()
{
    int x ,i;
    printf("enter the number of students");
    scanf("%d",&x);
    printf("enter the details in the order as roll number ,name , marks");
    for(i=0;i<x;i++)
    {
        printf("enter your name \n");
        scanf("%s",&st->name[i]);

        printf("enter the roll number ");
        scanf("%d",&st->roll[i]);
        
        printf("enter the marks");
        scanf("%d",&st->marks[i]);
            }
    printf("displaying :-");
    for(i=0;i<x;i++){

     printf("%s",&st->name[i]);
     printf("%d",&st->roll[i]);
     printf("%d",&st->marks[i]);

    }

}