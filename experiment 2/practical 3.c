
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c;
	printf("\nEnter the first no.");
	scanf("%d", &a);
	printf("\nEnter the second no.");
	scanf("%d", &b);
	printf("\nEnter the third no.");
	scanf("%d", &c);
	
	if (a>=b, a>=c){
		printf("\n%d is the greatest no.", a);
	}else if(b>=a, b>=c){
		printf("\n%d is the greatest no.", b);
	}else{
		printf("\n%d is the greatest no.", c);
	}
	
	
	
	return 0;
}
