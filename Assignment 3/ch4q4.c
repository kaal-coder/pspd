#include<stdio.h>
int main(){
	char input;
	printf("enter the first letter given the cylindrical colour =>");
	scanf("%c" , &input);printf("\n");
	switch(input){
		
		case 'O':
		case 'o':
			printf("it contain ammonia.\n\n");
			break;
		case 'C':
		case 'c':
			printf("it contain carbon monoxide.\n\n");
			break;
		case 'H':
		case 'h':
			printf("it contain hydrogen.\n\n");
			break;
		case 'X':
		case 'x':
			printf("it contain oxygen\n\n");
			break;
		default:printf("unknown.\n\n");
	}
	return 0;
}

