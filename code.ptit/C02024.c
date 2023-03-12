#include <stdio.h>

int main(){
	int a,b,i;
	scanf("%d %d",&a,&b);
	for(i=0;i<a;i++){
		int j=b,c=i;
		while(c<b){
			printf("%c",'A'+c++);
			j--;
		}
		while(j--)
			printf("%c",'A'+j);
		printf("\n");
	}
	return 0;
}
