#include <stdio.h>
void get_ten_num_sign(){
		int i,x,negative,positive,zero,positive_count,negative_count,zero_count;
		
		printf("You will enter 10 num.\n");

		
			
		for(i = 1;i <= 10;i++){
		printf("Please enter a value:\n");
		scanf("%d",&x);
			
		printf("Entered Value: %d",x);
		
		if(x>0)
			positive_count = positive++;
		else if(x<0)
			negative_count = negative++;
		else
			zero_count = zero++;
			
		printf("\n");
	
	}
	printf("Positive number is:%d\n",positive_count);
	printf("Negative number is:%d\n",negative_count);
	printf("Zero count is:%d\n",zero_count);
}


int main(){
	
	get_ten_num_sign();
	
	return 0;
}
