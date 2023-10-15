// Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
int main()
{
    int n,i,r,sum,x;
    for(n=1;n<=1000;n++)
    {   x=n;
        sum=0;
        while(x!=0)
        {
            r=x%10;
            sum=sum+r*r*r;
            x=x/10;
        }
        if(sum==n)
            printf("%d ",n);
    }
    return 0;
}
