// Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int x,sum=0,n;
    printf("enter a three digit number ");
    scanf("%d",&x);
    n=x;
    sum=sum+x%10;
    x=x/10;

    sum=sum+x%10;
    x=x/10;

    sum=sum+x%10;

    printf("sum of %d is %d",n,sum);
    return 0;
}
