/*
Cho số tự nhiên N không quá 9 chữ số. Hãy in ra giá trị bình phương của N.

Input:
Dòng đầu ghi số bộ test. Mỗi bộ test có duy nhất một số tự nhiên không quá 9 chữ
số.

Output:
Với mỗi bộ test, ghi ra kết quả trên một dòng.

Ví dụ:
Input:
2
1
23

Output:
1
529
*/

#include <math.h>
#include <stdio.h>

int main() {
	unsigned int n;
	scanf("%d", &n);
	long int x;
	for (int i = 0; i < n; i++) {
		scanf("%ld", &x);
		printf("%f\n", pow(x, 2));
	};
	return 0;
}
