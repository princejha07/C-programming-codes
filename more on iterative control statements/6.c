// Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{
    int x,i;
    printf("enter a number ");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
        printf("%d ",2*i);
    return 0;
}
