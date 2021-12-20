#include <stdio.h>
int main(){
	int num[] = {12,4,5,1,9,13,11,19,54,34};
	int i,t;
	for(i=0;i<=9;i=i+2){
		t = num[i];               //burda i+2 yaparak 1. index yerine 2 yi alıyoruz 
		num[i] = num[i+1];                  // burdaki eşitlemeyle indexleri +1 ileri atıyoruz
		num[i+1] = t;
	}
	for(i=0;i<=9;i++)
	printf("%d\t",num[i]);
	
	return 0;
}
