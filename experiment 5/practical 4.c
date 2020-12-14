#include <stdio.h>

int main(){
	int n,i=1;
	float x,sum;
	printf("Enter the no.:");
	scanf("%d", &n);
	for(i==1;i<=n;i++){
		x= 1.0/i;
		sum+=x;
	}printf("%f", sum);
	return 0;
}
