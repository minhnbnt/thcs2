/*
Một từ trong xâu ký tự được định nghĩa là một dãy ký tự liên tiếp không có
khoảng trống. Hãy đếm số từ của xâu và in kết quả ra màn hình.

Dữ liệu vào: Dòng đầu ghi số bộ test. Mỗi bộ test có một xâu không quá 200 ký
tự.

Kết quả: Ghi ra số từ đếm được.

Ví dụ
Input:
2
Lap trinh     C va C++
ACBDSDS kdfjdkgfdgkhfgjlfgdkjfdgdgfdgfd

Output:
5
2
*/

#include <stdio.h>

int strword(char *str) {
	int result = 0, i = 0;
	char flag = 1;
	while (str[i++] != '\0')
		if (str[i] == ' ')
			flag = 1;
		else if (flag) {
			result++;
			flag = 0;
		}
	return result;
}

int main() {
	unsigned int n;
	scanf("%d%*c", &n);
	int result[n];
	char str[200];
	for (int i = 0; i < n; i++) {
		scanf("%[^\n]", str);
		result[i] = strword(str);
	};
	for (int i = 0; i < n; i++)
		printf("%d\n", result[i]);
	return 0;
}
