#include <stdio.h>

void get_n_num_sum(int n){
	int i,x,sum;
  
  for(i = 1;i <= n;i++){
    printf("Please enter a value:\n");
    scanf("%d",&x);
    
    printf("Entered Value: %d",x);
    printf("\n");
    
    sum += x;		
	}
  
	printf("Addition of this numbers:%d",sum);
}

int main(){
	get_n_num_sum(10); // bu get_ten_num_sum yazmýþtýk onun gibi çalýþýr
  get_n_num_sum(3);  // bu get_three_num_sum yazmýþtýk onun gibi çalýþýr
  get_n_num_sum(5);  // bu get_five_num_sum yazmýþtýk onun gibi çalýþýr
  
	return 0;
}

