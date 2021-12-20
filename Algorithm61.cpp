#include <stdio.h>
int main(){
	int i,note;
	
	printf("Please enter your note:");
	scanf("%d",&note);
	
	if(note>=80)
		printf("Your mark is 5");
	else if(80>note>=60)
		printf("Your mark is 4");
	else if(60>note>=40)
		printf("Your mark is 3");
	else if(40>note>=20)
		printf("Your mark is 2");
	else if(20>note)
		printf("Your mark is 1");
	
	return 0;
	
	
}
