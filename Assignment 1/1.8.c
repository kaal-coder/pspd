#include<stdio.h>
#define OLD_FLUSH 15
#define NEW_FLUSH 2
#define COST_OF_NEW_TOILET 150
#define TOILET_PER_PERSON 3
#define TOTAL_FLUSH_PER_DAY 14
int main()
{
double water_cost_per_litre;
unsigned long size_of_community,toilets,water_saved,cost_of_toilets,total_cost_saved;

printf("Enter the size of community=>");
scanf("%ld",&size_of_community);
printf("Enter the cost of water per litre=>");
scanf("%lf",&water_cost_per_litre);
toilets=(size_of_community+2)/3;
water_saved=TOTAL_FLUSH_PER_DAY*(OLD_FLUSH-NEW_FLUSH)*toilets;
cost_of_toilets=COST_OF_NEW_TOILET*toilets;
total_cost_saved=(water_saved*water_cost_per_litre)-cost_of_toilets;
printf("total %ld litres of wate rsaved>\n",water_saved);
printf("Total $%ld cost saved >\n",total_cost_saved);
return(0);
}
