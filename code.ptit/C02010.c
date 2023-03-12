#include <stdio.h>

int main() {
	int a, b, i, j;
	scanf("%d %d", &a, &b);
	for (i = 1; i <= a; i++) {
		for(j = i; j <= b; j++)
			printf("%d", j);
		if (i > b){
			printf("%d", i);
			j = b;
		};
		else
			j = i;
		while (--j)
			printf("%d", j);
		printf("\n");
	};
	return 0;
}
