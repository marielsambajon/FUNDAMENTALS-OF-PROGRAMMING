//4th example of Sentinel-Controlled Loop//
#include <stdio.h>
    int main() {
    char ch;

    printf("Enter characters (enter '#' to stop):\n");

    scanf(" %c", &ch);  // Space before %c to skip whitespace

    while (ch != '#') {
        printf("You entered: %c\n", ch);
        scanf(" %c", &ch);
    }

    printf("Sentinel '#' detected. Loop terminated.\n");
	return 0;
}