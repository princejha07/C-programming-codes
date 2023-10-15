// Write a program to print unit digit of a given number
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    x=x%10;
    printf("unit digit is %d",x);
    return 0;
}
