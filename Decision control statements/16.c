/* 16. Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character. */

#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
        printf("lowercase");
    else if(ch>='A' && ch<='Z')
        printf("uppercase");
    else if(ch>='0' && ch<='9')
        printf("digit");
    else
        printf("special character");
    return 0;
}
