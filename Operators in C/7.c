// Write a program to find the position of first 1 in LSB.
#include<stdio.h>
int main()
{
    int x,count=1 ;
    printf("Enter a number ");
    scanf("%d",&x);
    while(1)
    {
    if(x&1)
        {
          printf("%d",count);
          break;
        }
    else
        { count++;
          x=x>>1;
        }
    }
    return 0;
}
