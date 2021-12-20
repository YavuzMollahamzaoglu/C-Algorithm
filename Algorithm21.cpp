#include <stdio.h>
int main(){
	
	float  voltage,flow,resistance;
	printf("Please enter value of flow and resistance:");
	scanf("%f,%f",&flow,&resistance);
	voltage=flow*resistance;
	printf("Your voltage is %f",voltage);
	
}
