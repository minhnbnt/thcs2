/*
Cho hai số tự nhiên n, m . Nhiệm vụ của bạn là tìm số nguyên nhỏ nhất chia hết
cho n , n+1, .., m.

Input:
Dòng đầu tiên đưa vào T là số lượng bộ test.
T dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là 2 số tự nhiên n,
m. T thỏa mãn ràng buộc: 1≤T≤10^4; 1≤n, m≤40

Output:
Đưa ra kết quả mỗi test theo từng dòng.


Input:
2
1 3
3 5

Output:
6
60
*/

#include <stdio.h>

int lcm(int a, int b) {
	int c = a * b;
	while (a != b)
		if (a > b)
			a -= b;
		else
			b -= a;
	return c / a;
}

int main() {
	unsigned int n;
	scanf("%u", &n);
	int result[n], a, b;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		int c = lcm(a, a + 1);
		for (int j = a + 2; j <= b; j++)
			c = lcm(c, j);
		result[i] = c;
	};
	for (int i = 0; i < n; i++)
		printf("%d\n", result[i]);
	return 0;
}
