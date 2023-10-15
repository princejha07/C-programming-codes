// Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int factorial(int);
int main()
{
    int x,fac;
    printf("enter a number ");
    scanf("%d",&x);
    fac=factorial(x);
    printf("factorial is %d",fac);
    return 0;
}
int factorial(int n)
{
    int f=1;
    while(n!=0)
    {
        f=f*n;
        n--;
    }
    return f;
}
