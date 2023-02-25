#include <math.h>
#include <stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a[3][2];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			scanf("%d", &a[i][j]);
	int area = 0, result = 0;
	for (int i = 0; i < 3; i++)
		area += a[i][0] * a[i][1];
	int edge = sqrt(area);
	if (edge * edge == area) {
		for (int i = 0; i < 3; i++)
			if (a[i][0] < a[i][1])
				swap(&a[i][0], &a[i][1]);
		for (int i = 0; i < 3; i++)
			for (int j = i + 1; j < 3; j++)
				if (a[i][0] < a[j][0]) {
					swap(&a[i][0], &a[j][0]);
					swap(&a[i][1], &a[j][1]);
				}
		if (a[0][0] == edge) {
			if (a[1][0] == edge && a[2][0] == edge) {
				if (a[1][1] + a[2][1] + a[0][1] == edge)
					result = 1;
			} else {
				int i = 0, j = 0;
				while (i < 2) {
					if (a[1][i] + a[2][j] == edge)
						break;
					j++;
					if (j == 2) {
						i++;
						j = 0;
					}
				}
				if (a[1][1 - i] + a[0][1] == edge && a[1][1 - i] == a[2][1 - j])
					result = 1;
			}
		}
	}
	if (result)
		printf("YES");
	else
		printf("NO");
	return 0;
}
