#include <stdio.h>
int main(){
	int num, even_multiple, odd_multiple, odd_sum,i;
	
	printf("Please enter a number:");
	scanf("%d",&num);
	
	printf("\n");
	
	for(i=1; i<=num; i++) {
    	if(i%2 == 0) {
    		even_multiple += i*i;		
		} else {
			odd_sum += i;
    		odd_multiple *= i;
		}
        
	}
	printf("Multiple of even numbers is:%d",even_multiple);
    printf("Sum of odd numbers = %d", odd_sum);
	printf("Multiple of odd numbers = %d", odd_multiple);
	
	return 0;
}
