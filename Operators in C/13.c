/* Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right. */

#include<stdio.h>
int main()
{
    int x,rem;
    printf("enter a number ");
    scanf("%d",&x);
    rem=x%10;
    rem=rem*100;
    x=x/10;
    x=rem+x;
    printf("rotated number is %d",x);
    return 0;

}
