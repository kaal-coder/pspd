#include <stdio.h>
 
int main(void)
{
double minute,Temperature,time,hours;
int hour,m;
printf("Enter the hour =>");
scanf("%d",&hour);
printf("Enter the minute =>");
scanf("%d",&m);
minute=m/60.0;
time=hour+minute;
printf("time =>%.1f\n",time);
Temperature=((4*time*time)/(time+2))-20;
printf("The time it takes to freze %.2f",Temperature);
return 0;
}

