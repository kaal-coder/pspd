#include<stdio.h>
#include<math.h>
#define IR_PER_MONTH 1200.0

double emi(double p,double i, double n)
{

double payment;
payment = (i*p)/(1- pow(1+i,-n));

return(payment);
}

int main(void)
{

double purchase_price, downpayment, annual_i, n, monthly_i,P;

printf("Enter the purchase price : ");
scanf("%lf",&purchase_price);
printf("Enter the down payment : ");
scanf("%lf",&downpayment);
printf("Enter the annual interest rate: ");
scanf("%lf",&annual_i);
printf("Enter the total number of payments:");
scanf("%lf",&n);
P = purchase_price-downpayment; /*MONEY BORROWED*/
monthly_i= annual_i/IR_PER_MONTH; /*Monthly Interest Rate*/
 printf("Amount borrowed: $%.2f \n" , P);
 printf("The monthly payement is $%.2f \n", emi(P,monthly_i,n));
 return(0);
}


