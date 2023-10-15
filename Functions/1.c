// Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area(int);
int main()
{
    float a;
    a=area(2);
    printf("area is %f",a);
    return 0;
}
float area(int r)
{
    return (3.14*r*r);
}
