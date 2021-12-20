#include <stdio.h>
int main(){
	int visa,final,ave,enough;
	
	while(enough!=1){
		
		printf("Please enter your visa and final score:");
		scanf("%d %d",&visa,&final);
		
		ave=visa*0.3+final*0.7;
		
		if(ave>=50&&final>=50)
		printf("You pass the class.");
		else
		printf("You failed the class.");
		
		printf("Please enter one to exit.");
		scanf("%d",&enough);
	}
	
	
	return 0;
}
