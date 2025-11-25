#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, h, i, j;
    int sum;

    printf("Enter 10 integers:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &f);
    scanf("%d", &g);
    scanf("%d", &h);
    scanf("%d", &i);
    scanf("%d", &j);

    sum = a + b + c + d + e + f + g + h + i + j;

    printf("Sum (Brute Force): %d\n", sum);

    return 0;
}
