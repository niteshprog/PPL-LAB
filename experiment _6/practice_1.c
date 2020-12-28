//function_to_reverse_number_using_recursion//
#include<stdio.h>

int fncn(int n, int m)
{
	if(n>m)
	{
		printf("%d is the greatest of two.", n);
	}else 
	{
		printf("%d is greatest of two.", m);
	}return 0;
}
int main()
{
	printf("Let's find out the biggest number.\n");
	int fn, sc;
    printf("Enter the two digits to compare:\n");
	scanf("%d %d", &fn, &sc);
	fncn(fn, sc);
	return 0;
}
