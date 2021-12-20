#include <stdio.h>

float cube(float num){
	float result = num*num*num;
	return result;
}

int main(){
	printf("Answer: %f", cube(7.0));
	return 0;
}
