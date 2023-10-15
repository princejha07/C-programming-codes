// Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
    int a,b,l,max;
    printf("enter two numbers ");
    scanf("%d %d",&a,&b);
    max=a>b?a:b;
    for(l=max;l<=a*b;l=l+max)
    {
        if(l%a==0 && l%b==0)
            break;
    }
    printf("LCM of %d and %d is %d",a,b,l);
    return 0;
}
