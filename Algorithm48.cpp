#include <stdio.h>

int kid(){
	int kid_num,salary,salary1,salary2,salary3;
	
	printf("Pleas enter how much kids do you have:\n");
	scanf("%d",&kid_num);
	
	salary = 4000;
	
	if(kid_num == 1){	
		salary1 = salary * 0.05;
		salary = salary2;
		printf("Your extra salary is %d\n",salary1);
		
	}
	else if(kid_num == 2){	
		salary2 = salary * 0.1;
		salary = salary2;
		printf("Your extra salary is %d\n",salary2);
	}
	else{
		salary3 = salary * 0.15;
		salary = salary3;
		printf("Your extra salary is %d\n",salary3);
	}
	
	return salary;
}



int piece(){
	int pie,salary,salary1,salary2,salary3;
	
	printf("Please enter how much piece you produce:\n");
	scanf("%d",&pie);
	
	if(100>pie>50){
		salary1 = salary * 0.1;
		salary = salary1;
		printf("Your extra salary is :%d\n",salary);
	}
	else if(150>pie>100){
		salary2 = salary * 0.15;
		salary = salary2;
		printf("Your extra salary is :%d\n",salary);
	}
	else if(200>pie>150){
		salary3 = salary * 0.2;
		salary = salary3;
		printf("Your extra salary is :%d\n",salary);
	}
	return salary;
}

int main(){
	int total_salary,salary;
	
	salary = 4000;
	total_salary = kid() + piece() + salary;
	
	printf("%d\n",total_salary);
	
	return 0;
}
