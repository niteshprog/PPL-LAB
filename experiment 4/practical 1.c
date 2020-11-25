#include <stdio.h>
#include <stdlib.h>

int main()
{	
    int a,b,c;
    printf("Enter the first no:");
	scanf("%d", &a);
	printf("Enter the second no.");
	scanf("%d", &b);
	printf("Enter the third no.");
	scanf("%d", &c);
	if(a>=b, a>=c){
		printf("%d", a);
	}else if (b>=a, b>=c){
		printf("%d", b);
	}else{
		printf("%d", c);
	}
	return 0;
} 
