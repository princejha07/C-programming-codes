// Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
#include<stdio.h>
int factorial(int n);
int combination(int n,int r);
int main()
{
    int n,r,c;
    printf("enter number of items ");
    scanf("%d",&n);
    printf("enter selected item at a time ");
    scanf("%d",&r);
    c=combination(n,r);
    printf("number of combination is %d",c);
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
int combination(int n,int r)
{
    return((factorial(n))/(factorial(r)*factorial(n-r)));
}
