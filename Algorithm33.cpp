#include <stdio.h>
int main(){
	int hour,salary_perhour,double_hour,total_salary1,total_salary2;
	
	
	printf("Please enter your work time:");
	scanf("%d",&hour);
	
	salary_perhour = 15;
	
	if(hour>=40){
		double_hour = hour*2;
		total_salary1 = double_hour*salary_perhour;
		printf("Your salary is:%d",total_salary1);
	
	}
	else(hour<40){
		total_salary2 = hour*salary_perhour;
		printf("Your salary is:%d",total_salary2);
	}
		
	
	
	return 0;
}
