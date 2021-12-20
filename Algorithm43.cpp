#include <stdio.h>

void prime_num(){
	int num,i,count;
	
	printf("Please enter a number:\n");
	scanf("%d",&num);
	
	for(i = 2; i <= num; i++){
		if (num % i == 0) {
      		count = 1;
      		break;
    	}
   	}
   	if (num == 1) 
    printf("1 is neither prime nor composite.");
    else if(count == 0)
    	printf("%d is a prime number.\n",num);
    else
    printf("%d is not a prime number.\n",num);
   	
}

void odd_or_even(){
	int num;
	
	printf("Please enter a number:\n");
	scanf("%d",&num);
	
	if(num % 2 == 0)
		printf("This number is even.\n");
	else
		printf("This number is odd.\n");
		
}

void factorial(){
	int fact = 1,i,num;
	
	printf("This program will show your number's factorial:\n");
	scanf("%d",&num);
	
	for(i = 1;i <= num;){
		fact *= i;
	}
	printf("%d",fact);
	
}


int main(){
	int selection;
	
	while(selection != 4){
	
	printf("For 1 you can take number's factorial.\nFor 2 you can see your number is prime or not.\nFor 3 you can learn your number odd or even.\nIf you press 4 program will stop.\n");
	printf("Please enter a selection.\n");
	scanf("%d",&selection);
	
	
	switch(selection){
		
		case 1:
			factorial();
			break;
		case 2:
			prime_num();
			break;
		case 3:
			odd_or_even();
			break;
		case 4:
			printf("See you.");
			break;
	}
}
	return 0;
	
}
