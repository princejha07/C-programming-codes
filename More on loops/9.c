// Write a program to check whether a given number is an Armstrong number or not
#include<stdio.h>
int main()
{
    int x,n,i,r,sum;
    printf("enter a number ");
    scanf("%d",&n);
    x=n;
    sum=0;
    while(x!=0)
    {
        r=x%10;
        sum=sum+r*r*r;
        x=x/10;
    }
    if(n==sum)
        printf("armstrong");
    else
        printf("not armstrong");
    return 0;
}
