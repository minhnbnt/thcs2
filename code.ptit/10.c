#include <stdio.h>

int main() {
	float a, b;
	scanf("%f %f", &a, &b);
	if (a)
		printf("%.2f", -b / a);
	else if (b)
		printf("Vo nghiem");
	else
		printf("Vo so nghiem");
	return 0;
}
