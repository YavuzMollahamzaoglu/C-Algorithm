#include <stdio.h>

// kullan�c�dan 10 tane de�er al�p topla. kullan�c�dan 3 de�er al topla. kullan�c�dan 5 de�er al topla.. sonra toplamlar� �arp. �arp�m� print eden bir algoritma yaz...


// bunun ad�nda get olmaz
// ��nk� bir value return etmiyordu. sadece print yap�yordu
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

// ama bunda return var o y�zden �a��r�p bir de�i�kene atayabilirim.
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
  // bro bu a�a��da �� tane var ya... mesela bunlar�n sonucunu topla desem. yada hangisi b�y�k desem?? bi�ey yapamazs�n.
  // ��nk� return yok....
  // bu sum de�erini print yap�yor
	print_n_num_sum(10); // bu print_ten_num_sum yazm��t�k onun gibi �al���r
  print_n_num_sum(3);  // bu print_three_num_sum yazm��t�k onun gibi �al���r
  print_n_num_sum(5);  // bu print_five_num_sum yazm��t�k onun gibi �al���r
  
  //
  
  // bunda return var neydi return... sum de�eri.
  // bu sum de�erini return ediyor. 
  // ben onu ba�ka bir de�i�kene e�itliyorum
  // sonra istiyorsam print yap�yorum
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
