#include<stdio.h>
#define RATE 2

int main(void)
{
int time,length_of_yard,width_of_yard,length_of_house,
width_of_house,area,hours,mins,seconds;
printf("\n\nEnter length and width of yard(in feets)=> ");
scanf("%d%d",&length_of_yard,&width_of_yard);
printf("Enter length and width of house(in feets)=> ");
scanf("%d%d",&length_of_house,&width_of_house);
area=length_of_yard*width_of_yard-length_of_house*width_of_house;
time=area/RATE;
hours=time/3600;
mins=(time%3600)/60;
seconds=time%60;
printf("Time required to cut %d sq. ft of grass is %d hours,%d minutes and %d seconds.\n\n",area,hours,mins,seconds);
}
