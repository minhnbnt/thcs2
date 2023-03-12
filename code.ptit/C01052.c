/*
Cho số nguyên dương N.

Nhiệm vụ của bạn là hãy xác định xem có bao nhiêu ước số của N chia hết cho 2?

Input:
Dòng đầu tiên là số lượng bộ test T (T ≤ 100).
Mỗi bộ test gồm một số nguyên N (1 ≤ N ≤ 109)

Output:
Với mỗi test, in ra đáp án tìm được trên một dòng.

Ví dụ:

Input:
2
9
8

Output:
0
3
*/

#include <stdio.h>

int main() {
	unsigned int n;
	scanf("%u", &n);
	int result[n];
	for (int i = 0; i < n; i++) {
		result[i] = 0;
		long int a;
		scanf("%ld", &a);
		for (int j = 2; j <= a; j += 2)
			if (a % j == 0)
				result[i]++;
	}
	for (int i = 0; i < n; i++)
		printf("%d\n", result[i]);
	return 0;
}
