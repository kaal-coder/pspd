#include<stdio.h>
int main()
{
double x1,x2,y1,y2,slope,xmid,ymid,per_bisect,b;
printf("Enter the coordinate for the first point=>");
scanf("%lf%lf",&x1,&y1);

printf("Enter the coordinates for second point =>");
scanf("%lf%lf",&x2,&y2);
slope=(y2-y1)/(x2-x1);
printf("the slope of is %f");
xmid=(x1+x2)/2;
ymid=(y1+y2)/2;
per_bisect=-1/(slope);
b=ymid-(per_bisect*xmid);
printf("The coordinates entered were(%.1f,%.1f) and (%.1f,%.1f).\nThe perpendicular bisector this line is y=%.1fx+%.2f\n",x1,y1,x2,y2,per_bisect,b);
return 0;
}
