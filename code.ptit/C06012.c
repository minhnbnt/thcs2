#include <stdio.h>

char beautyof(char *x) {
	char *num = "2357";
	int len = strlen(x);
	for (int i = 0; i < len / 2 + 1; i++)
		if (strchr(num, x[i]) == NULL || x[i] - x[len - i - 1])
			return 0;
	return 1;
}

int main() {
	unsigned int n;
	scanf("%d%*c", &n);
	char num[500], result[n];
	for (int i = 0; i < n; i++) {
		scanf("%[^\n]", num);
		result[i] = beautyof(num);
	};
	for (int i = 0; i < n; i++)
		printf("%s\n", result[i] ? "YES" : "NO");
	return 0;
}
