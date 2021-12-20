#include <stdio.h>
int main(){
	int sum,ave,i,class_num;
	
	printf("Please  enter how many student your class have :");
	scanf("%d",&class_num);
	
	int marks[class_num];
	
	for(i=1;i<=class_num;i++){
		printf("Please enter marks of class:");
		scanf("%d",&marks[i]);
	}
	for(i=1;i<=class_num;i++)
	sum += marks[i];
	ave = sum / class_num;
	
	printf("Average marks = %d\n",ave);
	
	return 0;
	
}
	

