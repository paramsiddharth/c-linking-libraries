#include <stdio.h>

// Introduction
void introduce() {
	printf("कुछ भी कर सकते हैं हम ।\n");
}

// Factorials of whole numbers
long long factorial(long long x) {
	if (x < 0) {
		fprintf(stderr, "No factorials for negative integers here!\n");
		return 0;
	}
	if (x < 2)
		return 1;
	return x * factorial(x - 1);
}