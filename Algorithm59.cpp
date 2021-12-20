#include <stdio.h>
int main(){
	int floor,height,area;
	printf("Please enter your rhomboid's floor and height:");
	scanf("%d %d",&floor,&height);
	
	area = floor*height;
	
	printf("Area of rhomboid is:%d",area);
	
	return 0;
}
