// Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main()
{
    int a,b,i,n;
    printf("enter two numbers.. ");
    scanf("%d %d",&a,&b);
    for(n=a;n<=b;n++)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                break;
        }
        if(n==i)
            printf("%d ",n);
    }
    return 0;
}
