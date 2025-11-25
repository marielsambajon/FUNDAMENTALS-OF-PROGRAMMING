#include <stdio.h>

int main() {
    char name[50];        
    float salary, bonus;  

    printf("Enter employee name: ");
    scanf("%s", name);  

    printf("Enter monthly salary: ");
    scanf("%f", &salary);

    if (salary <= 10000) {
        bonus = salary * 0.80;  
    } else {
        bonus = 10000;
    }

    printf("\nEmployee Name: %s\n", name);
    printf("Year-End Bonus: %.2f pesos\n", bonus);

    return 0;
}
