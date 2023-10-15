// Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int x,r,count=0;
    printf("enter a number ");
    scanf("%d",&x);
    while(x!=0)
    {
        x=x/10;
        count++;
    }
    printf("count is %d",count);
    return 0;
}
