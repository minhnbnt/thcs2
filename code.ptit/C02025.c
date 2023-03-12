#include <stdio.h>

int main() {
	int a,b,i;
	scanf("%d %d",&a,&b);
	for(i=0; i<a; i++) {
		int c=i,j=b;
		while(c<a) {
			printf("%c",'@'+c++);
			j--;
		};
		c--;
		while(j--)
			printf("%c",'@'+c);
		printf("\n");
	};
	return 0;
}
