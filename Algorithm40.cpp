#include <stdio.h>

void get_ten_num_sum(){
		int i,x,sum;
	

		
			
		for(i = 1;i <= 10;i++){
		printf("Please enter a value:\n");
		scanf("%d",&x);
	
		printf("Entered Value: %d",x);
	
		printf("\n");
	
		sum += x;	
		printf("Addition of this numbers:%d",sum);
	
	}
	printf("Addition of this numbers:%d",sum);
}

void get_three_num_sum(){
	int i,x,sum;
	
	for(i = 1;i <= 3;i++){
		
		printf("Please enter a value:\n");
		scanf("%d",&x);
	
		printf("Entered Value: %d",x);
	
		printf("\n");
	
		sum += x;	
		
	}
	printf("Addition of this numbers:%d",sum);
}

int main(){
		
	return 0;
}
