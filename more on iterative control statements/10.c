// Write a program to print a table of N.
#include<stdio.h>
int main()
{
    int table;
    int i;
    printf("enter table number ");
    scanf("%d",&table);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d \n",table,i,table*i);
    }

}
