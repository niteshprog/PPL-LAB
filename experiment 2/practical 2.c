#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	printf("\nEnter the no.");
	scanf("%d", &a);
	
	int b =2;
	if (a%b==0)
	{
		printf("this is even ");
	}else{
		printf("this is not even");
	}
	
	return 0;
}
