#include <stdio.h>
#define PER_MILES 0.35
int main (void)
{
double beg_odo,end_odo,miles,reimbursement;
printf("MILEAGE REIMBURSEMENT CALCULATOR\n");
printf("Enter beginning odometer reading=>");
scanf("%lf",&beg_odo);
printf("Enter ending odometer reading=>");
scanf("%lf",&end_odo);
miles=end_odo-beg_odo;
printf("You travelled %.1f miles",miles);
printf("         at $%.2f miles\n",PER_MILES);
reimbursement=miles*PER_MILES;
printf("Your reimbursement is %.2f\n",reimbursement);
return(0);
}
