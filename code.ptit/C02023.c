#include <stdio.h>

int main() {
	int a,b,i,j;
	scanf("%d %d",&a,&b);
	for(i=0; i<a; i++) {
		char c='e';
		for(j=0; j<b; j++) {
			if(j<i)
				c--;
			printf("%c",c);
		};
		printf("\n");
	};
	return 0;
}
