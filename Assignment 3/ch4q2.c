#include<stdio.h>

int main()
{
double weight,height,bmi;
printf("\nEnter the person's weight in pounds=>");
scanf("%lf",&weight);
printf("Enter the person's height in inches=>");
scanf("%lf",&height);
bmi=weight*703/(height*height);
printf("\nPerson's BMI is %.1f and Person is ",bmi);
if(bmi<18.5)
printf("Underweight.\n");
else if(bmi<25)
printf("Normal.\n");
else if(bmi<30)
printf("Overweight.\n");
else
printf("Obese.\n");
return 0;
}
