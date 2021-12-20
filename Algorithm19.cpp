#include <stdio.h>
int three_digit(){
	int x,y,z,count=0;
	
	count=0;
	for(int i=100;i<=999;i++){
	
	x=i/100;
	y=(i/10)%10;
	z=i%10;
	 if(x!=y&&x!=z&&y!=z){
	 	count++;
	 }
	
	
	
}

	
	
	return count;
}
	
	
int two_digit(){

	int b,a,count2,j;
	j=10;
	count2=0;
	for(j=10;j<=99;j++){
	
	
	a=(j/10)%10;
	b=j%10;
		if(a!=b){
			count2++;
		}
	
	
}
	return count2;
}
	int main(){
		
	int result_for_two_digits = two_digit();
	
	printf("%d\n",result_for_two_digits);
	
	
	int result_for_three_digits = three_digit();
	
	printf("%d\n",result_for_three_digits);
		
		
	int subtract=two_digit()-three_digit();
	
	printf("%d",subtract);
		
		return 0;
	}
