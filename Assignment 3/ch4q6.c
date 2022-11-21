#include<stdio.h>

int main()
{
double x,y;
printf("\nEnter the x and y coordinates of a point=> ");
scanf("%lf%lf",&x,&y);
if(x==0)
printf("(%.1f,%.1f) is on y-axis.\n",x,y);
else if(y==0)
printf("(%.1f,%.1f) is on x-axis.\n",x,y);
else if(x>0&&y>0)
printf("(%.1f,%.1f) lies in quadrant I.\n",x,y);
else if(x<0&&y>0)
printf("(%.1f,%.1f) lies in quadrant II.\n",x,y);
else if(x<0&&y<0)
printf("(%.1f,%.1f) lies in quadrant III.\n",x,y);
else if(x>0&&y<0)
printf("(%.1f,%.1f) lies in quadrant IV.\n",x,y);
else
printf("(%.1f,%.1f) lies on Origin.\n",x,y);
return 0;
}
