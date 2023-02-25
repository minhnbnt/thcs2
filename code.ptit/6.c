#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (b) {
		printf("%d ", a + b);
		printf("%d ", a - b);
		printf("%d ", a * b);
		printf("%.2f ", (float)a / b);
		printf("%d ", a % b);
	} else
		printf("0");
	return 0;
}
