// Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int x,i;
    printf("enter a number ");
    scanf("%d",&x);
    for(i=x;i>=1;i--)
        printf("%d ",i*2);
    return 0;
}
