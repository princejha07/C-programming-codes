// Write a function to check whether a given number contains a given digit or not. (TSRS)
#include<stdio.h>
int main()
{
    int n,dig;
    printf("enter a number ");
    scanf("%d",&n);
    printf("enter a digit to check ");
    scanf("%d",&dig);
    if(check_digit(n,dig))
        printf("we found the digit");
    else
        printf("digit not found");
    return 0;
}
int check_digit(int x,int d)
{
    int r;
    while(x!=0)
    {
        r=x%10;
        if(r==d)
            return 1;
        x=x/10;
    }
    return 0;
}
