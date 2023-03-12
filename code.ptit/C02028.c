#include <stdio.h>

int main() {
	int n,i,j;
	scanf("%d",&n);
	for(i=0; i<n; i++) {
		char c='A'+i*2;
		for(j=0; j<n-i; j++)
			printf("%c",c+2*j);
		printf("\n");
	};
	return 0;
}
