#include<stdio.h>
int main(void)
{
int weekday_min,weekend_min,night;
double rate=0.0525,cost,tax,amount,avgcost;
printf("enter the number of weekday minutes =>");
scanf("%d",&weekday_min);
printf("enter the number of night minutes =>");
scanf("%d",&night);
printf("enter the number of weekend minutes =>");
scanf("%d",&weekend_min);
printf("the number of weekday minutes : %d \n",weekday_min);
printf("the number of night minutes : %d \n",night);
printf("the number of weekend minutes : %d \n",weekend_min);

if(weekday_min<600)
{
cost=39.99;
}
else if(weekday_min>600)
{
cost=((weekday_min-600)*0.40)+39.99;
}
tax=cost*rate;
amount=cost+tax;
avgcost=amount/(weekday_min+weekend_min+night);
printf("Pretax bill : %0.2f \n",cost);
printf("Average minute cost : %0.2f \n",avgcost);
printf("tax : %0.2f \n",tax);
printf("total bill : %0.2f \n",amount);
}
