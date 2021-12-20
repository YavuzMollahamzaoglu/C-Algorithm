#include <stdio.h>
int main(){
	int score;
	
	printf("Please enter your score");
	scanf("%d",&score);
	
	if(score>=85)
		printf("Very good!");
	else if(score>=65 && score<=84)
		printf("Good");
	else if(score>=50 && score<=64)
		printf("Middle");
	else
		printf("You fail!");
	return 0;
}
