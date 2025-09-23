//4th example of While Loop//
#include <stdio.h>
int main() {
 int num;
 
    while (num <= 0) {
        printf("Enter a positive number: ");
        scanf("%d", &num);
    }
    printf("You entered: %d\n", num);
    
	return 0;
}