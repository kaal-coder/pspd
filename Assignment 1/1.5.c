#include<stdio.h>
int main ()
{
double volume_infused,minutes_infused,rate,hours;
printf("Volume to be infused (ml)=>");
scanf("%lf",&volume_infused);
printf("Minutes over which to infuse =>");
scanf("%lf",&minutes_infused);
hours=minutes_infused/60.0;
rate=(volume_infused)/hours;
printf("\nVTBI:%.0f ml\n",volume_infused);
printf("Rate:%.0f ml/hr\n",rate);
return(0);
}
