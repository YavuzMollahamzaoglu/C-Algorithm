#include <stdio.h>

// kullanýcýdan 10 tane deðer alýp topla. kullanýcýdan 3 deðer al topla. kullanýcýdan 5 deðer al topla.. sonra toplamlarý çarp. çarpýmý print eden bir algoritma yaz...


// bunun adýnda get olmaz
// çünkü bir value return etmiyordu. sadece print yapýyordu
void print_n_num_sum(int n){
	int i,x,sum;
  
  for(i = 1;i <= n;i++){
    printf("Please enter a value:\n");
    scanf("%d", &x);
    
    printf("Entered Value: %d", x);
    printf("\n");
    
    sum += x;		
	}
  
	printf("Addition of this numbers: %d", sum);
}

// ama bunda return var o yüzden çaðýrýp bir deðiþkene atayabilirim.
int get_n_num_sum(int n){
	int i, x, sum;
  
  for(i = 1;i <= n;i++){
    printf("Please enter a value:\n");
    scanf("%d",&x);
    
    printf("Entered Value: %d", x);
    printf("\n");
    
    sum += x;		
	}
  
  return sum;
}

int main(){
  // 
  // bro bu aþaðýda üç tane var ya... mesela bunlarýn sonucunu topla desem. yada hangisi büyük desem?? biþey yapamazsýn.
  // çünkü return yok....
  // bu sum deðerini print yapýyor
	print_n_num_sum(10); // bu print_ten_num_sum yazmýþtýk onun gibi çalýþýr
  print_n_num_sum(3);  // bu print_three_num_sum yazmýþtýk onun gibi çalýþýr
  print_n_num_sum(5);  // bu print_five_num_sum yazmýþtýk onun gibi çalýþýr
  
  //
  
  // bunda return var neydi return... sum deðeri.
  // bu sum deðerini return ediyor. 
  // ben onu baþka bir deðiþkene eþitliyorum
  // sonra istiyorsam print yapýyorum
  int result_for_ten_num_sum = get_n_num_sum(10);
  // burdaki printi silsem sonucu bulur ama print yapmaz
	printf("result_for_ten_num_sum: %d", result_for_ten_num_sum);
  
  int result_for_three_num_sum = get_n_num_sum(3);
	printf("result_for_three_num_sum: %d", result_for_three_num_sum);
  
  int result_for_five_num_sum = get_n_num_sum(5);
	printf("result_for_five_num_sum: %d", result_for_five_num_sum);
  
  int sum_of_all = result_for_ten_num_sum * result_for_three_num_sum * result_for_five_num_sum;
 	printf("sum_of_all: %d", sum_of_all);

	return 0;
}
