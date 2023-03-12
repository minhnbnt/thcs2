/*
Hãy viết chương trình tính tổng các chữ số của một số nguyên bất kỳ.

Input :
Dòng đầu tiên của dữ liệu vào ghi số bộ test, mỗi bộ test ghi trên một dòng 1 số
nguyên dương không quá 9 chữ số.

Output:
Kết quả của mỗi bộ test cũng ghi trên một dòng.

Ví dụ
Input:
1
1024

Output:
10
*/

#include <stdio.h>

int main() {
	unsigned int n;
	scanf("%d", &n);
	long int a[n];
	for (int i = 0; i < n; i++)
		scanf("%ld", &a[i]);
	for (int i = 0; i < n; i++) {
		int sum = 0;
		while (a > 0) {
			sum += a[i] % 10;
			a[i] /= 10;
		}
		printf("%d\n", sum);
	}
	return 0;
}
