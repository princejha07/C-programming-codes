// Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    x=x/10;
    printf("now the number is %d",x);
    return 0;
}
