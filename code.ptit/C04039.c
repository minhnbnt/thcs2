#include <stdio.h>

int range(int step) {
	int result = 0;
	for (int i = 1; i <= step; i++)
		result += i;
	return result;
}

int main() {
	long int a, b;
	if (a > b) {
		long int temp = a;
		a = b;
		b = temp;
	}
	unsigned result;
	while (scanf("%ld %ld", &a, &b) != EOF) {
		result = 0;
		int step = 1;
		while (b - a > range(step)) {
			a += step++;
			result++;
		}
		if (b - a == range(step))
			result += step;
		else
			result += step - 1;
		printf("%d\n", result);
	}
}
