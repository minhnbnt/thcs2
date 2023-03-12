#include <stdio.h>

void swap(unsigned *a, unsigned *b) {
	unsigned t = *a;
	*a = *b;
	*b = t;
}

int main() {
	unsigned n, i, j;
	scanf("%u", &n);
	unsigned u[n], d[n];
	unsigned long result = 0;
	for (i = 0; i < n; i++)
		scanf("%u %u", &u[i], &d[i]);
	for (i = 0; i < n; i++)
		for (j = 0; j < n - 1; j++) {
		}
}
