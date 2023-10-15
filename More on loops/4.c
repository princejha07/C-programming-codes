// Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int a,b,h,min;
    printf("enter two number ");
    scanf("%d %d",&a,&b);
    min=a>b?b:a;
    for(h=min;h>=1;h--)
    {
        if(a%h==0 && b%h==0)
            break;
    }
    printf("hcf is %d",h);
    return 0;
}
