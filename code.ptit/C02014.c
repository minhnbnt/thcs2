#include <stdio.h>

int main() {
	int n,i,j,num;
	scanf("%d",&n);
	for(i=0; i<n; i++) {
		num=n,j=n+1;
		while (j-->n-i+1) printf("%d",num--);
		while(j--) printf("%d",num);
		while(++j<n-i-1) printf("%d",num);
		while(++j<n) printf("%d",++num);
		printf("\n");
	}
	for(i=n-1; i>0; i--) {
		num=j=n;
		while(--j>n-i) printf("%d",num--);
		while(j--) printf("%d",num);
		while(++j<n-i) printf("%d",num);
		while(j++<n) printf("%d",num++);
		printf("\n");
	}
	return 0;
}
