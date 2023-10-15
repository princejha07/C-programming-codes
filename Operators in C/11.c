/* Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)  */

#include<stdio.h>
int main()
{
    int num,d;
    printf("Enter a number ");
    scanf("%d",&num);
    printf("\nenter a digit ");
    scanf("%d",&d);
    num=num*10+d;
    printf("new number is %d ",num);
    return 0;
}
