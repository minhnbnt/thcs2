/*
Cho số nguyên dương n. Hãy kiểm tra xem n có phải là số trong dãy Fibonacci hay
không?

Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số nguyên dương n.
T, n thỏa mãn ràng buộc :1 ≤ T ≤ 100; 1≤n≤1018.

Output:
Đưa ra “YES” hoặc “NO” tương ứng với n là số Fibonacci hoặc không phải số
Fibonacci của mỗi test theo từng dòng.

Ví dụ:
Input:
2
8
15

Output:
YES
NO
*/

#include <stdio.h>

int main() {
	unsigned n, i;
	scanf("%u", &n);
	char result[n];
	long long num;
	for (i = 0; i < n; i++) {
		long long a = 0, b = 1;
		scanf("%lld", &num);
		while (a + b < num) {
			long long temp = a + b;
			a = b;
			b = temp;
		};
		result[i] = a + b == num;
	};
	for (i = 0; i < n; i++)
		printf("%s\n", result[i] ? "YES" : "NO");
	return 0;
}
