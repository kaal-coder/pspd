#include<stdio.h>
#define SALES_TAX 5/100.0
#define TEACHER_DISCOUNT_ABOVE_100 12/100.0
#define TEACHER_DISCOUNT_BELOW_100 10/100.0

int main()
{
double total_purchase,teacher_discount,discounted_total,total,sales_tax;
int d,b;
printf("\nEnter the total purchase amount=> ");
scanf("%lf",&total_purchase);
printf("Whether purchaser is a teacher or not?(1/0)=> ");
scanf("%d",&b);
if(total_purchase>=100&&b)
{
d=12;
teacher_discount=TEACHER_DISCOUNT_ABOVE_100*total_purchase;
discounted_total=total_purchase-teacher_discount;
}
else if(total_purchase<100&&b)
{
d=10;
teacher_discount=TEACHER_DISCOUNT_BELOW_100*total_purchase;
discounted_total=total_purchase-teacher_discount;
}
else
{
discounted_total=total_purchase;
}
sales_tax=SALES_TAX*discounted_total;
total=discounted_total+sales_tax;
if(b)
{
printf("\nTotal purchases\t$%.2f\nTeacher's discount(%d%%)\t%.2f\nDiscounted total\t%.2f\nSales tax(5%%)\t%.2f\nTotal\t$%.2f\n",total_purchase,d,teacher_discount,discounted_total,sales_tax,total);
}
else
{
printf("\nTotal purchases\t$%.2f\nSales tax(5%%)\t%.2f\nTotal\t$%.2f\n",total_purchase,sales_tax,total);
}
return 0;
}
