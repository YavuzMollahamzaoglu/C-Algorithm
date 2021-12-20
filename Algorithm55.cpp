#include <stdio.h>
int main(){
	int num1,num2,num3,ave;
	
	printf("Please enter three number. This program shows you to average of this 3 number.\n");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	ave = (num1+num2+num3)/3;
	printf("Average of this 3 number is: %d");
	
	return 0;
}
