#include <stdio.h>
int main(){
	
	int num;
	int hundreds,tenth,units;
	int temp;
	for(num=100;num<1000;num++)
	{
		temp=num;
		hundreds=temp/100;
		temp=temp-hundreds*100;
		tenth=temp/10;
		temp=temp-tenth*10;
		units=temp;
		if(hundreds*hundreds*hundreds+tenth*tenth*tenth+units*units*units==num)
		{
			printf("%d\n",num);
				}		
		
	}
	
	
	
	
	return 0;
}
