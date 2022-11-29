#include<stdio.h>
int main()
{
int m,n,side1,side2,hypotenuse;
printf("Enter the value of m=>");
scanf("%d",&m);
printf("Enter the value of n=>");
scanf("%d",&n);
side1=m*m-n*n;
side2=2*m*n;
hypotenuse=m*m+n*n;
printf("The pythagorean triple of these integer is %d,%d and %d\n",side1,side2,hypotenuse);
return 0;
}
