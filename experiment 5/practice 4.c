/*prime no.*/
#include <stdio.h>

void main()
{
	int n,i,j;
	printf("Enter the upper limit:");
	scanf("%d", &n);
	printf("Prime number upto %d is:", n); 	
	for ( i=2; i<=n; i++)
	{
		int count=0;
		for (j=2; j<i; j++)
		{
			if (i%j==0)
			{
				count++;
			}
		}
		if (count==0)
		{
			printf("%d,", i);
		}
	}
}
