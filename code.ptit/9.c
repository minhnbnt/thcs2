#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	printf("%d ", n / 365);
	printf("%d ", (n % 365) / 7);
	printf("%d", (n % 365) % 7);
	return 0;
}
