//sum_all_array_elements_using_recursion//

#include<stdio.h>

int main()
{
	int n, sum=0,i=0;
	printf("Enter the number:\n");
	scanf("%d", &n);
	int arr[n];
	
	for(i=0; i<n; i++)
	{printf("Enter %d element:\n", i);
	scanf("%d", &arr[i]);
	sum+=arr[i];
    }
	printf("%d is the sum of these elements.", sum);
	return 0;
}
