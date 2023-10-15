/* Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.  */

#include<stdio.h>
int main()
{
    int cp,sp,profit,loss;
    float percent;
    printf("enter cost price ");
    scanf("%d",&cp);
    printf("enter selling price ");
    scanf("%d",&sp);
    if(sp>cp)
    {
        profit=sp-cp;
        percent=(profit*100)/cp;
        printf("profit percent is %f",percent);
    }
    else
    {
        loss=cp-sp;
        percent=(loss*100)/cp;
        printf("loss percent is %f",percent);
    }
    return 0;
}
