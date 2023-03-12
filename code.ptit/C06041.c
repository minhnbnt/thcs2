#include <stdio.h>

int main() {
	char str[100000];
	scanf("%[^\n]", str);
	int len = strlen(str), i, j, chars = 0;
	char allchar[len];
	for (i = 0; i < len; i++) {
		j = -1;
		while (j < chars)
			if (str[i] == allchar[++j])
				break;
		if (j == chars) {
			allchar[chars++] = str[i];
		};
	};
	for (i = 0; i < chars; i++)
		for (j = i + 1; j < chars; j++)
			if (allchar[i] < allchar[j]) {
				char temp = allchar[i];
				allchar[i] = allchar[j];
				allchar[j] = temp;
			};
	int index = 0;
	for (i = 0; i < chars; i++)
		for (j = index; j < len; j++)
			if (allchar[i] == str[j]) {
				printf("%c", str[j]);
				index = j;
			};
	printf("\n");
	return 0;
}
