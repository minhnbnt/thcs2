/*
Nhập vào số hàng và số cột của hình chữ nhật (không quá 20). Vẽ hình chữ nhật ký
tự theo nguyên tắc tương ứng theo mẫu trong các ví  dụ dưới đây.

Input

Chỉ có một số dòng ghi số hàng và số cột của hình chữ nhật (không quá 20).

Output

Ghi ra kết quả theo mẫu.

Ví dụ
Input:
5 5

Output:
eeeee
edddd
edccc
edcbb
edcba
---
Input:
4 6

Output:
ffffff
feeeee
fedddd
fedccc
---
Input:
6 4

Output:
ffff
feee
fedd
fedc
fedc
fedc
*/

#include <stdio.h>

int main() {
	int a, b, i, j;
	scanf("%d %d", &a, &b);
	for (i = 0; i < a; i++) {
		char c = a - 1 + 'a';
		for (j = 0; j < b; j++) {
			printf("%c", (j < i) ? c-- : c);
		};
		printf("\n");
	};
	return 0;
}
