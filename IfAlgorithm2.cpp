#include <stdio.h>
int main(){
	float cp,sp,p,i;
	printf("\nEnter cost price and selling price:\n");
	scanf("%f",&sp);
	scanf("%f",&cp);
	p=sp-cp;
	i=cp-sp;
	if(p>0)
	printf("The seller made a profit of %f\n",p);
	if(i>0)
	printf("The seller incurred loss of %f\n",i);
	if(p==0)
	printf("There is no loss, no profit");
	
	return 0;
	
}
