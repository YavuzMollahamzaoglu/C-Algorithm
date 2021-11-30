#include<stdio.h>
#include<conio.h>

// 1: Male
// 2: Female
int get_gender() {
    int num = -1;
    
    while (num != 1 && num != 2) {
        printf("Select Gender 1: Male, 2: Female");
        scanf("%d", &num);
    }

    return num;
}

// 1: Graduate
// 2: Post-Graduate
int get_qualification() {
    int num = -1;
    
    while (num != 1 && num != 2) {
        printf("Select Qualification 1: Graduate, 2: Post-Graduate");
        scanf("%d", &num);
    }

    return num;
}

int get_years_of_service() {
    int num;
    
    printf("Select Years of Service");
    scanf("%d", &num);
    
    return num;
}

int main(void) {
    int gender = get_gender();
    int qualification = get_qualification();
    int years_of_service = get_years_of_service();
    int salary = 0;

    if(gender==1 && years_of_service>=10 && qualification==2)
    salary = 15000;

    else if((gender==1 && years_of_service>=10 && qualification==1) || (gender==1 && years_of_service<10 && qualification==2))
    salary = 10000;

    else if(gender==1 && years_of_service<10 && qualification==1)
    salary = 7000;

    else if(gender==2 && years_of_service>=10 && qualification==2)
    salary = 12000;

    else if(gender==2 && years_of_service>=10 && qualification==1)
    salary = 9000;

    else if(gender==2 && years_of_service<10 && qualification==2)
    salary = 10000;

    else if(gender==2 && years_of_service<10 && qualification==1)
    salary = 6000;

    printf("Salary=%d\n" , salary);
}
