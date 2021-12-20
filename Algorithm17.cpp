#include <stdio.h>
int main(){
	int buy,sell,tax,gain;
	printf("Please enter buy cost.");
	scanf("%d",&buy);
	tax=buy*0.18;
	gain=buy*0.20;
	sell=buy+tax+gain;
	printf("%d",sell);
	
	
	
	
	
	return 0;
}
