#include<stdio.h>
#include<math.h>
#define PI 3.14159265

double surface_area(double r,double h)
{
return(PI*pow(r,2)+(2*PI*r*h));
}

int main(void)
{
double radius,height,cost_per_square,no_of_container,surfacearea,
cost_each_container,cost;
printf("Radius: ");
scanf("%lf",&radius);
printf("Height: ");
scanf("%lf",&height);
printf("Cost per square cm: ");
scanf("%lf",&cost_per_square);
printf("No of container: ");
scanf("%lf",&no_of_container);
surfacearea=surface_area(radius,height);
cost_each_container=surfacearea*cost_per_square;
cost= cost_each_container*no_of_container;
printf("Cost pd each container: %.2f\n Total cost of producing all the container:%f\n",cost_each_container,cost);



}
