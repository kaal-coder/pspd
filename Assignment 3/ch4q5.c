#include<stdio.h>

int main()
{
double rsn;
printf("\nEnter the magnitude of earthquake on Ritcher scale number=>");
scanf("%lf",&rsn);
if(rsn<5)
printf("Little or no damage\n");
else if(rsn<5.5)
printf("Some damage\n");
else if(rsn<6.5)
printf("Serious damage:walls may crack or fall\n");
else if(rsn<7.5)
printf("Disater:houses and building may collapse\n");
else
printf("Catastrophe:most buildings destroyed\n");
return 0;
}
