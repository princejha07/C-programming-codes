/* Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
*/
#include<stdio.h>
int main()
{
    int choice,a,b,c;
    while(1)
    {
    printf("\n.....................................................................................\n");
    printf("1. Check whether a given set of three numbers are lengths of an isosceles triangle or not \n ");
    printf("2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not \n ");
    printf("3. Check whether a given set of three numbers are equilateral triangle or not \n ");
    printf("4. Exit \n\n");
    printf("Enter the choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
       case 1:
           printf("Enter 3 sides of triangle: ");
           scanf("%d%d%d",&a,&b,&c);
           if(a==b || b==c || c==a)
            printf("Isosceles Triangle");
           else
            printf("Not an isosceles triangle");
           break;
       case 2:
           printf("Enter 3 sides of triangle: ");
           scanf("%d%d%d",&a,&b,&c);
           if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
            printf("Right angle Triangle");
           else
            printf("not right angle triangle");
           break;
       case 3:
           printf("Enter 3 sides of triangle: ");
           scanf("%d%d%d",&a,&b,&c);
           if(a==b && b==c)
            printf("Equilateral Triangle");
           else
            printf("not equilateral triangle");
           break;
       case 4:
           exit(0);
       default:
           printf("Invalid input");
    }
    }
    return 0;
}
