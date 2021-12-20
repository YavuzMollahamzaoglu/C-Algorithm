#include <stdio.h>
int main(){
	char operator;
	double x,y;
	
	printf("Enter 2 number for operator:");
	scanf("%lf %lf",&x,&y);
	
	printf("Please enter a operator for 1 addition for 2 subtraction:");
	scanf("%c",&operator);

	switch(operator){
		case '1' :
			printf("%lf + %lf",&x,&y);
		case '2' :
			printf("%lf - %lf",&x,&y);
	}
	return 0;
}
