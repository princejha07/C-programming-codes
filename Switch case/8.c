/* Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.  */
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    switch(x>0)
    {
    case 1:
        x=-x;
        break;
    case 0:
        x=-x;
        break;
    default:
        printf("invalid number ");
    }
    printf("%d",x);
    return 0;
}
