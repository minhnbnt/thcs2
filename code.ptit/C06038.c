#include <stdio.h>
#include <stdlib.h>

int check(char *x) {
	long long int a = atoll(x), temp;
	int len = strlen(x), i, j;
	for (i = 2; i <= len; i++) {
		temp = a * i;
		char str[20];
		sprintf(str, "%lld", temp);
		for (j = 0; j < len; j++) {
			char *pos = strchr(str, x[j]);
			if (pos == NULL)
				return 0;
			else
				*pos = ' ';
		}
	}
	return 1;
}

int main() {
	unsigned int n, i;
	scanf("%d%*c", &n);
	char str[20], result[n];
	for (i = 0; i < n; i++) {
		scanf("%s", str);
		result[i] = check(str);
	};
	for (i = 0; i < n; i++)
		printf("%s\n", result[i] ? "YES" : "NO");
	return 0;
}
