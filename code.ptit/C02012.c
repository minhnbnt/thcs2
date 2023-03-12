#include <stdio.h>

int main() {
	int a,b,i;
	scanf("%d %d",&a,&b);
	for(i=1; i<=a; i++) {
		int num=i,j=b;
		while(num&&j--)
			printf("%d",num--);
		num=1;
		while(j--)
			printf("%d",++num);
		printf("\n");
	};
}
