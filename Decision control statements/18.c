// Write a program which takes the month number as an input and display number of days in that month

#include<stdio.h>
int main()
{
    int m;
    printf("enter month numbers between 1 to 12 \n");
    scanf("%d",&m);
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        printf("31 days");
    else if(m==4 || m==6 || m==9 || m==11)
        printf("30 days");
    else if(m==2)
        printf("28 or 29 days");
    else
        printf("invalid month number");
    return 0;
}
