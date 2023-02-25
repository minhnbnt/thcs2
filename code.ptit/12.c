#include <math.h>
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < n; i++)
		if ((int)sqrt(arr[i]) == sqrt(arr[i]))
			printf("YES\n");
		else
			printf("NO\n");
	return 0;
}
