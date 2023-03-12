#include <stdio.h>

int main() {
	int a,b,i;
	scanf("%d %d",&a,&b);
	for(i=a-1; i>=0; i--) {
		int c=i,j=b;
		while(c<b) {
			printf("%c",'A'+c++);
			j--;
		}
		while(j--)
			printf("%c",'A'+b-1);
		printf("\n");
	}
	return 0;
}
