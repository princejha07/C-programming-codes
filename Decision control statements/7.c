// Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D;
    float x,y;
    printf("enter the co-efficient of x^2,x and constant ");
    scanf("%d %d %d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0)
    {
        printf("the roots are real and distinct \n ");
        x=(-b+sqrt(D))/2*a;
        y=(-b-sqrt(D))/2*a;
        printf("x=%f and y=%f",x,y);
    }
    else if(D==0)
    {
        printf("the roots are real and equal \n");
        x=y=(-b+sqrt(D))/2*a;
        printf("x=%f and y=%f",x,y);
    }
    else
        printf("the roots are imagenary");
    return 0;
}
