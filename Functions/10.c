/* Write a function to print all prime factors of a given number.
For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN) */
#include<stdio.h>
void prime_factor(int);
int main()
{
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    printf("prime factors are...");
    prime_factor(x);
}
void prime_factor(int x)
{
    int i;
    for(i=2;x>1;i++)
    {
       while(x%i==0)
       {
         printf("%d ",i);
         x=x/i;
       }
    }
}
