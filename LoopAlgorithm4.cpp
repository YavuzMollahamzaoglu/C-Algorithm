#include <stdio.h>
int main(){
	int i=1,hour;
	float otpaid;
	while(i<=10)
	{
		printf("Please enter number of worked");
		scanf("%d",&hour);
		if(hour>=40)
		otpaid=(hour-40)*12;
		else
		otpaid=0;
		printf("Hours=%d overpaid = %f\n",hour,otpaid);
		i++;
	}
	
	return 0;
	
}
