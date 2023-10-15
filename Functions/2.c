// Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float simple_interest(int,float,int);
int main()
{
    float si;
    si=simple_interest(50,0.06,4);
    printf("simple interest is %f",si);
    return 0;
}
float simple_interest(int p,float r,int t)
{
    return (p*r*t);
}
