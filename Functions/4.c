// Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void natural_number(int);
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    natural_number(n);
    return 0;
}
void natural_number(int x)
{
    int i;
    for(i=1;i<=x;i++)
        printf("%d ",i);
}
