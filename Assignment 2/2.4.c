#include<stdio.h>
#include<math.h>
#define PI 3.14159265

double factorial(int n)
{
double result;
result = pow(n,n)*exp(-n)*sqrt((2*n+1/3.0)*PI);
return(result);
}
int main(void) 
{
 int n;
printf("Enter the number: ");
scanf("%d",&n);
printf("The factorial of %d is %.5lf \n",n,factorial(n));


}
