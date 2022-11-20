#include<stdio.h>

double cost_after_5_year(int p, int f, double r)
{
 return(p+5*f+5*r*p);
}

int main(void)
{
int initial_cost, annual_fuel_cost;
double tax_rate;
printf("Enter the initial house cost=>: ");
scanf("%d",&initial_cost);
printf("Enter the annual fuel cost=>: ");
scanf("%d",&annual_fuel_cost);
printf("Enter the tax rate=>: ");
scanf("%lf",&tax_rate);
printf("The total cost of a house after a 5 year period is %.2lf\n",cost_after_5_year(initial_cost,annual_fuel_cost,tax_rate));
}
