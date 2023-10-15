// Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int x,fac=1;
    printf("enter a number ");
    scanf("%d",&x);
    while(x!=0)
    {
        fac=fac*x;
        x--;
    }
    printf("factorial is %d",fac);
    return 0;
}
