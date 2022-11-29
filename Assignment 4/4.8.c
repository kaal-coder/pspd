#include<stdio.h>
int main()
{
int odometer,Pollutant;
double grams,reading;
printf("(1) Carbon monoxide \n");
printf("(2) Hydrocarbons \n");
printf("(3) Nitrogen Oxides \n");
printf("(4) Nonmethane hydrocarbons \n");
printf("Enter Pollutant number>>");
scanf("%d",&Pollutant);
printf("Enter number of grams emitted per miles>>");
scanf("%lf",&grams);
printf("Enter Odometer Reading>>");
scanf("%d",&odometer);
switch(Pollutant)
{
case 1:
if(odometer<50000)
{
reading=3.4;
}else
{
reading=4.2;
}
break;
case 2:
if(odometer<50000)
{
reading=0.31;
}else
{
reading=0.39;
}
break;
case 3:
if(odometer<50000)
{
reading=0.4;
}else
{
reading=0.5;
}
break;
case 4:
if(odometer<50000)
{
reading=0.25;
}else
{
reading=0.31;
}
}
printf("Emissions exceed permitted level of %.2f grams/miles",reading);
}

