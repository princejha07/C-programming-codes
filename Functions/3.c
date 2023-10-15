/* Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS) */
#include<stdio.h>
int is_even(int);
int main()
{
    if(is_even(8))
        printf("even");
    else
        printf("odd");
    return 0;
}
int is_even(int x)
{
    if(x%2==0)
        return 1;
    return 0;
}
