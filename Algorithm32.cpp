#include <stdio.h>
int main(){
	int salary,one_kid,two_kid,three_kid,kid;
	
	printf("Please enter have much you kid have:");
	scanf("%d",&kid);
	
	
	salary = 4000;
	one_kid = (4000*0.05) + 4000;
	two_kid = (4000*0.1) + 4000;
	three_kid = (4000*0.15) + 4000;
	
	if(kid==0){
		printf("Your salary is: %d",salary);
		
	}
	else if(kid==1){
		printf("Your salary is: %d",one_kid);
	}
	else if(kid==2){
		printf("Your salary is: %d",two_kid);
	}
	else
		printf("Your salary is: %d",three_kid);
}

