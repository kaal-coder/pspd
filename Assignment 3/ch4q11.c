#include<stdio.h>

int main()
{
double bp;
printf("Enter the observed boiling point of a substance in C>> ");
scanf("%lf",&bp);
if(bp>95&&bp<=105)
printf("Substance is Water\n");
else if(bp>339.15&&bp<=374.85)
printf("Substance is mercury\n");
else if(bp>1127.65&&bp<=1246.35)
printf("Substance is Copper\n");
else if(bp>2083.35&&bp<=2302.65)
printf("Substance is Silver\n");
else if(bp>2527&&bp<=2793)
printf("Substance is Gold\n");
else
printf("Substance unknown\n");
return 0;
}
