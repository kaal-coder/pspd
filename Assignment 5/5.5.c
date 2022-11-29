#include <stdio.h>

void evaluate(int n, int *m , int *o, int *p)  {
	if(n % 7 == 0 || n % 11 == 0 || n % 13 == 0) {
		*m = 1;
	} else {
		*m = 0;
	}
	
	int sum = 0;
	int c = n;
	while(c > 0) {
		sum += (c%10);
		c /= 10;
	}
	
	if(sum % 2 == 0) *o = 0;
	else *o = 1;
	
	*p = 1;
	for(int i = 2; i * i < n; i++ ) {
		if ( n % i == 0) {
			*p = -1;
			break;
		}
	}
}

int main() {
	int n;
	int multiple, odd, prime;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	evaluate(n, &multiple, &odd, &prime);
	
	printf("The number is ");
	if (multiple == 0) {
		printf("not ");
	}
	printf("a multiple of 7, 11 or 13.\n");
	
	printf("The sum of digits is ");
	if (odd == 1) {
		printf("odd.\n");
	} else {
		printf("even. \n");
	}
	
	printf("The number is ");
	if(prime == 1) 
		printf("a ");
	else
		printf("not a ");
	printf("prime number\n");		
}
