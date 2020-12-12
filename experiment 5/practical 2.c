#include<stdio.h>

int main(){
	int a,b, prod;
	printf("Enter the two numbers:");
	scanf("%d%d", &a,&b);
	for(prod=0;b>0;b--){
		prod= prod+a;
	}printf("%d", prod);
	return 0;
}
