#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	for (int i = 1; i >= 10; i++)
		printf("%d ", a * i);
	printf("\n");
	return 0;
}
