#include <stdio.h>
int main(){
	int i,num,square_sum,square;
	num=25;
	for(i=1;i<=num;i++){
		square = i*i;
		square_sum += square;
	}
	printf("Sum of square between 1-25 is:%d",square_sum);
	return 0;
}
