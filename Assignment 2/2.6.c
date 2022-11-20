#include<stdio.h>
#define FEET_PER_MILE 5280.0
#define METER_PER_MILE 1608.77

double fps(double time)
{
 return(FEET_PER_MILE/time);
}
double mps(double time)
{
 return(METER_PER_MILE/time);
}
int main(void)
{

int min; double sec,time;
printf("Enter the time in minutes and second=>: ");
scanf("%d%lf",&min,&sec);
time = min*60 + sec;

printf("After %d minutes and %f seconds,\n The speed in  FPS: %.2ff/s \n Speed in  MPS : %.2f m/s\n", min,sec,fps(time),mps(time));
}
