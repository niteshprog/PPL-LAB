#include<stdio.h>

int main(){
	int a,b,sum=0;
	printf("Enter the two numbers:");
	scanf("%d%d", &a,&b);
	while(b>0){
		a++;
		b--;
	}printf("%d is the total.", a);
	return 0;
}
