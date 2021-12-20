#include <stdio.h>
void printf_report(int report_number){
	if( report_number == 1)
		printf("Printing Report 1");
	else
		printf("Not printing Report 1");
	return;
}

double squared(double number){
	return(number * number);
}

int main(){
	
	printf_report(1);
	
}
