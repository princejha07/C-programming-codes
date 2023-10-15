// Write a program to check whether a given number is there in the Fibonacci series or not.
#include<stdio.h>
int main()
{
    int a=-1,b=1,c,x,i;
    printf("enter a number to find in the in the series..");
    scanf("%d",&x);
    do
    {
        c=a+b;
        a=b;
        b=c;
        if(c==x)
            break;
    }while(c<x);
    if(c==x)
    {
        printf("found");
    }
    else
        printf("not found");
    return 0;
}
