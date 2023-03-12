/*
Một số nguyên dương có N chữ số được gọi là SỐ VÒNG nếu khi ta nhân số đó lần
lượt với các số từ 1 đến N thì ta được một số thỏa mãn tính chất:

Nếu như chọn các chữ số từ một vị trí nào đó rồi vòng lại (đến trước chữ số đầu
tiên chọn) ta được số đã cho ban đầu.

Ví dụ: số 142857 là số vòng, vì:
142857 × 1 = 142857
142857 × 2 = 285714
142857 × 3 = 428571
142857 × 4 = 571428
142857 × 5 = 714285
142857 × 6 = 857142

Viết chương trình xác định xem một số có phải số vòng hay không.

Input
Dòng đầu ghi số bộ test. Không quá 20.
Mỗi bộ test trên một dòng số nguyên, có từ 2 đến 60 chữ số.

Chú ý: Có thể có các số 0 ở đầu, và không được xóa bỏ các số 0 này, nó là một
phần của số và  cũng được tính trong việc xác định độ dài của số.

Ví dụ: “01” là số có 2 chữ số, nó khác với “1” có 1 chữ số.

Output
Ghi ra YES hoặc NO

Ví dụ

Input:
5
142857
142856
142858
01
0588235294117647

Output:
YES
NO
NO
NO
YES
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char check(char *x) {
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
