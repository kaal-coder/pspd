#include <stdio.h>
#include <math.h>
int main()
{
int n,e;
double average=0,sum_sq=0,sd;
printf("Enter the no. of input");
scanf("%d",&n);
printf("The No. are\n");
for(int i=0;i<n;i++)
{
scanf("%d",&e);
sum_sq=sum_sq+pow(e,2);
average=average+e;
}
average=average/n;
sum_sq=sum_sq/n;
sum_sq=sum_sq-pow(average,2);
sd=sqrt(sum_sq);
printf("The standard deviation is %f\n",sd);
return 0;
}
