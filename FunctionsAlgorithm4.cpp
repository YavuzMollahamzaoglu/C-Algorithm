#include <stdio.h>

int cube(){
	int num,cube_num;
	
	printf("Please enter a number:");
	scanf("%d",&num);
	
	cube_num = num*num*num;
	return printf("%d",cube_num);
}

int main(){
	printf("This program shows you the cube of number.");
	cube();
	return 0;
}
