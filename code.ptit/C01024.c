/*
Viết chương trình kiểm tra một số nguyên dương bất kỳ (2 chữ số trở lên, không
quá 9 chữ số) có chữ số bắt đầu và kết thúc bằng nhau hay không.

Input:
Dòng đầu tiên ghi số bộ test. Mỗi bộ test viết trên một dòng số nguyên dương
tương ứng cần kiểm tra.

Output:
Mỗi bộ test viết ra YES hoặc NO, tương ứng với bộ dữ liệu vào

Ví dụ
Input:
2
12451
1000012

Output:
YES
NO
*/

#include <stdio.h>

char *check(long int num) {
	int first, last = num % 10;
	while (num > 0) {
		if (num)
			first = num;
		num /= 10;
	};
	return (first - last) ? "NO" : "YES";
}

int main() {
	unsigned int n;
	scanf("%d", &n);
	long int arr[n];
	for (int i = 0; i < n; i++)
		scanf("%ld", &arr[i]);
	for (int i = 0; i < n; i++)
		printf("%s\n", check(arr[i]));
	return 0;
}
