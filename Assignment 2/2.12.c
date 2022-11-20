#include<stdio.h>
#include<math.h>

double speed(double f)
{
return(1086*sqrt((5*f+297)/247));
}

int main(void)
{
double f;
printf("Enter the temperature(in Fahrenheit)=>: ");
scanf("%lf",&f);


printf("The speed of sound in air at temperature 97.00 Fahrenheit is %.2f ft/sec\n\n ",speed(f));



}
