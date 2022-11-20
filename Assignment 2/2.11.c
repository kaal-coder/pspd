#include<stdio.h>
#include<math.h>

double speeds_ratio(double max, double min)
{
return(pow((max/min),1/5.0));
}

int main(void)
{
double max, min;
printf("Enter the maximum speed in revolution per minute=>: ");
scanf("%lf",&max);
printf("Enter the minspeed in revolution per minute=>: ");
scanf("%lf",&min);

printf("The ratio between successive speeds of a six-speed gearbox with maximum speed %.2f rpm and minimum speed %.2f rpm is %.2f ",max,min,speeds_ratio(max,min));



}
