#include<stdio.h>


double celsius_at_depth(double depth)
{
return(10*depth+20);
}
double fahrenheit(double c)
{
return(1.8*c+32);
}

int main(void)
{
double depth, celsius;
printf("Enter the depth (in kilometers)inside the earth: ");
scanf("%lf",&depth);
celsius=celsius_at_depth(depth);
printf("The temperature at %.2f km depth in degrees Celsius is %.2f\n\nThe temperature at %.2f km depth in degrees Fahrenheit is %.2f\n\n",depth,celsius,depth,fahrenheit(celsius));



}
