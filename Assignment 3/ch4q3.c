#include<stdio.h>

int main()
{
double degree,dir;
printf("\nEnter the compass headings in degress(0 to 360)=>");
scanf("%lf",&degree);
printf("The bearing is ");
if(degree<90)
{
dir=degree;
printf("North %.1f degrees West.\n",dir);
}
else if(degree<=180)
{
dir=180-degree;
printf("South %.1f degrees East.\n",dir);
}
else if(degree<270)
{
dir=dir-180;
printf("South %.1f degrees West.\n",dir);
}
else
{
dir=360-dir;
printf("North %.1f degrees East.\n",dir);
}
return 0;
}
