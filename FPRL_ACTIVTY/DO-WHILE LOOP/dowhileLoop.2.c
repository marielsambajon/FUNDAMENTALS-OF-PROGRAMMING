//2nd example of Do-While Loop//
#include <stdio.h>
int main() {
	int i = 1, sum = 0;
	
    do {
        sum += i;
        i++;
    } while (i <= 10);
    printf("Sum: %d\n", sum);

	return 0;
}