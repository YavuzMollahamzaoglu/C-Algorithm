#include <stdio.h>
#include <math.h>

int getValidTwoDigitNumber() {
    int num = 0, digit_count = 0;

    printf("Enter a two digit number: ");
    scanf("%d", &num);
    
    digit_count = (num == 0) ? 1  : (log10(num) + 1);

    if(digit_count != 2) {
        printf("Number is not two digits! Try again.\n");
        return getValidTwoDigitNumber();
    }
    
    return num;
}

int main() {
    int num = getValidTwoDigitNumber();
    int reverse = 0;
    
    while(num != 0) {
        reverse = (reverse * 10) + (num % 10);
        num /= 10;
    }
    
    printf("Reverse = %d", reverse);

    return 0;
}
