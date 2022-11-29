#include <stdio.h>
int main()
{
int n,e,min_v=9999,max_v=-9999;
double average=0;
printf("Enter the no. of input");
scanf("%d",&n);
printf("The No. are\n");
for(int i=0;i<n;i++)
{
scanf("%d",&e);
if(min_v>e)
min_v=e;
if(max_v<e)
max_v=e;
average=average+e;
}
average=average/n;
printf("the Largest no. : %d\n",max_v);
printf("the Smallest no. : %d\n",min_v);
printf("the Average no. : %.2f\n",average);
return 0;
}
