/*
Xét việc di chuyển từ điểm nguyên này tới điểm nguyên khác trên  đường thẳng
theo quy tắc sau:

Bắt đầu từ một điểm có toạ độ nguyên,
Từ điểm hiện tại tới điểm mới với bước đi không âm, độ dài bằng bước đi trước
hoặc khác 1 đơn vị.


Yêu cầu: Cho 2 số nguyên x và y (0 ≤ x ≤ y ≤ 2^31). Hãy xác định số bước tối
thiểu đi từ x tới y với với bước đi ban đầu và bước đi cuối cùng đều có độ
dài 1.

Ví dụ, với x = 45, y = 40, số bước di chuyển tối thiểu là 4:
45 -> 46 -> 48 -> 49 -> 50

Input
Gồm nhiều dòng, mỗi dòng ghi hai số x, y. Cần đọc đến hết luồng dữ liệu vào.

Output
Mỗi dòng ghi kết quả của bộ test tương ứng

Ví dụ:
Input:
0  6
14 19
2  5

4
4
3
*/

#include <stdio.h>

long range(long step) {
	long result = 0;
	for (long i = 1; i < step; i++)
		result += i;
	return result;
}

int main() {
	long a, b;
	while (scanf("%ld %ld", &a, &b) != EOF) {
		if (a > b) {
			long temp = a;
			a = b;
			b = temp;
		};
		long result = 0, step = 0;
		while (b - a > range(++step + 1)) {
			a += step;
			result++;
		};
		while (b - a) {
			while (b - a >= range(step + 1)) {
				a += step;
				result++;
			};
			step--;
		};
		printf("%ld\n", result);
	};
	return 0;
}
