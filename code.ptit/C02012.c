/*
Nhập vào số hàng và số cột của hình chữ nhật (không quá 9). Vẽ hình chữ nhật số
theo nguyên tắc tương ứng theo mẫu trong các ví  dụ dưới đây.

Input:
Chỉ có một số dòng ghi số hàng và số cột của hình chữ nhật (không quá 9).

Output:
Ghi ra kết quả theo mẫu.

Ví dụ
Input
4 4

Output:
1234
2123
3212
4321
---
Input:
4 6

Output:
123456
212345
321234
432123
---
Input:
6 4

Output:
1234
2123
3212
4321
5432
6543
*/

#include <stdio.h>

int main() {
	int a, b, i;
	scanf("%d %d", &a, &b);
	for (i = 1; i <= a; i++) {
		int num = i, j = b;
		while (num && j--)
			printf("%d", num--);
		num = 1;
		while (j--)
			printf("%d", ++num);
		printf("\n");
	};
	return 0;
}
