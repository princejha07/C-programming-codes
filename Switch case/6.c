// Program to check whether a year is a leap year or not. Using switch statement
#include<stdio.h>
int main()
{
    int year;
    printf("enter a year: ");
    scanf("%d",&year);
    switch(year%100)
    {
      case 0:
          switch(year%400)
          {
          case 0:
            printf("Leap year");break;
          default:
            printf("not leap year");
          }
          break;
      default:
          switch(year%4)
          {
            case 0:
              printf("Leap year");break;
            default:
              printf("not leap year");
          }
    }
    return 0;
}
