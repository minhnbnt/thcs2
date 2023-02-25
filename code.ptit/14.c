#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int x[n][2], y[n][2];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 2; j++)
			scanf("%d %d", &x[i][j], &y[i][j]);
	for (int i = 0; i < n; i++)
		if (x[i][0] - x[i][1] == y[i][0] - y[i][1])
			printf("YES\n");
		else
			printf("NO\n");
	return 0;
}
