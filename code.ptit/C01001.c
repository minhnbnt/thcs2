/*
Cho số tự nhiên N không quá 7 chữ số. Hãy in ra giá trị gấp đôi của N.

Input
Có duy nhất một số tự nhiên không quá 7 chữ số.

Output
Ghi ra kết quả trên một dòng.

Ví dụ

Input:
23

Output:
46
*/

#include <stdio.h>

int main() {
	unsigned long int n;
	scanf("%ld", &n);
	printf("%ld", 2 * n);
	return 0;
}
