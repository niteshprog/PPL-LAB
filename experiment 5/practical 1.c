#include<stdio.h>

int main(){
	int n, sum=0,r,t;
	printf("Enter the number:");
	scanf("%d", &n);
	t=n;
	while(n>0){
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if (t==sum){
		printf("This is armstrong no.");
	
	}
	else{
		printf("This is not armstrong no.");
	}
	return 0;
}
