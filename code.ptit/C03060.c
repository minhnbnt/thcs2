/*
Cho hai số nguyên dương n và k. Hãy kiểm tra xem giai thừa của n (n!) có chia
hết cho 2^k hay không.

Input

Có một dòng ghi 2 số n và k (1 ≤ n, k ≤ 100).

Output

Nếu n! chia hết cho 2^k thì in ra “Yes”, ngược lại in ra “No”.

Ví dụ:
Input:      Output:
5 3         Yes
1 1         No
*/

#include <stdio.h>

int main() {
	int n, k, i;
	scanf("%d %d", &n, &k);
	long int a = 1, b = 1;
	for (i = 1; i <= n; i++)
		a *= i;
	for (i = 0; i < k; i++)
		b *= 2;
	if (a % b)
		printf("NO");
	else
		printf("YES");
	return 0;
}
