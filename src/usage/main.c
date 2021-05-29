#include <stdio.h>
#include "bod.h"

int main() {
	introduce();
	long long num;
	printf("Enter a number: ");
	scanf("%lld", &num);
	printf("Factorial of %lld: %lld\n", num, factorial(num));
	return 0;
}