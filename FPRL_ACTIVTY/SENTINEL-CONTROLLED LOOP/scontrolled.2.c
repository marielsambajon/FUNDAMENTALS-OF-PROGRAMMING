//2nd example of Sentinel-Controlled Loop//
#include <stdio.h>
    int main() {
    int number;
    int count = 0;

    printf("Enter positive numbers (-1 to quit):\n");

    do {
        scanf("%d", &number);
        if (number != -1)
            count++;
    } while (number != -1);

    printf("You entered %d numbers.\n", count);
	return 0;
}