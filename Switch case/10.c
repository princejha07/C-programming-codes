// C program to find all roots of a quadratic equation using switch case
#include<stdio.h>
int main()
{
    int a,b,c,D;
    float x,y;
    printf("enter the co-efficient of x^2 , x and constant ");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    switch(D>0)
    {
    case 1:
        printf("roots are real and distinct");
        x=(-b+sqrt(D))/2*a;
        y=(-b-sqrt(D))/2*a;
        printf("roots are x=%f and y=%f",x,y);
        break;
    case 0:
        switch(D==0)
        {
        case 1:
            printf("roots are equal ");
            x=y=(-b+sqrt(D))/2*a;
            printf("roots are x=%f and y=%f",x,y);
            break;
        case 0:
            printf("roots are imaginary ");
            break;
        }
    }
    return 0;
}
