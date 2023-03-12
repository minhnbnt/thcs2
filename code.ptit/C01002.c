/*
Cho số tự nhiên N không quá 9 chữ số. Hãy in ra giá trị gấp đôi của N.

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
2
46
*/

#include <stdio.h>

int main() {
	unsigned int n;
	scanf("%d", &n);
	long int arr[n];
	for (int i = 0; i < n; i++)
		scanf("%ld", &arr[i]);
	for (int i = 0; i < n; i++)
		printf("%ld\n", arr[i] * 2);
	return 0;
}
