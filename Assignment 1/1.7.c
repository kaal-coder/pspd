#include<stdio.h>
#define BTU_PER_GALLON 5.8e6/42
int main()
{
double heat_delivered,gallons,efficiency;
printf("Enter the eficiency of your house oil furnace as a percentage>");
scanf("%lf",&efficiency);
printf("Enter the number of gallons of oil burned>");
scanf("%lf",&gallons);
heat_delivered=BTU_PER_GALLON*gallons*efficiency/100;
printf(" heat delivered is %.2f\n",heat_delivered);
return (0);
}
