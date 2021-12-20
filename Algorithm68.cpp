#include <stdio.h>
int main(){
	int sum,num,i;
	printf("Please enter a number");
	scanf("%d",&num);
	while(num>=0){
		sum = sum + num;
		scanf("%d",&num);
	}
		printf("Sum of positive number are :%d",sum);
	return 0;
}
