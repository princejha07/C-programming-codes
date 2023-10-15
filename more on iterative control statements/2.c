// Write a program to print the first N natural numbers.

#include<stdio.h>
int main()
{
    int x,i;
    printf("enter a number ");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
        printf("%d ",i);
    return 0;
}
