/*
Viết chương trình nhập vào một xâu ký tự S, thực hiện phân tích xâu đã nhập chứa
bao nhiêu chữ cái, chữ số và các ký tự khác.


Input:
Chỉ có một dòng ghi xâu S.

Output:
Ghi ra kết quả theo mẫu trong ví dụ: số chữ cái, số chữ số, số các ký tự khác.

Ví dụ:
Input:
mon thcs mon THCS 2 ...

Output:
14 1 8
*/

#include <stdio.h>

int main() {
	char *str;
	scanf("%[^\n]", str);
	int w = 0, n = 0, o = 0, i = 0;
	while (str[i++] != '\0')
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
			w++;
		else if (str[i] > 47 && str[i] < 58)
			n++;
		else
			o++;
	printf("%d %d %d\n", w, n, o);
	return 0;
}
