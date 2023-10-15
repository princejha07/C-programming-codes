// Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
#include<stdio.h>
int main()
{
    int n,r,p;
    printf("enter number of items ");
    scanf("%d",&n);
    printf("enter number of items selected at a time ");
    scanf("%d",&r);
    p=permutation(n,r);
    printf("total arrangements is %d",p);
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
int permutation(int n,int r)
{
    return((factorial(n))/factorial(n-r));
}
