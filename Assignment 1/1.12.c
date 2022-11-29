#include<stdio.h>
int main ()
{
double accelaration,takeoff_speed,distance,time;
printf("Enter the jets takeoff speed km/hr>");
scanf("%lf",&takeoff_speed);
printf("Enter the distance over which the catapult acalaraes the jet from rest to takeoff (in meters)");
scanf("%lf",&distance);
takeoff_speed=takeoff_speed*(5/18.0);
time=(2*distance)/takeoff_speed;
accelaration=takeoff_speed/time;
printf("the time(in seconds) for the jet to accelarate to takeoff speed is %2.2f.\n",time);
printf("The constant  accelaration (in meters per second) the jet is %.2f.\n",accelaration);
return 0;
}
