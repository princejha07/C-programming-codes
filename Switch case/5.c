/* Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.printf("good");
else if(var == 2)
System.out.printf("better");
else if(var == 3)
System.out.printf("best");
else
System.out.printf("invalid");
*/
#include<stdio.h>
int main()
{
    int var;
    printf("enter a number between 1 to 3 ");
    scanf("%d",&var);
    switch(var)
    {
      case 1:
          printf("good");break;
      case 2:
          printf("better");break;
      case 3:
          printf("best");break;
      default:
          printf("Invalid");
    }
    return 0;
}
