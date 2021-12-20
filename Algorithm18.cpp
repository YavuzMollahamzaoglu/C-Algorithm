#include <stdio.h>
int main(){
	int ave,visa,final,score1,score2;
	printf("Please enter your visa and final score:");
	scanf("%d,%d",&visa,&final);
	score1=visa*0.3;
	score2=final*0.7;
	ave=(score1+score2)/2;
	printf("%d",ave);
	
	
	
	
	return 0;
}
