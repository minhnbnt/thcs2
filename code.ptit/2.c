#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	long long int arr[n];
	for (int i = 0; i < n; i++)
		scanf("%lld", &arr[i]);
	for (int i = 0; i < n; i++)
		printf("%lld\n", arr[i] * 2);
	return 0;
}
