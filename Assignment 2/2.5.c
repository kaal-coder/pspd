#include<stdio.h>
#include<math.h>
double scale(double x, int n){

double scale_factor;
scale_factor=pow(10,n);
return(x*scale_factor);

}

double round_num(double x) 
{
int rounded_x;
rounded_x =(int)(x+0.5);
return(rounded_x);
}

int main(void) {
 int n;
 double num;
double a;
 
printf("Enter the number: ");
scanf("%lf",&num);
printf("Enter the number of places number is rounded to :  ");
scanf("%d",&n);
scale(num,n);
a=round_num(scale(num,n));
printf("The rounded number is %f \n" ,scale(a,-n));
}
