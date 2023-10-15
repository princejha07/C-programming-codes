/* Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice;
    int a,b,c;
    while(1)
    {
    printf("\n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Exit \n\n");
    printf("enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
          printf("\n Addition \n");
          printf("enter two numbers: ");
          scanf("%d %d",&a,&b);
          c=a+b;
          printf("sum is %d",c);
          break;
      case 2:
          printf("\n Subtraction \n");
          printf("enter two numbers: ");
          scanf("%d %d",&a,&b);
          c=a-b;
          printf("difference is %d",c);
          break;
      case 3:
          printf("\n Multiplication \n");
          printf("enter two numbers: ");
          scanf("%d %d",&a,&b);
          c=a*b;
          printf("product is %d",c);
          break;
      case 4:
          printf("\n Division \n");
          printf("enter two numbers: ");
          scanf("%d %d",&a,&b);
          c=a/b;
          printf("division is %d",c);
          break;
      case 5:
          exit(0);
      default:
          printf("Invalid Input");
    }
    }
    return 0;

}
