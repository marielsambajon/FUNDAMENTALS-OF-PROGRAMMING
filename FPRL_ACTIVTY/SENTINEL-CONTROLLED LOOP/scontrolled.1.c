//1st example of Sentinel-Controlled Loop//
#include <stdio.h>
    int main() {
    int reverseNumber=0;
    int number=12345;
 
    while(number>0)
{
    reverseNumber= (reverseNumber*10)+ number%10;
    number/=10;
}
    printf("Reverse Number is: %d\n", reverseNumber);

	return 0;
}