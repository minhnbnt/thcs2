#include <stdio.h>

int main() {
	long int a, b;
	scanf("%ld %ld", &a, &b);
	if (b) {
		printf("%ld\n", a + b);
		printf("%ld\n", a - b);
		printf("%ld\n", a * b);
		printf("%ld\n", a / b);
		printf("%ld\n", a % b);
		printf("%.2f", (double)a / b);
	} else
		printf("0");
	return 0;
}
