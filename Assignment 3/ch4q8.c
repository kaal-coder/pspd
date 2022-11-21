#include<stdio.h>
int main(void){
	double ng , or;
	int pn;
	printf("1 carbon monoxide \n 2 hydrocarbons \n 3 nitrogen oxides \n 4 nonmethane hydrocarbon\n");
	printf("\n enter pollutant number:2");
	scanf("%d",&pn);
	printf("\n enter number of grams of emitted per mile :");
	scanf("%lf",&ng);
	printf("\n enter odometer reading:");
	scanf("%lf",&or);
	if(or<=50000){
		switch(pn)
		{

			case 1:
				{
				if(ng>3.4)
				printf("emissions exceed permitted level of 3.4 grams/mile");
				else
				printf("emission doesnot exceedd permitted level");
			break;
				}
			case 2:
				{
				if(ng>0.31)
				printf("emission exceed permitted level of o0.31 grams/mile");
				else
				printf("emission doesnot exceed pemitted level");
				}
			case 3:
				{
				if(ng>0.4)
				printf("emissions exceed permitted level of 0.4 grams/mile");
				else
				printf("emission doesnot exceed pemitted level");
			break;
				}
			default:
		printf("invalid detail");
		}
	}
	return(0);
}	
