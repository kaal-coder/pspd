#include<stdio.h>
#include<math.h>

double population(double t)
{
return(52.966+(2.184*t));
}

int main(void)
{
int t;
printf("Enter a year after 1990>  ");
scanf("%d",&t);


printf("Predicted Gotham City population for %d (in thousands):%.3f\n ",t,population(t-1990));



}
