#include <stdio.h>
int gcd(int a,int b)
{
if(b==0)
return a;
else
return gcd(b,a%b);
}
int main()
{
int a,b;
printf("GCD CALCULATOR\n");
printf("enter the first integer: ");
scanf("%d",&a);
printf("enter the second integer: ");
scanf("%d",&b);
if(a<0)
a=-a;
if(b<0)
b=-b;
int ans=gcd(a,b);
printf("GCD: %d",ans);
return 0;
}
