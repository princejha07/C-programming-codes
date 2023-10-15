// Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main()
{
    int x,i;
    printf("enter a number ");
    scanf("%d",&x);
    for(i=2;i<x;i++)
    {
        if(x%i==0)
            break;
    }
    if(i==x)
        printf("prime number");
    else
        printf("not prime");
    return 0;

}
