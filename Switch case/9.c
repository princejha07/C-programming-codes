// Program to Convert even number into its upper nearest odd number Switch Statement.
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    switch(x%2==0)
    {
    case 1:
        x++;break;
    default:
        printf("already an odd number");
    }
    printf(" %d",x);
    return 0;
}
