/* Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
*/
#include<stdio.h>
int main()
{
    int units;
    float amt,total;
    printf("enter electricity units: ");
    scanf("%d",&units);
    switch(units)
    {
    case 1 ... 50:
        amt=units*0.5;
        break;
    case 51 ... 150:
        amt=25+(units-50)*0.75;
        break;
    case 151 ... 250:
        amt=100+(units-150)*1.20;
        break;
    case 251 ... 1000:
        amt=220+(units-250)*1.50;
        break;
    default:
        printf("invalid units");
    }
    total=(amt*20/100)+amt;
    printf("Total electricity bill is %f",total);
    return 0;
}
