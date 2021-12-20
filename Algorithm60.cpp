#include <stdio.h>

void get_ten_num_sum_from_user(){
	int i,num,sum;
	
	printf("Now you have to enter 10 number for average:");
	for(i=1;i<=10;i++){
	
		printf("Please enter a value:");
		scanf("%d",&num);
		sum += num;
	}
	printf("Total of this 10 number is:%d",sum);
}

int biggest_weest_average(){
	
}


int main(){
	get_ten_num_sum_from_user();
	return 0;
}
