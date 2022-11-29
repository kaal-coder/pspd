#include<stdio.h>
int main(){
int hot_days=0,pleasant_days=0,cold_days=0,temp;
double average;
while(1){
printf("Enter the temperature=>(or -99 to quit)\n");
scanf("%d",&temp);
if(temp==-99)
break;
if (temp>=85){
hot_days++;
printf("%d is a hot day\n",temp);
}
else if(temp>=60&&temp<=84)
{
pleasant_days++;
printf("%d is a pleasant day\n",temp);
}
else{
cold_days++;
printf("%d is a cold day\n",temp);
}
average=average+temp;
}
printf("Number of Hot days->%d\n",hot_days);
printf("Number of pleasant days->%d\n",pleasant_days);
printf("Number of cold days->%d\n",cold_days);
average=average/(hot_days+cold_days+pleasant_days);
printf("Average:%.2f\n",average);
return 0;
}
