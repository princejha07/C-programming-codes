// Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>
int main()
{
    int x,count=0,r;
    printf("enter a number ");
    scanf("%d",&x);
    while(x!=0)
    {
       r=x%10;
       count++;
       x=x/10;
    }
    if(count==3)
        printf("three digit number");
    else
        printf("not a three digit number");
    return 0;
}
