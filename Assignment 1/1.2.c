#include <stdio.h>
#define G_CONS 9.8
#define WATER_MASS 1e3
#define EFFICIENCY_CONST 0.9
#define MEGAWATT 1e6
int main (void)
{
double height,volume,mass,energy,work,power;
printf("Enter height of the dam=>");
scanf("%lf",&height);
printf("Enter the volume of the water(in cubic meters)=>");
scanf("%lf",&volume);
mass=volume*WATER_MASS;
work=mass*height*G_CONS;
energy=work*EFFICIENCY_CONST;
power=energy/MEGAWATT;
printf("Amount of power produced is %.2f.\n",power);
}
