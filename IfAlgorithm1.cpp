#include <stdio.h>

int main()
{
	
	int qty,dis;
	float rate,	tot;
	
	printf("Please enter a quantitiy and rate:");
	scanf("%d,%f",&qty,&rate);
	
	if(qty>1000)
	dis=10;
	else
	dis=0;
	
	tot=(qty*rate) - (qty*tot*dis/100);
	printf("Total expenses:%f",tot);
	return 0;
	
}
