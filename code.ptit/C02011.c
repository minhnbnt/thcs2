#include <stdio.h>

int main() {
	int a,b,i;
	scanf("%d %d",&a,&b);
	for(i=0; i<a; i++) {
		int num=i,j=0;
		while (++num<b) {
			printf("%d",num);
			j++;
		};
		while(j++<b)
			printf("%d",num--);
		printf("\n");
	};
	return 0;
}
