// Write a program to find next Prime number of a given number
#include<stdio.h>
int main()
{
    int x,i;
    printf("enter a prime number.. ");
    scanf("%d",&x);
    do
    {
        x++;
        for(i=2;i<x;i++)
        {
            if(x%i==0)
                break;
        }
        if(i==x)
            printf("%d",x);
    }while(i!=x);
    return 0;
}
