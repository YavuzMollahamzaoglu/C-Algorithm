#include <stdio.h>
int main(){
	int ave,note1,note2,score1;
	printf("Please enter your first and second exam score after that add quiz score:");
	scanf("%d,%d,%d",&note1,&note2,&score1);
	ave=(note1+note2+score1)/3;
	printf("Your average score is %d",ave);
	if(ave>=70)
	printf("Congratulations you pass the exam!");
	else
	printf("You fail!");
	
	
	
	
	
	return 0;
}
