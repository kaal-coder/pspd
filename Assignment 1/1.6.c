#include<stdio.h>
int main()
{
char desired_grade;
double min_average_required,curr_average,weight_of_final,score_needed;
printf("Enter the desired grade>");
scanf("%c",&desired_grade);
printf("Enter the minimum average required>");
scanf("%lf",&min_average_required);
printf("Enter your curent average>");
scanf("%lf",&curr_average);
printf("Enter how much the final exam count as a percentage>");
scanf("%lf",&weight_of_final);
score_needed=(min_average_required-((100-weight_of_final)/100)*curr_average)*100/weight_of_final;
printf("You need a score of %.2f on the final to get a %c\n",score_needed,desired_grade);
return (0);
}
