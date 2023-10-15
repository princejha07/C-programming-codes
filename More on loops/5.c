// Write a program to check whether two given numbers are co-prime numbers or not
#include<stdio.h>
int main()
{
    int a,b,i,min;
    printf("enter two numbers.. ");
    scanf("%d %d",&a,&b);
    min=a>b?b:a;
    for(i=2;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
            break;
    }
    if(i>min)
        printf("co-prime");
    else
        printf("not co-prime");
    return 0;
}
