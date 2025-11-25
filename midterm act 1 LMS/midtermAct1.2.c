#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter 10 integers:\n");
    for (int i = 1; i <= 10; i++) {
        scanf("%d", &num);
        sum += num; 
    }

    printf("Sum (Using Loop): %d\n", sum);

    return 0;
}
