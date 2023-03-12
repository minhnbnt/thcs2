#include <stdio.h>

int main() {
	int a,b,i;
	scanf("%d %d",&a,&b);
	for(i=0; i<a; i++) {
		int num=b-i,j=b;
		while(num&&j--)
			printf("%d",num--);
		num=1;
		while(j--)
			printf("%d",++num);
		printf("\n");
	}
	return 0;
}
