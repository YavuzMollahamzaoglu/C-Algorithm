#include <stdio.h>

void get_five_num(){
	int sum=0,i,ave,num;
	
	for(i=1;i<=5;i++){
		printf("Please enter a value;");
		scanf("%d",&num);
			sum +=num;
	}
	printf("Total value of 5 number is:%d",sum);
	ave = num/5;
	printf("Average of this 5 number is: %d",ave);
	
}

int main(){
	
	get_five_num();
	
	return 0;
}









