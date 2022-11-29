#include <stdio.h>
int main()
{
int n,temp,r,sum=0;
printf("Enter the Number: ");
scanf("%d",&n);
temp=n;
printf("The digits from right to left are as below\n");
while(n>0)
{
r=n%10;
n=n/10;
printf("%d ",r);
sum+=r;
}
printf("\n");
if(sum%9==0)
printf("the no. %d is divisble by 9\n",temp);
else
printf("the no. %d is not divisble by 9\n",temp);
return 0;
}
