//3rd example of Sentinel-Controlled Loop//
#include <stdio.h>
    int main() {
    int number;
    int product = 1;

    printf("Enter numbers to multiply (0 to stop):\n");

    for (;;) { // infinite loop
        scanf("%d", &number);
        if (number == 0)  // 0 is the sentinel
            break;
        product *= number;
    }

    printf("Product = %d\n", product);
	return 0;
}