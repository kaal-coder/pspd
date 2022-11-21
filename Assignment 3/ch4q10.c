#include<stdio.h>


int main()
{
char breadtype;
int loafsize,bakingtype,pk,pr,sk,sr,ls,fr,b,c,tt=0,sec=0;
printf("Enter the type of bread(w for bread and s for sweet)>> ");
scanf("%c",&breadtype);
printf("Enter the loaf size(1 for double and 0 for single)>> ");
scanf("%d",&loafsize);
printf("Enter the baking type(1 for manual and 0 for automatic)>> ");
scanf("%d",&bakingtype);
pk=(breadtype=='w'||breadtype=='W')?15:20;
pr=60;
sk=(breadtype=='w'||breadtype=='W')?18:33;
sr=(breadtype=='w'||breadtype=='W')?20:30;
ls=2;
fr=75;
b=(breadtype=='w'||breadtype=='W')?45:35;
c=30;
if(loafsize==1)
{
b=(b*90)/60;
sec=(b*90)%60;
tt+=b;
}
tt=pk+pr+sk+sr;
printf("\nPrimary kneading : %d mins\nPrimary rising: %d mins\nSecondary kneading: %d mins\nSecondary rising: %d mins\nLoaf shaping: %d seconds\n",pk,pr,sk,sr,ls);
if(bakingtype==0)
printf("Final rising: %d mins \nBaking: %d mins\nCooling: %d mins\n",fr,b,c);
tt+=fr+b+c;
printf("Total time:%d mins and %d seconds\n",tt,(sec+ls));
return 0;
}
