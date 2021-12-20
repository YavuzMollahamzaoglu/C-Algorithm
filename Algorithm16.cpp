#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,stem1,stem2,delta;
	printf("Please enter a,b,c for stem:");
	scanf("%d,%d,%d",&a,&b,&c);
	delta=b^2-(4*a*c);
	stem1=(-b-sqrt(delta))/2;
	stem2=(-b+sqrt(delta))/2;
	
	printf("%d",stem1);
	printf("%d",stem2);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
