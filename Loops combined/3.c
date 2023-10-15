// Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int x,i,sum=0;
    printf("enter a number ");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        sum=sum+2*i-1;
    }
    printf("sum is %d",sum);
    return 0;
}

