/* Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.  */

#include<stdio.h>
int main()
{
    int x;
    printf("Enter amount in INR ");
    scanf("%d",&x);
    printf("USD equivalent of %d INR is %f",x,x*(1/76.23));
    return 0;
}
