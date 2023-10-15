// Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
    int a,b,t;
    printf("Enter two numbers to swap ");
    scanf("%d %d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("swapped values are a=%d and b=%d",a,b);
    return 0;
}
