//2nd example of Counter-Controlled Loop//
#include <stdio.h>
int main() {
    int sum = 0;
    int n = 1;

    while (n <= 10){
    sum = sum + n*n;
    n = n + 1;
    }
    
	return 0;
}