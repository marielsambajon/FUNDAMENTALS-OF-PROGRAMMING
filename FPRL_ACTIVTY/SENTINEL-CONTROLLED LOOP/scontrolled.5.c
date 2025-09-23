//5th example of Sentinel-Controlled Loop//
#include <stdio.h>
    int main() {
    char word[100];

    printf("Enter words (type 'exit' to quit):\n");

    scanf("%s", word);

    while (strcmp(word, "exit") != 0) {
        printf("You typed: %s\n", word);
        scanf("%s", word);
    }

    printf("Sentinel 'exit' detected. Program ending.\n");
	return 0;
}