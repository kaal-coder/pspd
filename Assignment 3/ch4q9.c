#include<stdio.h>
#define TAX 0.0525
#define FLAT_RATE 39.99
#define ADD_WEEKDAYS_MIN_COST 0.40


int main()
{
double weekdaymins,nightmins,weekendmins,pretaxbill,avgmincost,tax,totalbill,addweekdaymins;
printf("Enter the number of weekday minutes>> ");
scanf("%lf",&weekdaymins);
printf("Enter the number of night minutes>> ");
scanf("%lf",&nightmins);
printf("Enter the number of weekend minutes>> ");
scanf("%lf",&weekendmins);
addweekdaymins=(weekdaymins>600)?weekdaymins-600:0;
pretaxbill=FLAT_RATE+addweekdaymins*ADD_WEEKDAYS_MIN_COST;
avgmincost=pretaxbill/(weekdaymins+nightmins+weekendmins);
tax=TAX*pretaxbill;
totalbill=pretaxbill+tax;
printf("\nThe number of weekday minutes: %.0f\nThe number of night minutes: %.0f\nThe number of weekend minutes: %.0f\nPretax bill: %.2f\naverage minute cost: %.2f\nTax: %.2f\nTotal bill: %.2f\n",weekdaymins,nightmins,weekendmins,pretaxbill,avgmincost,tax,totalbill);
return 0;
}
