#include<stdio.h>


double acceleration(double v,double u, double t)
{
 return((v-u)/t);
}
double time_taken(double a, double u){
return((0-u)/a);
}
int main(void)
{
double v_final, v_initial,t=1/60.0,time,a;
printf("Initial velocity: ");
scanf("%lf",&v_initial);
printf("Final velocity: ");
scanf("%lf",&v_final);
a=acceleration(v_final,v_initial,t);
time=time_taken(a,v_initial)*60.0;
printf("Rate of acceleration:%.2f\nTime: %.2f",a,time);



}
