// Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main()
{
   int x;
   printf("enter a number ");
   scanf("%d",&x);
   if(x%5==0)
    printf("divisible");
   else
    printf("non divisible");
   return 0;
}
