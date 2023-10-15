// Write a program which takes the day number of a week and displays a unique greeting message for the day.
#include<stdio.h>
int main()
{
    int day;
    printf("enter day number: ");
    scanf("%d",&day);
    switch(day)
    {
      case 1:
          printf("Monday,\n hi there");break;
      case 2:
          printf("Tuesday,\n hello");break;
      case 3:
          printf("Wednesday,\n good morning");break;
      case 4:
          printf("Thursday,\n good afternoor");break;
      case 5:
          printf("Friday,\n have a nice day");break;
      case 6:
          printf("Saturday,\n pleasure to meet you");break;
      case 7:
          printf("Sunday,\n happy holiday");break;
      default:
        printf("invalid day of weak");
    }
    return 0;
}
