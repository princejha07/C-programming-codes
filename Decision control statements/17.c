/* Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.  */

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the sides of triangle ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c || a+c>b || b+c>a)
        printf("valid");
    else
        printf("not valid");
    return 0;
}
