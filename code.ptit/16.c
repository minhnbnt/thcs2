#include <stdio.h>

int main() {
	int x[4][2];
	for (int i = 0; i < 4; i++)
		scanf("%d %d", &x[i][0], &x[i][1]);
	int max[2], min[2];
	for (int i = 0; i < 2; i++) {
		max[i] = min[i] = x[0][i];
		for (int j = 1; j < 4; j++) {
			if (x[j][i] > max[i])
				max[i] = x[j][i];
			if (x[j][i] < min[i])
				min[i] = x[j][i];
		};
	};
	int edge = max[0] - min[0];
	if (max[1] - min[1] > edge)
		edge = max[1] - min[1];
	printf("%d", edge * edge);
	return 0;
}
