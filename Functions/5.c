// Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void odd_natural(int);
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    odd_natural(n);
    return 0;
}
void odd_natural(int x)
{
    int i;
    for(i=1;i<=x;i++)
        printf("%d ",2*i-1);
}
