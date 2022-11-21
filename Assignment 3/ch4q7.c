#include<stdio.h>
int calculate(int d, int m, int y);

void main() {
	int d,m,y;
	scanf("%d%d%d",&d, &m, &y);
	printf("%d\n", calculate(d, m, y));
}


int calculate(int d, int m, int y) {
	int days = 0;
        int leap = 0;
	if(y%4==0 || y%100==0 && y%400==0) {
		leap = 1;
	}
	if(m==1) days = 0;
	if(m>1) days = 31;
	if(m>2) {
		if(leap) days = 31+29;
		else days = 31+28;
	}
	if(m>3) days = days+31;
	if(m>4) days = days+30;
	if(m>5) days = days+31;
	if(m>6) days = days+30;
	if(m>7) days = days+31;
	if(m>8) days = days+31;
	if(m>9) days = days+30;
	if(m>10) days = days+31;
	if(m>11) days = days+30;
	if(m>12) return 0;
	return days+d;
}
